#include <stdio.h>
#include <string.h>

int main(){

   int  i,c,n; 
	char nome[10];

	scanf ("%d",&c);

	for (i=0; i<c; i++){

	scanf("%s %d",nome, &n);

	if (strcmp(nome,"Thor")==0)
    	printf("Y\n");
	else
		printf("N\n");
	}
	return 0;
}

 