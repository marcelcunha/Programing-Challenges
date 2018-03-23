
#include <stdio.h>

/*Soma de ímpares consecutivos*/
int main(){
   int n, x, y, soma=0, i,j ;
    
    scanf("%d", &n);
    
   for(i=0; i<n; i++){
        scanf("%d%d", &x, &y);
       if(x%2==0)
         x++;
       
       for(j=0; j<y;j++){
           soma += x;
           x=x+2;
       }
       
       printf("%d\n", soma);
       soma = 0;
   }
    
return 0;
}