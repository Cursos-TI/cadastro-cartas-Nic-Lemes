#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Challenge Done 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Definição da estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para ler os dados de uma carta
void lerCarta(Carta *carta) {
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado); // Lê a string até encontrar uma nova linha

    printf("Digite o código: ");
    scanf("%d", &carta->codigo);

    printf("Digite o nome: ");
    scanf(" %[^\n]", carta->nome);

    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em milhões de R$): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(unsigned long int populacao, float area) {
    return (float)populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, unsigned long int populacao) {
    return pib * 1000000 / populacao;
}

// Função para calcular o Super Poder
float calcularSuperPoder(Carta carta) {
    float inverso_densidade = 1.0f / carta.densidade_populacional;
    return (float)carta.populacao + carta.area + carta.pib + carta.pontos_turisticos + carta.pib_per_capita + inverso_densidade;
}

int main() {
    Carta carta1, carta2;

    printf("Dados da Carta 1:\n");
    lerCarta(&carta1);

    printf("\nDados da Carta 2:\n");
    lerCarta(&carta2);

    // Calcular a densidade populacional e o PIB per capita para cada carta
    carta1.densidade_populacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcularPIBPerCapita(carta1.pib, carta1.populacao);

    carta2.densidade_populacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Calcular o Super Poder para cada carta
    carta1.super_poder = calcularSuperPoder(carta1);
    carta2.super_poder = calcularSuperPoder(carta2);

    // Comparar as cartas e exibir os resultados
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", carta1.densidade_populacional > carta2.densidade_populacional ? 0 : 1); // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
