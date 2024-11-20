#include <stdio.h>
#include <string.h>

// Estrutura das cartas
typedef struct {
    char codigo[2], nome[50];             
    int populacao, pontosTuristicos;         
    float area, pib;                       
} Cidade;

int main() {
    // Instanciando as variáveis para armazenar as informações das duas cidades
    Cidade cidade1, cidade2;

   printf("Bem-vindo ao jogo do Super Trunfo! \n");
    // Primeira carta
    printf("Cadastro da primeira cidade:\n");
    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", cidade1.codigo);  // Código da carta
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1.nome);  // ´Nome da cidade
    printf("Informe a população da cidade: ");
    scanf("%d", &cidade1.populacao);  // População
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &cidade1.area);  // Área
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade1.pib);  // PIB
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cidade1.pontosTuristicos);  // Pontos turísticos
    printf("--------------------------------\n");
    
    // Segunda carta
    printf("\nCadastro da segunda cidade:\n");
    printf("Informe o código da carta (ex: A02): ");
    scanf("%s", cidade2.codigo);  // Código da carta
    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2.nome);  // Nome da cidade
    printf("Informe a população da cidade: ");
    scanf("%d", &cidade2.populacao);  // População
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &cidade2.area);  // Área
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &cidade2.pib);  // PIB
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cidade2.pontosTuristicos);  // Pontos turísticos
    printf("--------------------------------\n");

    // Comparando as duas cidades informadas pelo seu PIB
    void vencedorPorPIB(Cidade cidade1, Cidade cidade2) {
    if (cidade1.pib > cidade2.pib) {
        printf("A cidade vencedora é a 1: %s\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("A cidade vencedora é a 2: %s\n", cidade2.nome);
    } else {
        printf("Empate! As cidades possuem o memso PIB.\n");
    }
}

    // Comparar as cidades pelo PIB
    vencedorPorPIB(cidade1, cidade2);

    return 0;
}