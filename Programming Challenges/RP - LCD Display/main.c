#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* choose_number(char number,int i, int j, int m, int n)
{
    char *result = (char *) malloc(sizeof(char) * 2);

    switch (number)
    {
    case '0':
        result[0] = i==(m-1)/2 ? ' ': '-';
        result[1] = '|';
        break;

    case '1':
        result[0] = ' ';
        result[1] = j!=0?'|':' ';
        break;
    case '2':
        result[0] = '-';
        result[1] = (i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==n-1)?' ':'|';
        break;
    case '3':
        result[0] = '-';
        result[1] = (i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==0)?' ':'|';
        break;
    case '4':
        result[0] = i==0 || i==m-1? ' ': '-';
        result[1] = i>(m-1)/2 && j==0 ?' ':'|';
        break;
    case '5':
        result[0] = '-';
        result[1] = (i<(m-1)/2 && j==n-1)|| (i>(m-1)/2 && j==0)?' ':'|';
        break;
    case '6':
        result[0] = '-';
        result[1] = i<(m-1)/2 && j==n-1 ?' ':'|';
        break;
    case '7':
        result[0] = i>=(m-1)/2?' ': '-';
        result[1] = (i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==0)?' ':'|';
        break;
    case '8':
        result[0] = '-';
        result[1] = '|';
        break;
    case '9':
        result[0] = '-';
        result[1] = i>(m-1)/2 && j==0 ?' ':'|';
        break;
    }
    return result;
}

void print_num(char number, int i, int m, int n,  int mod)
{
    int j;
    char *c;

    for (j=0;j<n ;j++ )
    {
        c = choose_number(number, i, j,m,n );
        if(i%mod==0&&j%mod!=0)
            printf("%c", c[0]);
        else if(i%mod!=0&&j%mod==0)
            printf("%c", c[1]);
        else
            printf(" ");
    }
}

int main()
{
    int i,j, s,row, col, len, mod;
    char n[15];

    while(scanf("%d %s", &s, &n)!=EOF)
    {
        if((s==0 && strcmp(n,"0")==0))
            break;

        len = strlen(n);
        if(s>=1&& s<=10 && len>=0)
        {
            mod=1;
            mod+=s;
            row=3+2*s;
            col=2+s;

            for (i=0;i<row ;i++ )
            {
                for (j=0; j<len; j++ )
                {
                    print_num(n[j], i, row, col, mod);
                    if (j!=len-1)
                        printf(" ");
                }
                 printf("\n");
            }
            printf("\n");
        }
        /*printf("Loop");*/
    }

    return 0;
}
