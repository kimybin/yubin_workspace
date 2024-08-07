#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* code) {
    int len = strlen(code);
    char* answer = (char*)malloc((len+1)*sizeof(char));
    int mode = 0;
    int idx = 0;
    
    for(int i = 0; i < len; i++)
    {
        if(mode == 0)
        {
            if(code[i] == '1')
                mode = 1;
            else if(code[i] != '1' && i % 2 == 0)
            {
                answer[idx] = code[i];
                idx++;
            } 
        }
        else if(mode == 1)
        {
            if(code[i] == '1')
                mode = 0;
            else if(code[i] != '1' && i % 2 == 1)
            {
                answer[idx] = code[i];
                idx++;
            }
        }
    }
    answer[idx] = '\0';
    
    return answer[0] != '\0' ? answer : "EMPTY";
}

int main()
{
    char code[100];
    
    printf("Enter code: ");
    fgets(code, sizeof(code), stdin);
    code[strcspn(code, "\n")] = '\0';

    char* result = solution(code);

    printf("The result is : %s\n", result);
    if(result[0] != '\0')
        free(result);
    
    return 0;
}
