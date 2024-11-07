#include <stdio.h>

#define MAX_CLUBES 10
struct Clube {
    int id;
    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

void encontrar_campeao_ultimo(struct Clube clubes[], int n, struct Clube** campeao, struct Clube** ultimo) {
    *campeao = &clubes[0];
    *ultimo = &clubes[0];

    for (int i = 1; i < n; i++) {
        if (clubes[i].vitorias > (*campeao)->vitorias) {
            *campeao = &clubes[i];
        }
        if (clubes[i].vitorias < (*ultimo)->vitorias) {
            *ultimo = &clubes[i];
        }
    }
}

int main() {
    struct Clube clubes[MAX_CLUBES];
    int i;

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

    struct Clube* campeao;
    struct Clube* ultimo;

    
    encontrar_campeao_ultimo(clubes, MAX_CLUBES, &campeao, &ultimo);

    printf("Clube Campeão:\n");
    printf("ID: %d\n", campeao->id);
    printf("Nome: %s\n", campeao->nome);
    printf("Vitórias: %d\n", campeao->vitorias);
    printf("Empates: %d\n", campeao->empates);
    printf("Derrotas: %d\n", campeao->derrotas);
    printf("Gols Pró: %d\n", campeao->gols_pro);
    printf("Gols Contra: %d\n", campeao->gols_contra);
    printf("\n");

       printf("Último Colocado:\n");
    printf("ID: %d\n", ultimo->id);
    printf("Nome: %s\n", ultimo->nome);
    printf("Vitórias: %d\n", ultimo->vitorias);
    printf("Empates: %d\n", ultimo->empates);
    printf("Derrotas: %d\n", ultimo->derrotas);
    printf("Gols Pró: %d\n", ultimo->gols_pro);
    printf("Gols Contra: %d\n", ultimo->gols_contra);

    return 0;
}


