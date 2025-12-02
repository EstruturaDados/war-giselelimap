#include <stdio.h>
#include <string.h>

// Definição da struct Territorio.
// Armazena o nome do território, a cor do exército e a quantidade de tropas.
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de um vetor de 5 estruturas do tipo Territorio.
    // O valor 5 é a capacidade máxima de territórios que o sistema pode armazenar.
    Territorio lista_territorios[5];
    int i; // Variável de controle para os laços (índice do vetor).
    const int MAX_TERRITORIOS = 5;

    // --- ENTRADA DOS DADOS (Cadastro dos territórios) ---
    printf("=====  Cadastro de Territórios  =====\n");
    printf("Você irá cadastrar %d territórios.\n\n", MAX_TERRITORIOS);

    // Laço for para preencher os dados dos 5 territórios.
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("--- Território %d ---\n", i + 1);

        // Usabilidade: Mensagem clara para o usuário.
        printf("Digite o nome do território (máx. 29 caracteres): ");
        // Uso de scanf para ler a string (nome).
        scanf("%29s", lista_territorios[i].nome);

        // Usabilidade: Mensagem clara para o usuário.
        printf("Digite a cor do exército (máx. 9 caracteres): ");
        // Uso de scanf para ler a string (cor).
        scanf("%9s", lista_territorios[i].cor);

        // Usabilidade: Mensagem clara para o usuário.
        printf("Digite a quantidade de tropas: ");
        // Uso de scanf para ler o inteiro (tropas).
        scanf("%d", &lista_territorios[i].tropas);
        
        printf("\n"); // Adiciona uma linha em branco para melhor separação visual.
    }

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n===== Dados dos Territórios Cadastrados =====\n");
    printf("---------------------------------------------------\n");
    
    // Laço for para percorrer o vetor e exibir os dados de cada território.
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        // Exibição clara e formatada dos dados de cada struct.
        printf("Território %d:\n", i + 1);
        printf("  Nome: %s\n", lista_territorios[i].nome);
        printf("  Cor do Exército: %s\n", lista_territorios[i].cor);
        printf("  Tropas: %d\n", lista_territorios[i].tropas);
        printf("---------------------------------------------------\n");
    }

    return 0;
}
