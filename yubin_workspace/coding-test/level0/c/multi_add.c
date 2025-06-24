#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int multi = 1;
    int sum = 0;
    
    for(int i = 0; i < num_list_len; i++)
    {
        multi *= num_list[i];
        sum += num_list[i];
    }
    
    int all_sum = sum * sum;
    
    if(multi < all_sum)
        answer = 1;
    else
        answer = 0;
         
    return answer;
}

int main()
{
    int num_list[10];
    size_t num_list_len;

    printf("Enter num_list(1~9) : ");
    scanf("%zu", &num_list_len);

    int result = solution(num_list, num_list_len);
    printf("The result is : %d\n", result);

    return 0;
}
