#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n, const char* control) {
    int answer = 0;
    int len = strlen(control);
    
    for(int i = 0; i < len; i++)
    {
        if(control[i] == 'w')
            n += 1;
        else if(control[i] == 's')
            n -= 1;
        else if(control[i] == 'd')
            n += 10;
        else if(control[i] == 'a')
            n -= 10;
    }
    
    answer = n;
    return answer;
}

int main()
{
    int n;
    char control[100];

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter control: ");
    scanf("%s", control);

    int result = solution(n, control);

    printf("The result is: %d\n", result);
    return 0;
}
