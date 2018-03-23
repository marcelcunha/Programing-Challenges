#include <stdio.h>

void swap(int *a , int* b)
{
    int swap;
    
    swap=*a;
        *a=*b;
        *b=swap;
}

int main ()
{
    int a, b;
    
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        
        swap(&a, &b);
        
        printf("%d %d\n", a, b);
    }
    
    return 1;
}