#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  i, j,/*Valores para intervalo*/
        i1, j1,
        k,/*Contador para loop*/
         n,
         count,/*Conta a quantidade de ciclos*/
          bigger; /*Armazena o maior ciclo*/

   while(scanf("%d %d", &i, &j)!=EOF)
   {
       bigger = 0;

       if((i+j==0)||(i>1000000)||(j>1000000))
            break;

        if(i<j)
        {
            i1=i;
            j1=j;
        }
        else
        {
            i1=j;
            j1=i;
        }
/*      i<j ? i1=i : i1=j;*/

        /*if(i>j)
        {
            count=i;
            i=j;
            j=count;
        }*/

       /*preenche as variáveis i e j com os valores da entrada*/
       for(k=i1; k<=j1; k++)
       {
           count=1;
           n=k;

           while(n>1)
           {
               if(n%2==0)
                    n/=2;
               else
                    n=(3*n)+1;
               count++;
           }
           if(bigger<count)
                bigger=count;
       }

      printf("%d %d %d\n", i, j, bigger);
   }

   return 0;
}
