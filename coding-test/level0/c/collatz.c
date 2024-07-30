#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int* length) {
    int* answer = (int*)malloc(1000 * sizeof(int));
    int element = 0;
    
    answer[element++] = n;
    
    while(n != 1)
    {
        if(n % 2 == 0)
            n = n / 2;
        else if(n % 2 == 1)
            n = 3 * n + 1;
        
        *length = element+1;
        answer[element++] = n;
    }

    answer = (int*)realloc(answer, element * sizeof(int));
    return answer;
}

int main()
{
    int n;
    int length;


    printf("Enter n: ");
    scanf("%d", &n);

    int* result = solution(n, &length);
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
