#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    
    if(a != b && b != c && a!= c)
        answer = a + b + c;
    else if(a == b && b == c)
        answer = (a+b+c)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c);
    else
        answer = (a+b+c)*(a*a+b*b+c*c);
        
    return answer;
}

int main()
{
    int a, b, c;
    printf("Enter a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    int result = solution(a, b, c);
    printf("The result is : %d\n", result);

    return 0;
}
