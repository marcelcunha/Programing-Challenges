#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int* merge_array(int*a, int a_size ,int* b, int b_size)
{
    int i=0, j=0;
    int *c = malloc((a_size+b_size)*sizeof(int));
    a[a_size-1] = INT_MAX;
    b[b_size-1] = INT_MAX;

    while((i+j-1)<=a_size+b_size)
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

int main()
{
    int a[7] = {4,5,8,9,30,31},
        b[9] = {2, 6, 8,10,22,32,100, 102},
        *c, i;

    c = merge_array(a, 7, b, 9);

    for(i=0; i<14; i++)
    {
        printf("%d ", c[i]);
    }


    return 1;
}
