#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// my_strings_len은 배열 my_strings의 길이입니다.
// parts_rows는 2차원 배열 parts의 행 길이, parts_cols는 2차원 배열 parts의 열 길이입니다.
char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
    char* answer = (char*)malloc(1); // 초기 메모리 할당
    answer[0] = '\0'; // 초기 문자열을 빈 문자열로 설정
    
    for(int i = 0; i < parts_rows; i++) // 배열 표를 그려서 생각해보면 이해 하기 쉬움
    {
        int s = parts[i][0];
        int e = parts[i][1];
        int parts_len = e - s + 1;
        
        char* part_string = malloc((parts_len+1)); // 부분 문자열을 저장할 메모리 할당
        strncpy(part_string, &my_strings[i][s], parts_len); // my_string[i]의 s 인덱스에서 시작하는 주소로부터 parts_len 길이만큼의 문자들을 part_string 배열에 복사하여 저장함.
        part_string[parts_len] = '\0'; // strncpy 함수가 목적지 버퍼에 널 종료 문자를 자동으로 추가하지 않음. 문자열 배열을 사용할 때는 널 문자를 써줘야함.
        
        answer = realloc(answer, strlen(answer) + strlen(part_string) + 1);
        strcat(answer, part_string); // part_string을 answer에 이어 붙임. strcat 함수는 자동으로 문자열 끝애 널 문자 추가함. 
        
        free(part_string); // 더 이상 필요 없는 메모리 해제
    }
    
    return answer;
}

int main()
{
    char** my_strings; // 문자열 배열(여러 문자열을 저장할 수 있도록 이중 포인터 사용)
    int** parts; // 2차원 배열
    size_t my_strings_len; // 문자열 배열의 길이
    size_t parts_rows; // parts 배열의 행 수
    size_t parts_cols = 2; // parts 배열의 열 수 2로 정해져있음

    printf("Enter string len : "); // 문자열 배열 길이 입력
    scanf("%zu", &my_strings_len);
    getchar(); // 개행 문자 제거 : scanf로 입력 받은 후 개행 문자가 입력 버퍼에 남아있으면 후속 입력 함수가 개행 문자를 잘못 처리할 숭 ㅣㅆ음

    my_strings = (char**)malloc(sizeof(char*) * my_strings_len); // 문자열 배열 메모리 할당
    for(size_t i = 0; i < my_strings_len; i++) // 문자열 배열 입력 받기
    {
        my_strings[i] = (char*)malloc(1000 * sizeof(char)); // 각 문자열은 개별적으로 메모리 할당 받아야함
        // my_strings 배열에서 각 문자열의 길이가 다를 수 있음. 길이에 따라 메모리 크기 조절
        printf("Enter string %zu: ", i+1);
        fgets(my_strings[i], 1000, stdin); // fgets는 표준 입력에서 최대 999자의 문자열을 읽어 my_strings[i]에 저장함. 
        my_strings[i][strcspn(my_strings[i], "\n")] = '\0'; // 개행 문자의 위치를 찾고 해당 위치를 널 종료 문자로 대체하여 개행 문자 제거
    }

    printf("Enter parts_rows: "); // parts 배열의 행 수 입력 받기
    scanf("%zu", &parts_rows);
    
    parts = (int**)malloc(sizeof(int*) * parts_rows); // 전체 parts 배열의 메모리 할당 
    for(size_t i = 0; i < parts_rows; i++) // parts 배열의 각 요소 메모리 할당 
        parts[i] = (int*)malloc(sizeof(int) * parts_cols);

    for(size_t i = 0; i < parts_rows; i++) // parts 배열 요소 입력 받기
    {
        printf("Enter query %zu: ", i+1);
        scanf("%d %d", &parts[i][0], &parts[i][1]);
    }

    char* result = solution((const char**)my_strings, my_strings_len, parts, parts_rows, parts_cols);
    printf("The result is: %s\n", result);

    free(result); // result 메모리 해제
    for(size_t i = 0; i < my_strings_len; i++)
        free(my_strings[i]); // my_string 배열의 각각 문자열 메모리 해제
    free(my_strings); // my_string 배열 메모리 해제

    for(size_t i = 0; i < parts_rows; i++)
        free(parts[i]);  
    free(parts); 

    return 0;
}
