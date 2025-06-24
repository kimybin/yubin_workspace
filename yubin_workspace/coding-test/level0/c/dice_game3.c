#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MIN4(a, b, c, d) MIN(MIN(a, b), MIN(c, d))

int solution(int a, int b, int c, int d) {
    int answer = 0;

    if(a == b && a == c && c == d)
        answer = 1111*a;

    else if(a != b && b == c && c == d)
        answer = (10*b+a)*(10*b+a);
    else if(b != a && a == c && c == d)
        answer = (10*a+b)*(10*a+b);
    else if(c != a && a == b && a == d)
        answer = (10*a+c)*(10*a+c);
    else if(d != a && a == b && a == c)
        answer = (10*a+d)*(10*a+d);

    else if(a == b && c == d && a != c)
        answer = (a+c) * abs(a-c);
    else if(a == c && b == d && a != b)
        answer = (a+b) * abs(a-b);
    else if(a == d && b == c && a != b)
        answer = (a+b) * abs(a-b);

    else if(a == b && a != c && a != d && c != d)
        answer = c * d;
    else if(a == c && a != b && a != d && b != d)
        answer = b * d;
    else if(a == d && a != b && a != c && b != c)
        answer = b * c;
    else if(b == c && b != a && b != d && a != d)
        answer = a * d;
    else if(b == d && b != a && b != c && a != c)
        answer = a * c;
    else if(c == d && c != a && c != b && a != b)
        answer = a * b;

    else if(a != b && a != c && c != d)
        answer = MIN4(a, b, c, d);

    return answer;
}

int main()
{
    int a, b, c, d;

    printf("Enter a, b, c and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = solution(a, b, c, d);
    printf("The result is: %d\n", result);

    return 0;
}
