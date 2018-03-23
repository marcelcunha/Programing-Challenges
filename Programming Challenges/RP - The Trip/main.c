#include <stdio.h>
#include <stdlib.h>

int main()
{
    int travels=-1, dollar, cents;

    scanf("%d", travels);

    int i;
    for(i=0; i<travels;i++)
    {
        scanf("%d.%d", dollar, cents);
    }
    return 0;
}
