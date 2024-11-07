#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto {
    char nome[50];
    float valor;
};

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int n, i;
    float limite;
    int contador = 0;


    printf("Digite o número de produtos (max %d): ", MAX_PRODUTOS);
    scanf("%d", &n);


    if (n > MAX_PRODUTOS || n <= 0) {
        printf("Número de produtos inválido!\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }
    printf("Digite o valor limite: ");
    scanf("%f", &limite);

    
    for (i = 0; i < n; i++) {
        if (produtos[i].valor < limite) {
            contador++;
        }
    }

    printf("Número de produtos com valor abaixo de %.2f: %d\n", limite, contador);

    return 0;
}

