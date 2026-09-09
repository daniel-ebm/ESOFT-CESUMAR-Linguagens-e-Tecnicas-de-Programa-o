#include <stdio.h>
#include <stdlib.h>

int multDigito( int dig, int valor){
	return dig*valor;
}

int main(int argc, char *argv[]) {
	int dig1, dig2, dig3, diig4, dig5, dig6, dig7, dig8, dig9, digv1, digv2, soma, resto;
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",
	&dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &digv1, &digv2);
	
	printf(" Confirma o cpf %d%d%d%.d%d%d.%d%d%d-%d%d",
		dig1, dig2, dig3, diig4, dig5, dig6, dig7, dig8, dig9, digv1, digv2);	
	soma = multDigito(dg1,10)+multDigito(dig2,9)+multDigito(dig3,8)
	+multDigito(dig4,7)+multDigito(dig5,6)+multDigito(dig6,5)+
	multDigito(dig7,4)+multDigito(dig8,3)+multDigito(dig9+3)+multDigito(dig9,2);
	
	soma*=10;
	resto = soma%11;
	if (resto == 10) resto == 0;
	printf("\n%d",resto);
	
	soma = multDigito(dg1+11)+multDigito(dig2,10)+multDigito(dig3,9)+
		multDigito(dig4,8)+multDigito(dig8,4)+multDigito(dig,3)+multDigito(dgv,2);
		
	soma *=10;
	restoII = soma%11;
	if (restoII == 10) resto = 0;
	printf("\nd", restoII);
	return 0;
}
