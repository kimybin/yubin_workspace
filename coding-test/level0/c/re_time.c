#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (len+1));
    
    strcpy(answer, my_string);
    
    for(int i = 0; i < queries_rows ; i++)
    {       
        int s = queries[i][0];
        int e = queries[i][1];
        
        while(s < e)
        {
            char temp = answer[s];
            answer[s] = answer[e];
            answer[e] = temp;
            
            s++;
            e--;
        }
    }
    
    return answer;
}

int main()
{
    char my_string[100];
    int **queries;
    size_t queries_rows;
    size_t queries_cols = 2;

    printf("Enter string: ");
    scanf("%s", my_string);

    printf("Enter rows(a two-dimensional arrangement): ");
    scanf("%zu", &queries_rows);

    queries = (int**)malloc(sizeof(int*) * queries_rows);
    for(size_t i = 0; i < queries_rows; i++)
        queries[i] = (int*)malloc(sizeof(int)*queries_cols);

    for(size_t i = 0; i < queries_rows; i++)
    {
        printf("Enter query %zu: ", i+1);
        scanf("%d %d", &queries[i][0], &queries[i][1]);
    }

    char* result = solution(my_string, queries, queries_rows, queries_cols);
    printf("The result is: %s\n", result);

    free(result);
    for (size_t i = 0; i < queries_rows; i++) {
        free(queries[i]);
    }
    free(queries);

    return 0;
}
