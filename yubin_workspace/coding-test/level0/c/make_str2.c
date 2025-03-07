#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int l, int r, int* len) {
    int* answer = (int*)malloc(sizeof(int)*(r-l+1));
    char* num = (char*)malloc(sizeof(char)*(r-l+1));
    int idx = 0;
    
    for(int i = l; i <= r; i++)
    {
        sprintf(num, "%d", i); // 정수 i를 문자열 num에 저장. 정수 i를 문자열로 변환하는 것. 
        int count = 0; // 매번 새롭게 초기화해주기 위함이다.
        for(int j = 0; j < strlen(num); j++) // num의 길이이므로 만약 num이 5이면 strlen(num)은 1이다. 
        {
            if(num[j] == '5' || num[j] == '0')
                count++; // count 변수는 각 숫자를 문자열로 변환한 num에서 '5' 또는 '0'이 나타난 횟수를 세는 역할.
        }
        if(count == strlen(num)) // count (즉, '5' 또는 '0'의 개수)가 num의 길이 (즉, 숫자의 총 자릿수)와 같은지 비교.
        {
            answer[idx] = i;
            idx++;
        }    
    }
    *len = idx; // len 포인터가 가리키는 메모리 위치에 idx 변수의 값을 저장하여, 
                // answer 배열에 들어 있는 데이터의 개수를 main 함수로 전달하는 것
    if(idx == 0)
        answer[idx] = -1;
    return answer;
}

int main()
{
    int l, r;
    int len;
    printf("Enter l and r: ");
    scanf("%d %d", &l, &r);

    int* result = solution(l, r, &len);

    printf("The result is: ");
    for (int i = 0; i < len; i++)
        printf("%d ", result[i]);
    printf("\n");

    free(result);

    return 0;
}
