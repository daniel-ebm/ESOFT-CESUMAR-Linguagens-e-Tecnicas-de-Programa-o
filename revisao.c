#include <stdio.h> 
#include <stdlib.h> 

float calc_inss(float salario){ 
    if(salario <= 1412.00) return salario * 0.075; 
    else if(salario <= 2666.68) return salario * 0.09; 
    else if(salario <= 4000.03) return salario * 0.12; 
    else return salario * 0.14; 
} 

float calc_irpf(float salario_base) { 
    if (salario_base <= 2259.20) { 
        return 0.0; 
    } else if (salario_base <= 2826.65) { 
        return (salario_base * 0.075) - 169.44; 
    } else if (salario_base <= 3751.05) { 
        return (salario_base * 0.15) - 381.44; 
    } else if (salario_base <= 4664.68) { 
        return (salario_base * 0.225) - 662.77; 
    } else { 
        return (salario_base * 0.275) - 896.00; 
    } 
} 

int main(int argc, char *argv[]) { 
    float salario_bruto, valor_inss, salario_base, valor_irpf, salario_liquido; 

    printf("Digite o salario bruto: R$ "); 
    scanf("%f", &salario_bruto); 

    valor_inss = calc_inss(salario_bruto); 
    salario_base = salario_bruto - valor_inss; 
    valor_irpf = calc_irpf(salario_base); 
    
    salario_liquido = salario_base - valor_irpf;

    printf("inss descotado: R$ %f\n", valor_inss);
    printf("irpf: R$ %f\n", salario_base);
    printf("desconto irpf: R$ %f\n", valor_irpf);
    printf("liquido: R$ %f\n", salario_liquido); 

    return 0; 
}


