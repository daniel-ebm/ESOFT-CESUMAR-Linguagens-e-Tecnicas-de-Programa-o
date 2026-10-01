#include <stdio.h>
#include <stdlib.h>

void prova1_exercicio0(void) {
    printf("\n--- Prova 1 (ADSIS) - Exercicio 0 ---\n");
}

void prova1_exercicio1(void) {
    printf("\n--- Prova 1 (ADSIS) - Exercicio 1 ---\n");
}

void prova1_exercicio2(void) {
    printf("\n--- Prova 1 (ADSIS) - Exercicio 2 ---\n");
}

void menu_prova1(void) {
    int opcao;

    printf("\n======================================\n");
    printf("            MENU - PROVA 1 (ADSIS)      \n");
    printf("========================================\n");
    printf("1. Exercicio 0\n");
    printf("2. Exercicio 1\n");
    printf("3. Exercicio 2\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        prova1_exercicio0();
    } else if (opcao == 2) {
        prova1_exercicio1();
    } else if (opcao == 3) {
        prova1_exercicio2();
    } else if (opcao == 0) {
        printf("\nVoltando ao menu principal\n");
    } else {
        printf("\nOpcao invalida!\n");
    }
}

void prova2_exercicio0(void) {
    printf("\n--- Prova 2 (ESOFT A) - Exercicio 0\n");
}

void prova2_exercicio1(void) {
    printf("\n--- Prova 2 (ESOFT A) - Exercicio 1\n");
}

void prova2_exercicio2(void) {
    printf("\n--- Prova 2 (ESOFT A) - Exercicio 2\n");
}

void menu_prova2(void) {
    int opcao;

    printf("\n======================================\n");
    printf("            MENU - PROVA 2 (ESOFT A)    \n");
    printf("========================================\n");
    printf("1. Exercicio 0\n");
    printf("2. Exercicio 1\n");
    printf("3. Exercicio 2\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        prova2_exercicio0();
    } else if (opcao == 2) {
        prova2_exercicio1();
    } else if (opcao == 3) {
        prova2_exercicio2();
    } else if (opcao == 0) {
        printf("\nVoltando ao menu principal\n");
    } else {
        printf("\nOpcao invalida!\n");
    }
}

void prova3_exercicio0(void) {
	int capacidade, qtd_itens, n_mochilas, resto;
    printf("\n--- Prova 3 (ESOFT B) - Exercicio 0\n");
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    

}

void prova3_exercicio1(void) {
    printf("\n--- Prova 3 (ESOFT B) - Exercicio 1\n");
}

void prova3_exercicio2(void) {
    printf("\n--- Prova 3 (ESOFT B) - Exercicio 2\n");
}

void menu_prova3(void) {
    int opcao;

    printf("\n======================================\n");
    printf("            MENU - PROVA 3 (ESOFT B)    \n");
    printf("========================================\n");
    printf("1. Exercicio 0\n");
    printf("2. Exercicio 1\n");
    printf("3. Exercicio 2\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        prova3_exercicio0();
    } else if (opcao == 2) {
        prova3_exercicio1();
    } else if (opcao == 3) {
        prova3_exercicio2();
    } else if (opcao == 0) {
        printf("\nVoltando ao menu principal\n");
    } else {
        printf("\nOpcao invalida\n");
    }
}

int main(void) {
    int opcao_principal;

    printf("\n======================================\n");
    printf("         SELECAO DE PROVAS DA TURMA     \n");
    printf("========================================\n");
    printf("1. Prova - ADSIS\n");
    printf("2. Prova - ESOFT A\n");
    printf("3. Prova - ESOFT B\n");
    printf("0. Sair\n");
    printf("Escolha a prova que deseja testar: ");
    scanf("%d", &opcao_principal);

    if (opcao_principal == 1) {
        menu_prova1();
    } else if (opcao_principal == 2) {
        menu_prova2();
    } else if (opcao_principal == 3) {
        menu_prova3();
    } else if (opcao_principal == 0) {
        printf("\nEncerrando\n");
    } else {
        printf("\nOpcao invalida\n");
    }

    return 0;
}



