)#include <stdio.h>

#define MAX_CLUBES 10

// Definindo a estrutura Clube
struct Clube {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

// Função para calcular o saldo de gols
int calcular_saldo_gols(struct Clube clube) {
    return clube.gols_pro - clube.gols_contra;
}

int main() {
    struct Clube clubes[MAX_CLUBES];
    int i;

    // Entrada de dados dos clubes
    for (i = 0; i < MAX_CLUBES; i++) {
        printf("Cadastro do clube %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &clubes[i].id);
        
        printf("Nome: ");
        scanf(" %[^\n]", clubes[i].nome); // Lê uma linha inteira com espaços
        
        printf("Vitórias: ");
        scanf("%d", &clubes[i].vitorias);
        
        printf("Empates: ");
        scanf("%d", &clubes[i].empates);
        
        printf("Derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        
        printf("Gols Pró: ");
        scanf("%d", &clubes[i].gols_pro);
        
        printf("Gols Contra: ");
        scanf("%d", &clubes[i].gols_contra);
        
        printf("\n");
    }

    // Exibindo o saldo de gols de cada clube
    printf("Saldo de gols dos clubes:\n");
    for (i = 0; i < MAX_CLUBES; i++) {
        int saldo = calcular_saldo_gols(clubes[i]);
        printf("Clube: %s | Saldo de Gols: %d\n", clubes[i].nome, saldo);
    }

    return 0;
}



