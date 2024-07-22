#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    char temp[12];
    char even[12] = "";
    char odd[12] = "";
    
    for(int i = 0; i < num_list_len; i++)
    {
        sprintf(temp, "%d", num_list[i]);
        
        if(num_list[i] % 2 == 0)
            strcat(even, temp);
        else
            strcat(odd, temp);
    }
    
    answer = atoi(even) + atoi(odd);
    
    return answer;
}

int main()
{
    size_t num_list_len;

    printf("Enter num_list(2~10): ");
    scanf("%zu", &num_list_len);

    int* num_list = malloc(num_list_len * sizeof(int));

    for (int i = 0; i < num_list_len; i++) {
        printf("Enter num_list[%d]: ", i);
        scanf("%d", &num_list[i]);
    }

    int result = solution(num_list, num_list_len);
    printf("The result is : %d\n", result);

    free(num_list);
    return 0;
}
