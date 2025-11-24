#include <stdio.h>
#include <string.h>

// Definição da estrutura Carta
typedef struct {
    char estado[50];
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    // Dados da Carta 1: São Paulo
    strcpy(carta1.estado, "São Paulo");
    strcpy(carta1.codigoCarta, "SP001");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1523.0;
    carta1.pib = 700000000.0;
    carta1.numPontosTuristicos = 100;
    carta1.densidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPIBPerCapita(carta1.pib, carta1.populacao);

    // Dados da Carta 2: Rio de Janeiro
    strcpy(carta2.estado, "Rio de Janeiro");
    strcpy(carta2.codigoCarta, "RJ001");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1200.0;
    carta2.pib = 350000000.0;
    carta2.numPontosTuristicos = 80;
    carta2.densidadePopulacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Escolha do atributo para comparação (1: População, 2: Área, 3: PIB, 4: Densidade Populacional, 5: PIB per capita)
    int atributoEscolhido = 1; // Neste exemplo, escolhemos População

    // Determinar a carta vencedora
    printf("Comparação de cartas (Atributo: ");
    if (atributoEscolhido == 1) {
        printf("População):\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (atributoEscolhido == 2) {
        printf("Área):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.area);
        if (carta1.area > carta2.area) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (atributoEscolhido == 3) {
        printf("PIB):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);
        if (carta1.pib > carta2.pib) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (atributoEscolhido == 4) {
        printf("Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);
        if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else if (atributoEscolhido == 5) {
        printf("PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        }
    } else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
