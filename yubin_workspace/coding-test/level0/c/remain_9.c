#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* number) {
    int answer = 0;

    // 문자열의 각 문자를 숫자로 변환하고 9로 나눈 나머지를 더함
    for (int i = 0; number[i] != '\0'; i++) {
        answer = (answer + (number[i] - '0')) % 9;
    }

    return answer;
} 

int main()
{
    char number[100];
    printf("Enter string: ");
    scanf("%s", number);

    int result = solution(number);
    printf("The result is: %d\n", result);
    return 0;
}
