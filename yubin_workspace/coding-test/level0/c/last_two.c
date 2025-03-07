#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc((num_list_len + 1) * sizeof(int));
    int i = 0;

    for(i = 0; i < num_list_len; i++)
        answer[i] = num_list[i];
    
    if(num_list[i-1] > num_list[i-2])
        answer[i] = num_list[i-1] - num_list[i-2];
    else
        answer[i] = num_list[i-1] * 2;
    
    return answer;
}

int main()
{
    int num_list[12];
    size_t num_list_len;

    printf("Enter num_list_len: ");
    scanf("%zu", &num_list_len);

    for(int i = 0; i < num_list_len; i++)
    {
        printf("Enter num_list[%d]: ", i);
        scanf("%d", &num_list[i]);
    }

    int* result = solution(num_list, num_list_len);

    for(int i = 0; i < num_list_len + 1; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    free(result);
    return 0;
}
