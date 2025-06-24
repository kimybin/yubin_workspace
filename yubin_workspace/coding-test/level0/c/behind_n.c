#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(n+1));
    strncpy(answer, my_string + len - n, n);
    answer[n] = '\0';

    return answer;
}

int main()
{
    char my_string[100];
    int n;

    printf("Enter string: ");
    scanf("%s", my_string);

    printf("Enter n: ");
    scanf("%d", &n);

    char* result = solution(my_string, n);
    printf("The result is : %s\n", result);

    return 0;
}
