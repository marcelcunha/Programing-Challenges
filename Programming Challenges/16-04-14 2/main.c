#include <stdio.h>

int count_approved(int *array, int size)
{
    int count =0, i;
    
    for(i=0; i<size; i++)
        if(array[i]>=60)
            count++;
            
    return count;
}

int main()
{
    int array[100], i, size=0;
    
    for(i=0; scanf("%d", &array[i])!=EOF; i++)
        size++;
    
    
    printf("%d\n", count_approved(array, size));
   
   return 1;
}