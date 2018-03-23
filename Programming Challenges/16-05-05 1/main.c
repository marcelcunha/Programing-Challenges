#include <stdio.h>
#include <math.h>

double sin_(int x)
{
    int i, signal = -1;
    double sin = 0.0, term = x;
    
    
    for(i=3; abs(term)>0.000001;i+=2)
    {
        sin+=term;
        signal *=-1;
         term*= (x*x) / (i*(i-1))*signal;
    }
    
    return sin;
}

int main(int *a, int size)
{
   printf("%2.2f", sin_(1));
    
    return 0;
}