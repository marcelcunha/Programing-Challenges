#include <stdio.h>


int main(){
    
    int i, n;
    double soma=0.0;
    
    while(scanf("%d", &n)!=EOF){
        for (i=n; i>0; i--){
            soma += 6.0;
            soma = 1.0/soma;
        }
        soma+=3.0;
        
        printf("%.10f\n", soma);
        soma = 0.0;
    }
    
return 0;
}

