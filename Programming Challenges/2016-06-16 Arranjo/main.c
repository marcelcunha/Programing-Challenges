#include <stdio.h>

void array(int n, int k, int* a)
{
    if(k==a[0])
    {
        int i;
        for(i=0; i<n; i++)
            printf("%d ", a[i]);
            
        printf("\n")
    }
    else
    {
        int i;
        
        for(i=0; i<n; i++)
        {
            a[k]=i;
            array(n, k, a);
        }
    }
}

int main()
{
    int a[5];
    
    array(5, 3, a);
    
    return 1;
}