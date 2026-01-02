#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1;
  char codigo1[5];
  char cidade1[30];
  int populacao1;
  int ponto1;
  float area1;
  float pib1; 
 
  char estado2, codigo2[5], cidade2[30];
  int populacao2, ponto2;
  float area2, pib2;

  // Área para entrada de dados

   printf("Seja bem vindo! Insira os dados da carta \n");
  //Dados da Carta 1

  printf("Digite o estado da carta:\n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade:\n");
  scanf("%s", cidade1);

  printf("Digite a população da cidade:\n");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade:\n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf("%d", &ponto1);

  //Dados da Carta 2

  printf("Digite o estado da carta:\n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo2);

  printf("Digite o Nome da cidade:\n");
  scanf("%s", cidade2);

  printf("Digite a população da cidade:\n");
  
  scanf("%d", &populacao2);

  printf("Digite a área da cidade:\n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade:\n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos da cidade:\n");
  scanf("%d", &ponto2);
//Fim da carta 2


  // Área para exibição dos dados da cidade 
 
   printf("Carta1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População:%d\n Área:%.2f\n PIB:%.2f\n Número de pontos turísticos: %d\n", populacao1, area1, pib1, ponto1);

  printf("Carta2:\n");
  printf("Estado: %c\n Código: %s\n Cidade: %s\n", estado2, codigo2, cidade2);
  printf("População:%d\n Área:%f\n PIB: %.2f\n Número de pontos turísticos: %d\n", populacao2, area2, pib2, ponto2);


return 0;
} 
