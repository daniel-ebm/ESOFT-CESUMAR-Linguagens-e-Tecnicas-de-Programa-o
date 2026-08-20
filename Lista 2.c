#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
/*
	printf("=== EXERCICIO 10 ===\n");
	
	int a,b,c,maior,maior_temp,;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a,&b,&c);
	
	//conta
	maior_temp = (a+b+abs(a-b))/2;
	
	maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	
	
	printf("O maior esntre |%d|%d|%d| = %d", a,b,c, maior);
	return 0;
	*/
	printf("=== EXERCICIO 10 ===\n");
	
	int a,b,c,d,maior,maior_temp2,maior_temp4;
	
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	//conta
	maior_temp2 = (a+b+abs(a-b))/2;
	
	maior_temp4 = (c+d+abs(c-d))/2;
	
	maior = (maior_temp2+maior_temp4+abs(maior_temp2-maior_temp4))/2;
	
	printf("O maior esntre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
	return 0;
	

}
