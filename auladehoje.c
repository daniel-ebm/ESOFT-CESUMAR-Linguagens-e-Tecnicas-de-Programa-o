#include <stdio.h>
#include <stdlib.h>

/*
funcao
tipo nome (lista de parametros){
comandos...
comandos..
}
*/
void exec3(){
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
	float tempC, tempF;
	printf("Insira a cotação e o valor: \n");
	scanf("%f", &tempC);
	tempF = tempF * (9.0/5.0) + 32.0;
	printf("Os %f C sao %f F", (tempC,tempF));
}

void exec2(){
//	 Faça um programa que leia o valor em reais e a cotação em dolar
	float reais, cota;
	printf("Insira a cotacao e o valor: \n");
	scanf("%f %f", &cota, &reais);
	printf("Os %f reais sao %f trumps", (reais/cota));
}
void exec8(){
//	 (URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
	
	int sec, horas, min;
	printf("Insira o tempo em segundos \n");
	scanf("%d", &sec);
	horas = sec/3600;
	min = (sec - (horas*3600))/60;;
	sec = sec -((horas*3600)+(min*60));
	printf("\t  %d:%d:%d", horas,min,sec);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio quer resolver: [2] [3] [8]\n");
	scanf("%d", &op);
	
	switch(op){
	
	case 2:
		exec2();
	break;
		 
	 case 3:
	 	exec3();
	 break;
	 
	 case 8:
		exec8();
	break;
}
	return 0;
}
