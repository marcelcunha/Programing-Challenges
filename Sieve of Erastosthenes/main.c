#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int is_prime(unsigned int n)
{
    unsigned int i;

    if(n<2) /*números menores que dois não devem ser considerados*/
        return -1;
    if(n==2)/*se n for dois, retorno positivo*/
        return 1;
    if(n%2==0) /*se n for par, retorno negativo*/
        return 0;

    /*verifica-se */
    for(i=3; i<(n/2)+1; i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

void get_primes(unsigned int n)
{
        int i;

        for(i=2; i<=n; i++)
        {
            if(is_prime(i)==1)
                printf("%d ", i);
        }
}

void brute_force_primes(unsigned int n)
{
        int i, j;

        for(i=2; i<=n; i++)
        {
            if(i%2==0&&i!=2) /*se n for par e diferente de 2, retorno negativo*/
                continue;

            int flag = -1; //flag para marcar que o número não é primo

            for(j=3; j<(i/2); j=j+2)
            {
                if((i%j==0))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)//se o número verificado não for primo, segue o loop
                continue;

             printf("%d ", i);
        }
}

void sieve_of_eratosthenes(unsigned int n)
{
    unsigned int i,j, primes[n-1];

    for(i=0; i<n-1;i++)
        primes[i] = 1;

    for(i=2; i<= (int)sqrt(n);i++)
    {
        if(primes[i-2]==1)
        {
             int k;
             for(k=2, j=i*k; j<=n; k++, j=i*k)
             //for(k=1, j=(i*i); j<=n; j=(i*i)+i*k, k++)
                primes[j-2] = -1;
        }
    }

    for( i=0; i<n-1;i++)
    {
        if(primes[i]==1)
            printf("%d ", i+2);
    }
}

int main()
{
  /* unsigned int i; 
    clock_t begin, end;
    double time;
    FILE* f ;
    
    f = fopen("reslts.txt", "a");
      fprintf(f, "%s\t%s\t%s", "Tamanho","Tempo BF", "Tempo SE\n\n"); 
      
   for(i=0; i<4; i++)
   {*/
       int n = 120;
     /* int n = 120*pow(10,i);
      
      begin = clock();*/
      brute_force_primes(n);
     /* end = clock();
       
      time = end-begin;
       
      fprintf(f, "%6d\t%f", n, time); 
       */
      printf("\n\n\n\n\n\n");
      
      
     /* begin = clock();*/
      sieve_of_eratosthenes(n);
      /*end = clock();
      
      time = end-begin;
       
      fprintf(f, "\t%f\n", time); */
  // }
    
   
    return 1;
}
