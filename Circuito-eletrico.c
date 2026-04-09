#include <stdio.h>

int main() {
    int opcao;
    float V, I, R, P;

    printf("=== Calculadora Eletrica ===\n");
    printf("1 - Calcular Tensao (V)\n");
    printf("2 - Calcular Corrente (I)\n");
    printf("3 - Calcular Resistencia (R)\n");
    printf("4 - Calcular Potencia (P)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite a Resistencia (R): ");
            scanf("%f", &R);
            printf("Digite a Corrente (I): ");
            scanf("%f", &I);
            V = R * I;
            printf("Tensao (V) = %.2f Volts\n", V);
            break;

        case 2:
            printf("Digite a Tensao (V): ");
            scanf("%f", &V);
            printf("Digite a Resistencia (R): ");
            scanf("%f", &R);
            if(R != 0) {
                I = V / R;
                printf("Corrente (I) = %.2f Amperes\n", I);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;

        case 3:
            printf("Digite a Tensao (V): ");
            scanf("%f", &V);
            printf("Digite a Corrente (I): ");
            scanf("%f", &I);
            if(I != 0) {
                R = V / I;
                printf("Resistencia (R) = %.2f Ohms\n", R);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;

        case 4:
            printf("Digite a Tensao (V): ");
            scanf("%f", &V);
            printf("Digite a Corrente (I): ");
            scanf("%f", &I);
            P = V * I;
            printf("Potencia (P) = %.2f Watts\n", P);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
