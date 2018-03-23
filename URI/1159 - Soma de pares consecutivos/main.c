#include <stdio.h>

/*Soma de pares consecutivos*/
int main(){
   int x=-1, soma=0, i ;
   
   while(scanf("%d", &x)&&x!=0){
       if(x%2!=0)
         x++;
       
       for(i=0; i<5;i++){
           soma += x;
           x=x+2;
       }
       
       printf("%d\n", soma);
       soma = 0;
   }
    
return 0;
}