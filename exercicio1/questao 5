#include <stdio.h>

#define MAX_CLUBES 10

struct Clube {    int id;

    char nome[50];
    int vitorias;
    int empates;
    int derrotas;
    int gols_pro;
    int gols_contra;
};

int calcular_pontuacao(struct Clube clube) {
    return (clube.vitorias * 3) + (clube.empates * 1);
}

int main() {
    struct Clube clubes[MAX_CLUBES];
    int i;


    for (i = 0; i < MAX_CLUBES; i++) {
        printf("Cadastro do clube %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &clubes[i].id);
        
        printf("Nome: ");
        scanf(" %[^\n]", clubes[i].nome);

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





    printf("Pontuação dos clubes:\n");
    for (i = 0; i < MAX_CLUBES; i++) {
        int pontuacao = calcular_pontuacao(clubes[i]);
        printf("Clube ID: %d | Nome: %s | Pontuação: %d\n", clubes[i].id, clubes[i].nome, pontuacao);
    }

    return 0;
}
