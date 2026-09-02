#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;

	 printf("=== EXERCICIO 1 ===\n");
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &primeiro);
	printf("Insira o segundo numero: ");
	scanf("%d", &segundo);
		
		aux = primeiro;
		primeiro = segundo;
		segundo = aux;
	
	printf("%d\n%d\n\n", primeiro, segundo);
	
	 printf("=== EXERCICIO 2 ===\n");

    double numero, A;
    int N;

    printf("Insira o valor: ");
    scanf("%lf", &numero);

    A = numero;
    N = 0;

    while (A >= 10) {
        A /= 10;
        N++;
    }

    while (A < 1) {
        A *= 10;
        N--;
    }

    printf("%.2f x 10^%d\n\n", A, N);


    printf("=== EXERCICIO 3 ===\n");

    int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bitx, n;

    printf("Insira o valor para ser convertido: ");
    scanf("%d", &bitx);

    n = bitx;

    bit7 = bitx % 2;
    bitx /= 2;

    bit6 = bitx % 2;
    bitx /= 2;

    bit5 = bitx % 2;
    bitx /= 2;

    bit4 = bitx % 2;
    bitx /= 2;

    bit3 = bitx % 2;
    bitx /= 2;

    bit2 = bitx % 2;
    bitx /= 2;

    bit1 = bitx % 2;
    bitx /= 2;

    printf("O numero %d em binario: %d%d%d%d%d%d%d\n\n", n, bit1, bit2, bit3, bit4, bit5, bit6, bit7);

    printf("=== EXERCICIO 4 ===\n");

    double salario, vendas, comissao, total;

    printf("Informe o salario fixo: ");
    scanf("%lf", &salario);

    printf("Informe o valor total em vendas: ");
    scanf("%lf", &vendas);

    comissao = vendas * 0.15;
    total = salario + comissao;

    printf("Total a receber: %.2f\n\n", total);

    printf("=== EXERCICIO 5 ===\n");

    double a, b, c, d, soma, media, produto;

    printf("Informe quatro valores: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    soma = a + b + c + d;
    media = soma / 4;
    produto = a * b * c * d;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produto: %.2f\n\n", produto);

    printf("=== EXERCICIO 6 ===\n");

    int idadeDias, anos, meses, dias, restante;

    printf("Informe a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    restante = idadeDias % 365;
    meses = restante / 30;
    dias = restante % 30;

    printf("%d anos, %d meses e %d dias\n\n", anos, meses, dias);

    printf("=== EXERCICIO 7 ===\n");

    double raio, volume;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * 3.14159 * pow(raio, 3);

    printf("Volume da esfera: %.4f\n\n", volume);

	printf("=== EXERCICIO 8  ===\n");
	int x1, x2, y1, y2, v1, v2;
	float distancia;
	printf("Insira as coordenadas do ponto P1: ");
	scanf("%d %d", &x1,&y1);
	
	printf("Insira as coordenadas do ponto P2: ");
	scanf("%d %d", &x2,&y2);
	
	v1 = pow(x2-x1, 2);
	v2 = pow(y2-y1, 2);
	distancia = sqrt(v1+v2);
	
	printf("Distancia (%f)",distancia);

		return 0;
}