) #include <stdio.h>

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

struct Clube* buscar_clube(struct Clube clubes[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (clubes[i].id == id) {
            return &clubes[i]; // Retorna o ponteiro para o clube encontrado
        }
    }
    return NULL; // Retorna NULL se não encontrar
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

        int id_busca;
    printf("Digite o ID do clube que deseja buscar: ");
    scanf("%d", &id_busca);

    struct Clube* clube_encontrado = buscar_clube(clubes, MAX_CLUBES, id_busca);


    if (clube_encontrado != NULL) {
        printf("Clube encontrado:\n");
        printf("ID: %d\n", clube_encontrado->id);
        printf("Nome: %s\n", clube_encontrado->nome);
        printf("Vitórias: %d\n", clube_encontrado->vitorias);
        printf("Empates: %d\n", clube_encontrado->empates);
        printf("Derrotas: %d\n", clube_encontrado->derrotas);
        printf("Gols Pró: %d\n", clube_encontrado->gols_pro);
        printf("Gols Contra: %d\n", clube_encontrado->gols_contra);
    } else {
        printf("Clube com ID %d não encontrado.\n", id_busca);
    }

    return 0;
}
