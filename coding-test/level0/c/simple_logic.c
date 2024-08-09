#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool str_to_bool(const char*str) {
    if(strcmp(str, "true") == 0)
        return true;
    else if(strcmp(str, "false") == 0)
        return false;
    else
        return false;
}

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    answer = (x1 || x2) && (x3 || x4);
    return answer;
}

int main()
{
    char x1[6];
    char x2[6];
    char x3[6];
    char x4[6];

    printf("Enter x1, x2, x3 and x4: ");
    scanf("%s %s %s %s", x1, x2, x3, x4);

    bool b_x1 = str_to_bool(x1);
    bool b_x2 = str_to_bool(x2);
    bool b_x3 = str_to_bool(x3);
    bool b_x4 = str_to_bool(x4);

    bool result = solution(b_x1, b_x2, b_x3, b_x4);

    printf("The result is: %s\n", result ? "true" : "false");
    return 0;
}
