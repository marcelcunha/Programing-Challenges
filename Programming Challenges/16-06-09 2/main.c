#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* merge_array(int*a, int a_size ,int* b, int b_size)
{
    int i=0, j=0;
    int *c = malloc((a_size+b_size)*sizeof(int));
    a[a_size-1] = INT_MAX;
    b[b_size-1] = INT_MAX;

    while((i+j)<=a_size+b_size)
    {
       if( a[i]<b[j])
       {
           c[i+j]=a[i];
            i++;
       }else
       {
           c[i+j]=b[j];
           j++;
       }
    }
    return c;
}

int* merge_sort(int *array, int ini, int end)
{
    int* a, *b;
    
    if(end-ini == 1)
        return array;
        
    *a = merge_sort(array, ini, (end-ini)/2);
    *b = merge_sort(array, ((end-ini)/2)+1, end);
    
    return merge_array(a, ((end-ini)/2)-ini, b, end - ((end-ini)/2)+1);
}

int main()
{
    int a[7] = {4,5,8,9,30,31},
       // b[9] = {2, 6, 8,10,22,32,100, 102},
       b[9] = {5, 10,1, 0, 56, 7, 58, 23, 14},
        *c, i;

    c = merge_sort(&b, 0, 8); 
        //merge_array(a, )
    for(i=0; i<9; i++)
    {
        printf("%d ", c[i]);
    }


    return 1;
}
