#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("=== EXERCICIO 1 ===\n");

    int idade, anoAtual, anoNascimento;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Ano de nascimento: %d\n\n", anoNascimento);


    printf("=== EXERCICIO 2 ===\n");

    double velocidade, velocidadeMS;

    printf("Informe a velocidade em km/h: ");
    scanf("%lf", &velocidade);

    velocidadeMS = velocidade / 3.6;

    printf("Velocidade em m/s: %.2f\n\n", velocidadeMS);


    printf("=== EXERCICIO 3 ===\n");

    double reais, cotacao, dolares;

    printf("Informe o valor em reais: ");
    scanf("%lf", &reais);

    printf("Informe a cotacao do dolar: ");
    scanf("%lf", &cotacao);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n\n", dolares);


    printf("=== EXERCICIO 4 ===\n");

    double celsius, fahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n\n", fahrenheit);


    printf("=== EXERCICIO 5 ===\n");

    double graus, radianos;

    printf("Informe o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * 3.141592 / 180;

    printf("Angulo em radianos: %.4f\n\n", radianos);


    printf("=== EXERCICIO 6 ===\n");

    int numero, antecessor, sucessor;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n\n", sucessor);


    printf("=== EXERCICIO 7 ===\n");

    double premio, primeiro, segundo, terceiro;

    premio = 780000.00;

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio - primeiro - segundo;

    printf("Primeiro ganhador: %.2f\n", primeiro);
    printf("Segundo ganhador: %.2f\n", segundo);
    printf("Terceiro ganhador: %.2f\n\n", terceiro);


    printf("=== EXERCICIO 8 ===\n");

    int segundos, horas, minutos, segundosRestantes;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d horas, %d minutos e %d segundos\n\n", horas, minutos, segundosRestantes);


    printf("=== EXERCICIO 9 ===\n");

    double tempo, velocidadeMedia, distancia, consumo, litros;

    printf("Informe o tempo da viagem em horas: ");
    scanf("%lf", &tempo);

    printf("Informe a velocidade media em km/h: ");
    scanf("%lf", &velocidadeMedia);

    printf("Informe o consumo do veiculo em km/l: ");
    scanf("%lf", &consumo);

    distancia = tempo * velocidadeMedia;
    litros = distancia / consumo;

    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Litros necessarios: %.2f litros\n\n", litros);

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
