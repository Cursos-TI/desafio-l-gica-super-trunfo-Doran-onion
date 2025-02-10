#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma cidade
struct Cidade {
    char codigo[20];
    char nome[50];
    int populacao;
    float area;
    float pib;
};

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    struct Cidade cidade1, cidade2;

    // Cadastro das Cartas:
    printf("Digite os dados da Cidade 1:\n");
    printf("Código da cidade: ");
    scanf("%s", cidade1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade1.nome);  // para ler o nome com espaços
    printf("População da cidade: ");
    scanf("%d", &cidade1.populacao);
    printf("Área da cidade (em km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB da cidade (em milhões): ");
    scanf("%f", &cidade1.pib);

    printf("\nDigite os dados da Cidade 2:\n");
    printf("Código da cidade: ");
    scanf("%s", cidade2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade2.nome);  // para ler o nome com espaços
    printf("População da cidade: ");
    scanf("%d", &cidade2.populacao);
    printf("Área da cidade (em km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB da cidade (em milhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação de Cartas:
    printf("\nComparando as cartas das cidades...\n");

    // Comparando população
    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população.\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("%s tem maior população.\n", cidade2.nome);
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparando área
    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área.\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("%s tem maior área.\n", cidade2.nome);
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparando PIB
    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade2.nome);
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    printf("\nResultado Final:\n");
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade vencedora por população: %s\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade vencedora por população: %s\n", cidade2.nome);
    }

    if (cidade1.area > cidade2.area) {
        printf("Cidade vencedora por área: %s\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("Cidade vencedora por área: %s\n", cidade2.nome);
    }

    if (cidade1.pib > cidade2.pib) {
        printf("Cidade vencedora por PIB: %s\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("Cidade vencedora por PIB: %s\n", cidade2.nome);
    }

    return 0;
}
