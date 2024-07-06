#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int d, bool included[], size_t included_len) 
{
    int answer = 0;
    
    for (int i = 0; i < included_len; i++) 
    {
        if (included[i] == true)
            answer += a + i * d;
    }
    return answer;
}

int main() {
    int a, d;
    size_t included_len;

    printf("Enter a, d and included_len: ");
    scanf("%d %d %zu", &a, &d, &included_len);

    bool *included = malloc(included_len * sizeof(bool));

    printf("Enter true (1) or false (0) :\n");
    for (int i = 0; i < included_len; i++) 
    {
        int choose;
        scanf("%d", &choose); 

        if (choose == 0)
            included[i] = false;
        else
            included[i] = true;
    }

    int result = solution(a, d, included, included_len);
    printf("The result is: %d\n", result);

    free(included);
    return 0;
}
