#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char nome[50];
    char estado[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta* carta) {
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);  // Lê a string com espaços
    printf("Digite o estado da cidade: ");
    scanf(" %[^\n]", carta->estado);
    printf("Digite o código da cidade: ");
    scanf(" %[^\n]", carta->codigo);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para comparar as cartas com base em um atributo
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparando cartas:\n");

    // Comparação de atributos
    if (atributo == 1) { // Comparação pela população
        if (carta1.populacao > carta2.populacao) {
            printf("Cidade 1 (%s) tem maior população.\n", carta1.nome);
        } else if (carta1.populacao < carta2.populacao) {
            printf("Cidade 2 (%s) tem maior população.\n", carta2.nome);
        } else {
            printf("As cidades têm a mesma população.\n");
        }
    } else if (atributo == 2) { // Comparação pela área
        if (carta1.area > carta2.area) {
            printf("Cidade 1 (%s) tem maior área.\n", carta1.nome);
        } else if (carta1.area < carta2.area) {
            printf("Cidade 2 (%s) tem maior área.\n", carta2.nome);
        } else {
            printf("As cidades têm a mesma área.\n");
        }
    } else if (atributo == 3) { // Comparação pelo PIB
        if (carta1.pib > carta2.pib) {
            printf("Cidade 1 (%s) tem maior PIB.\n", carta1.nome);
        } else if (carta1.pib < carta2.pib) {
            printf("Cidade 2 (%s) tem maior PIB.\n", carta2.nome);
        } else {
            printf("As cidades têm o mesmo PIB.\n");
        }
    } else if (atributo == 4) { // Comparação pelos pontos turísticos
        if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
            printf("Cidade 1 (%s) tem mais pontos turísticos.\n", carta1.nome);
        } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
            printf("Cidade 2 (%s) tem mais pontos turísticos.\n", carta2.nome);
        } else {
            printf("As cidades têm o mesmo número de pontos turísticos.\n");
        }
    } else {
        printf("Atributo inválido para comparação.\n");
    }
}

// Função principal
int main() {
    Carta cidade1, cidade2;
    int atributo;

    // Cadastro de cartas
    printf("Cadastro da Cidade 1\n");
    cadastrarCarta(&cidade1);
    
    printf("\nCadastro da Cidade 2\n");
    cadastrarCarta(&cidade2);

    // Menu de escolha do atributo para comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite o número correspondente: ");
    scanf("%d", &atributo);

    // Comparação das cartas
    compararCartas(cidade1, cidade2, atributo);

    return 0;
}
