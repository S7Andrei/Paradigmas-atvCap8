#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, num, i, fat;

    do {
        printf("\nMenu:\n");
        printf("1. Calcular quadrado\n");
        printf("2. Calcular fatorial\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &num);
                printf("Quadrado: %d\n", num * num);
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d", &num);
                fat = 1;
                for(i = 1; i <= num; i++) {
                    fat *= i;
                }
                printf("Fatorial: %d\n", fat);
                break;
            case 3:
                printf("Saida\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(opcao != 3);

    return 0;
}

