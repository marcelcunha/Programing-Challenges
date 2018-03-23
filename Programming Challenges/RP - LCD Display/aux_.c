
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* choose_number(char number,int i, int j, int m, int n)
{
    char op;
    char *result = (char *) malloc(sizeof(char) * 2);

    switch (op)
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
void print_num(int i, int m, int n,  int mod)
{
    int j;
    char *c;

    for (j=0;j<n ;j++ )
    {
        c = choose_number('6', i, j,m,n );
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
    /*int s, rows, col, i, j,;
    char n[8];

    while(scanf("%d %s", &s, &n)&& s!=0 && strcmp(n,"0")!=0)
    {
        rows=3+2*s;
        col+=2+s;


    }*/
    int i,j, s=3,m, n, mod=1;
        mod+=s;
        m=3+2*s;
        n=2+s;

    for (i=0;i<m ;i++ )
       {
           print_num(i, m, n, mod);
            //printf("\n");
            /*for (j=0;j<n ;j++ )
            {
                /**One*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", ' ');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c", j!=0?'|':' ');*/

                /**Two*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",(i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==n-1)?' ':'|');*/

                /**Three*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",(i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==0)?' ':'|');*/

                /**Four*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", i==0 || i==m-1? ' ': '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",i>(m-1)/2 && j==0 ?' ':'|');*/

                /**Five*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",(i<(m-1)/2 && j==n-1)|| (i>(m-1)/2 && j==0)?' ':'|');*/

                /**Six*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",i<(m-1)/2 && j==n-1 ?' ':'|');*/

                /**Seven*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", i>=(m-1)/2?' ': '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",(i<(m-1)/2 && j==0)|| (i>(m-1)/2 && j==0)?' ':'|');*/

                /**Eight*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c", '|');*/

                /**Nine*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c",i>(m-1)/2 && j==0 ?' ':'|');*/

                /**Zero*/
                /*if(i%mod==0&&j%mod!=0)
                    printf("%c", i==(m-1)/2 ? ' ': '-');
                else if(i%mod!=0&&j%mod==0)
                    printf("%c", '|');*/


                /*else
                    printf(" ");

                 //if(i%mod!=0&&j%mod==0&&j!=0)
                   /* printf("%c", i%mod!=0&&j%mod==0&&j!=0 ?'|':' ');
                else
                    printf(" ");*/
                    //printf("%d%d ", i, j);
            //}
             printf("\n");
       }
    system("pause");
    return 0;
}
