#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926535897932
#define _USE_MATH_DEFINES
#include <math.h>
#define trapezio(B, b, h) (((B) + (b)) * (h) / 2.0)
/*repudio essa lingugagem por todas as vezes que nao pude usar acento*/
//tive que definir _use_math_defines e nao sei porque mas ok
int main(int argc, char** argv) {
	
	float area, raio;
	
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);
    area = pi * (raio * raio);
    
    //area = pi * pow(raio, 2);
    printf("A Area do circulo  de raio %f = %f,\n", raio,area);
    
    printf("Agora o trapezio\n");
    
    double B, b, h;
    //deu tudo errado quando tentei usar float
    printf("Digite o valor da base maior (B): ");
    scanf("%lf", &B);

    printf("Digite o valor da base menor (b): ");
    scanf("%lf", &b);

    printf("Digite o valor da altura (h): ");
    scanf("%lf", &h);
    //duas casas decimais porque sim
    printf("\nArea desse lixo:  %.2f\n", trapezio(B, b, h));
    
	return 0;
}
