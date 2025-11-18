#include <stdio.h>

// Challenge Done 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variáveis Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Entrada de dados da carta 1
  printf("Insira os dados da Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1); // Lê string com espaços
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

// Inserindo dados da certa 2 
printf("\nInsira os dados da Carta 2:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2); // Lê string com espaços
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Exibindo dados da Carta 1
printf("\nInsira os dados da Carta 2:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2); // Lê string com espaços
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²) \n: ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Exibindo dados da carta 2


return 0;
} 
