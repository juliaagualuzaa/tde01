#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

struct Produto {

    int id;
    char nome[50];
    float preco;
};


struct Produto* buscarProduto(struct Produto produtos[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == id) {
            return &produtos[i];
        }
    }
    return NULL; 
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int n;

       printf("Digite a quantidade de produtos (max %d): ", MAX_PRODUTOS);
    scanf("%d", &n);

    if (n > MAX_PRODUTOS || n <= 0) {
        printf("Quantidade inválida!\n");
        return 1;
    }

      for (int i = 0; i < n; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

      int idBuscado;
    printf("Digite o ID do produto a ser buscado: ");
    scanf("%d", &idBuscado);

        struct Produto* produtoEncontrado = buscarProduto(produtos, n, idBuscado);

       if (produtoEncontrado) {
        printf("Produto encontrado:\n");
        printf("ID: %d\n", produtoEncontrado->id);
        printf("Nome: %s\n", produtoEncontrado->nome);
        printf("Preço: %.2f\n", produtoEncontrado->preco);
    } else {
        printf("Produto com ID %d não encontrado.\n", idBuscado);
    }

    return 0;
}
