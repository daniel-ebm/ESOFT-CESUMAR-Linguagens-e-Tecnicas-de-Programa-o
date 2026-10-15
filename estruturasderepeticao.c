Aqui está o código corrigido. O único trecho não comentado possuía alguns erros de digitação (erros de sintaxe) nas variáveis: paso (faltou um 's'), incio (faltou o 'i') e a lógica precisava de um pequeno ajuste no while para incluir o valor final (<= e >=) caso você queira que ele apareça na contagem.

Código Corrigido

c
#include <stdio.h> 
#include <stdlib.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
int main(int argc, char *argv[]) { 
    // vamos relembrar algumas dessas estruturas que vimos essa semana 
    /*Laço FOR repete um conjunto de instruçôes, de um valor inicial(inicializacao), até uma determinada condição, realizando uma operação (incremento) a cada execução{sempre}*/ 
    // for(i=0, j=1; i<10; i++, j--){ 
    // printf("esse é o loop FOR"); 
    // } 
    
    /*Laço WHILE (enquanto), que testa se uma condição é verdadeira, caso seja executa um bloco de comandos repetindo o processo enquanto a condição for avalidada como verdadeira.*/ 
    // while(1<10){ 
    // printf\("%d, laco WHILE", i) 
    // if(n%2 == 0)i++; 
    // n++; 
    // } 
    
    /*Laço DO WHILE, semelhante ao laço while, porém antes de realizar a verificação ele executa o conjunto de instruções para após a execução realizar a verifiação da condição*/ 
    // int i = 0; 
    // int n = 0; 
    // // do { 
    // printf("%d laco DO\n", i); 
    // if (i % 2 == 0) { 
    // i++; 
    // } 
    // n++; 
    // } while (i < 10); 
    
    /*Exercicio 1; Elabore um programa que permita a entradada de 3 valores. E conte o primeiro valor inserido, até o segundo valor, com o passo da contagem dado pelo terceiro valor*/ 
    //ex: 1,8,2 contar de 1 a 8, com passo 2 = 3,5,7 
    // printf("Digite o inicio o fim e o passo: "); 
    // int inicio, fim, passo; 
    // scanf("%d %d %d", &inicio, &fim, &passo); 
    // for (; inicio <= fim; inicio += passo) { 
    // printf("%d ", inicio); 

    int inicio, fim, passo; 
    printf("entre com o valor inicial, final, e passo: "); 
    scanf("%d %d %d", &inicio, &fim, &passo); 
    
    if (inicio < fim) { 
        while (inicio <= fim) { 
            printf("|%d|", inicio); 
            inicio += passo; 
        } 
    } else { 
        while (inicio >= fim) { 
            printf("|%d|", inicio); 
            inicio -= passo; 
        } 
    } 
    // ------------------------

    //Exercicio 2; 
    /*Faça um programa que receba um número n e realize a soma dos n primeiros termos da sequência definida como: [S = 1/2; 1/4; 1/8 1/16...N]*/ 
    
    //Exercicio 3; 
    /*Crie um programa que exiba na tela o triângulo de pascal.*/ 
    
    return 0; 
}

