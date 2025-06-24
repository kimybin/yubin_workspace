#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int start_num, int end_num) {
    int* answer = (int*)malloc((end_num-start_num+1) * sizeof(int));

    for(int i = 0; i < end_num - start_num + 1; i++)
        answer[i] = start_num + i;

    return answer;

}

int main()
{
    int start_num;
    int end_num;

    printf("Enter start_num and end_num(0~50): ");
    scanf("%d %d", &start_num, &end_num);

    int* result = solution(start_num, end_num);

    for(int i = 0; i < end_num-start_num+1; i++)
    {
        printf("%d ", result[i]); 
    }  
    printf("\n");

    free(result);
    return 0;
}
