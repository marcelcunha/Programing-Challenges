#include <stdio.h>

int iterative_sum(int *a, int size)
{
    int sum=0, i;
    
    for(i=0; i<size; i++)
        sum+=a[i];
        
    return sum;
}

int recursive_sum(int *a, int size-1)
{
    if(size==0)
        return 0;
        
    return recursive_sum(a, size-1)+a[size];
}

int main()
{
    
    int array[100], i, size=0;
    
    for(i=0; scanf("%d", &array[i])!=EOF; i++)
        size++;
    
    printf("%d", recursive_sum(array, size));
    return 1;    
}
