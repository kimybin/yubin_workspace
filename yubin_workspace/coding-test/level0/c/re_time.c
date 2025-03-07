#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (len+1)); // 문자열의 끝에 널 문자 ('\0')가 자동으로 추가되어 문자열의 끝을 표시하기 때문에, 널 문자를 고려하여 +1을 해준 것
    
    strcpy(answer, my_string); // my_string 문자열을 복사해 answer 메모리 버퍼에 저장
                               // strcpy 함수는 자동으로 널 문자 추가
                               // my_string은 const char*로 주어지기 때문에 원본 문자열을 직접 수정하는 것은 불가능함. 그래서 answer라는 새로운 배열을 할당하여 복사
                               // 원본 문자열이 변경될 수 있어서, answer 배열에서 문자열을 수정하려면, 원본 문자열을 복사한 후 그 복사본 수정
    
    
    for(int i = 0; i < queries_rows ; i++) // 행렬 표를 그려보면 쉽게 이해 가능
    {       
        int s = queries[i][0]; // queries가 문자열의 어떤 부분을 수정할지 지정하는 인덱스 추출 
        int e = queries[i][1];
        
        while(s < e) // 부분 문자열 뒤집기
        {
            char temp = answer[s]; 
            answer[s] = answer[e]; 
            answer[e] = temp;
            
            s++; // 문자열의 두 끝에서 중앙으로 접근하여 문자를 서로 교환
            e--; // 해당 구간 내의 모든 문자 뒤집기
        }
    }
    
    return answer;
}

int main()
{
    char my_string[100];
    int **queries; // 2차원 배열이기 때문에 이중 포인터 사용
    size_t queries_rows;
    size_t queries_cols = 2; // 각 queries의 열은 2로 정해져 있음

    printf("Enter string: ");
    scanf("%s", my_string);

    printf("Enter rows(a two-dimensional arrangement): ");
    scanf("%zu", &queries_rows);

    queries = (int**)malloc(sizeof(int*) * queries_rows); // queries 배열의 행을 동적 할당
    for(size_t i = 0; i < queries_rows; i++) // queries 배열의 열을 동적 할당
        queries[i] = (int*)malloc(sizeof(int)*queries_cols);

    for(size_t i = 0; i < queries_rows; i++) // queries 배열의 요소들을 입력받음
    {
        printf("Enter query %zu: ", i+1);
        scanf("%d %d", &queries[i][0], &queries[i][1]);
    }

    char* result = solution(my_string, queries, queries_rows, queries_cols);
    printf("The result is: %s\n", result);

    free(result); // result 동적 할당 해제
    for (size_t i = 0; i < queries_rows; i++) { // queries 배열의 열 동적 할당
        free(queries[i]); 
    }
    free(queries); // queries 배열의 행 동적 할당 해제

    return 0;
}
