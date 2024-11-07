#include <stdio.h>

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

int main() {
    struct Clube clubes[MAX_CLUBES];
    int i;
    int total_gols_pro = 0;

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

        // Acumulando o total de gols pró
        total_gols_pro += clubes[i].gols_pro;
    }

    // Calculando a média de gols pró
    float media_gols_pro = (float)total_gols_pro / MAX_CLUBES;

    // Exibindo clubes com gols pró acima da média
    printf("Média de gols pró: %.2f\n", media_gols_pro);
    printf("Clubes com gols pró superiores à média:\n");

    for (i = 0; i < MAX_CLUBES; i++) {
        if (clubes[i].gols_pro > media_gols_pro) {
            printf("ID: %d | Nome: %s | Gols Pró: %d\n", clubes[i].id, clubes[i].nome, clubes[i].gols_pro);
        }
    }

    return 0;
}
