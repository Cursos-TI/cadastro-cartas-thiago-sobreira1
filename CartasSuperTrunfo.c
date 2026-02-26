#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main () {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[50], nome_cidade2[50];
	float populacao1, populacao2;
	float area_km2_cidade1, area_km2_cidade2, pib1, pib2;
	int numero_pontos_turisticos1, numero_pontos_turisticos2;

	// Área para entrada de dados
	//A partir de agora vai ser carta 01
	printf("Insira o estado da carta 1 (Uma letra de 'A' a 'H' (representando um dos oito estados)): ");
	scanf("%c", &estado1);

	printf("Insira o código da da carta 1 (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
	scanf("%s", codigo_carta1);

	printf("Insira o nome da cidade da carta 1: ");
  	scanf(" %49[^\n]", nome_cidade1);

	printf("Insira a população da cidade da carta 1: ");
	scanf("%e", &populacao1);

	printf("Insira a área da cidade em quilômetros quadrados da carta 1: ");
	scanf("%f", &area_km2_cidade1);

	printf("Insira o PIB da cidade da carta 1: ");
	scanf("%f", &pib1);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 1: \n");
	scanf("%d", &numero_pontos_turisticos1);

	//A partir de agora vai ser carta 02
	printf("Insira o estado da carta 2: ");
	scanf(" %c", &estado2);

	printf("Insira o código da da carta 2: ");
	scanf("%s", codigo_carta2);

	printf("Insira o nome da cidade da carta 2: ");
	scanf(" %49[^\n]", nome_cidade2);

	printf("Insira a população da cidade da carta 2: ");
	scanf("%e", &populacao2);

	printf("Insira a área da cidade em quilômetros quadrados da carta 2: ");
	scanf("%f", &area_km2_cidade2);

	printf("Insira o PIB da cidade da carta 2: ");
	scanf("%f", &pib2);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 2: \n");
	scanf("%d", &numero_pontos_turisticos2);

	// Área para exibição dos dados da cidade
	printf("Carta 1:\n");
	printf("Estado: %c \n", estado1);
	printf("Código: %s \n", codigo_carta1);
	printf("Nome da cidade: %s \n", nome_cidade1);
	printf("População: %f \n", populacao1);
	printf("Área: %f km²\n", area_km2_cidade1);
	printf("PIB: %f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos1);
	printf("\n");
	printf("Carta 2:\n");
	printf("Estado: %c \n", estado2);
	printf("Código: %s \n", codigo_carta2);
	printf("Nome da cidade: %s \n", nome_cidade2);
	printf("População: %f \n", populacao2);
	printf("Área: %f km²\n", area_km2_cidade2);
	printf("PIB: %f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos2);
return 0;
} 