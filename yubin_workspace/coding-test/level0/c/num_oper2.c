#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc((numLog_len) * sizeof(char));
    
    for(int i = 1; i < numLog_len; i++)
    {
        int diff = numLog[i] - numLog[i-1];
        
        if(diff == 1)
            answer[i-1] = 'w';
        else if(diff == -1)
            answer[i-1] = 's';
        else if(diff == 10)
            answer[i-1] = 'd';
        else if(diff == -10)
            answer[i-1] = 'a';
    }
    
    answer[numLog_len - 1] = '\0';
    return answer;
}

int main()
{
    int numLog[100];
    size_t numLog_len;

    printf("Enter numLog_len: ");
    scanf("%zu", &numLog_len);

    for(int i = 0; i < numLog_len; i++)
    {
        printf("Enter numLog element[%d]: ", i);
        scanf("%d", &numLog[i]);
    }

    char* result = solution(numLog, numLog_len);
    printf("The result is: %s\n", result);

    free(result);
    return 0;
}
