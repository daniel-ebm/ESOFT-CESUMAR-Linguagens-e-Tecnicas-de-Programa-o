#include <stdio.h>
#include <stdlib.h>

/* soma e media de 10 numeros inteiros positivos */

int main(int argc, char *argv[]) {
	int soma, media, i,n;
	i=0;
	while (i<10){
		scanf("%d",&n);
		if(n>0){
			soma += n;
			i++;
		}
	}
	printf("soma = %d e media %d", soma, (soma/10));
	return 0;
}
