#include <stdio.h>
#include <locale.h>

int processar_lista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == 0) {
            printf("Número 0 encontrado, parando execução.\n");
            break;
        }
        if (lista[i] < 0) {
            printf("Número %d ignorado.\n", lista[i]);
            continue;
        }
        if (lista[i] % 2 == 0) {
            printf("Primeiro número par: %d, retornando dobro.\n", lista[i]);
            return lista[i] * 2;
        }
    }
    return -1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");


    int valores[] = {1, -3, 5, 8, 0, 10};
    int tamanho = sizeof(valores)/sizeof(valores[0]);
    int resultado = processar_lista(valores, tamanho);
    printf("Resultado: %d\n", resultado);

    return 0;
}
