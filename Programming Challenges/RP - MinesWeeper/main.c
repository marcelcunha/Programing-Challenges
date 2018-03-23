#include <stdio.h>

void increment_one(int *value)
{
    if(*value!=-1)
        (*value)++;
}

int main()
{
    int i,j,
        m, n, count=1;

    while(scanf("%d %d", &m, &n) && (m+n)>0)
    {
        if(count>1)
            printf("\n");

        m+=2;
        n+=2;
        int matrix[m][n];
        char string[n];


        for (i=1; i<m-1; i++)
        {
            scanf("%s", &string);
            for (j=1; j<n-1; j++)
            {

                matrix[i][j]= string[j-1]=='*'? -1 : 0;
            }
        }
        for (i=1; i<m-1; i++)
        {
            for (j=1; j<n-1; j++)
            {
                if(matrix[i][j]==-1)
                {
                    increment_one(&matrix[i][j+1]);
                    increment_one(&matrix[i][j-1]);
                    increment_one(&matrix[i+1][j]);
                    increment_one(&matrix[i+1][j+1]);
                    increment_one(&matrix[i+1][j-1]);
                    increment_one(&matrix[i-1][j]);
                    increment_one(&matrix[i-1][j+1]);
                    increment_one(&matrix[i-1][j-1]);
                }
            }
        }

        printf("Field #%d:\n", count);
        for (i=1; i<m-1; i++)
        {
            for (j=1; j<n-1; j++)
            {
                printf("%c", matrix[i][j]==-1 ?'*':matrix[i][j]+'0');
            }

                printf("\n");
        }


        count++;


    }
    return 0;
}
