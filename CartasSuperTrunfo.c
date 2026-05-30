#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1 = 'A';
  char codigo1[4] = "A01";
  char nome1[8] = "Londres";
  int populacao1 = 9000000;
  float area1 = 1572.0;
  float pib1 = 565.0;
  int pontos_turisticos1 = 80;


  char estado2 = 'B';
  char codigo2[4] = "B02";
  char nome2[8] = "Paris";
  int populacao2 = 2148000;
  float area2 = 105.4;
  float pib2 = 850.0;
  int pontos_turisticos2 = 90;



  // Área para entrada de dados

      // =========================
    // Cadastro Carta 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");

    scanf("%s", nome1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // =========================
    // Cadastro Carta 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2 );
    printf("\n");


  // Área para exibição dos dados da cidade

  // Exibição da Carta 1
 
  printf("\nCarta 1 - Cidade: %s\n", nome1);
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("\n");

  // Exibição da Carta 2
  printf("Carta 2 - Cidade: %s\n", nome2);
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("\n");

  return 0;
}  
