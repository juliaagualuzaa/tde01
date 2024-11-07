#include <stdio.h>

#define MAX_PRODUTOS 100

struct Produto {
    int id;
    char nome[50];
    float preco;
};


float calcularMediaPrecos(struct Produto produtos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += produtos[i].preco;
    }
 
