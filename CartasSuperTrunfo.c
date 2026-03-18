
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível Aventureiro será adicionar cálculo Densidade Populacional e PIB per Capita;

int main () {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[50], nome_cidade2[50];
	float area_km2_cidade1, area_km2_cidade2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
	int numero_pontos_turisticos1, numero_pontos_turisticos2;
	unsigned long int populacao1, populacao2;

	// ÁREA PARA ENTRADA DE DADOS
	
	//DADOS CARTA 01
	printf("Insira o estado da carta 1 (Uma letra de 'A' a 'H' (representando um dos oito estados)): ");
	scanf(" %c", &estado1);

	printf("Insira o código da da carta 1 (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
	scanf(" %s", codigo_carta1);

	printf("Insira o nome da cidade da carta 1: ");
  	scanf(" %49[^\n]", nome_cidade1);

	populacao1 = 12300000;

	printf("Insira a área da cidade em quilômetros quadrados da carta 1: ");
	scanf("%f", &area_km2_cidade1);

	printf("Insira o PIB da cidade da carta 1: ");
	scanf("%f", &pib1);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 1: \n");
	scanf("%d", &numero_pontos_turisticos1);

	//CALCULO
	densidade_populacional1 = populacao1 / area_km2_cidade1;
	pib_per_capita1 = pib1 / populacao1;

	//DADOS CARTA 02
	printf("Insira o estado da carta 2: ");
	scanf(" %c", &estado2);

	printf("Insira o código da da carta 2: ");
	scanf(" %s", codigo_carta2);

	printf("Insira o nome da cidade da carta 2: ");
	scanf(" %49[^\n]", nome_cidade2);

	populacao2 = 6000000;

	printf("Insira a área da cidade em quilômetros quadrados da carta 2: ");
	scanf("%f", &area_km2_cidade2);

	printf("Insira o PIB da cidade da carta 2: ");
	scanf("%f", &pib2);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 2: \n");
	scanf("%d", &numero_pontos_turisticos2);

	densidade_populacional2 = populacao2 / area_km2_cidade2;
	pib_per_capita2 = pib2 / populacao2;

	//SUPER PODER
	super_poder1 = populacao1 + area_km2_cidade1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1);
	super_poder2 = populacao2 + area_km2_cidade2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

	// ÁREA PARA EXIBIÇÃO DOS DADOS DA CIDADE
	printf("Carta 1:\n");
	printf("Estado: %c \n", estado1);
	printf("Código: %s \n", codigo_carta1);
	printf("Nome da cidade: %s \n", nome_cidade1);
	printf("População: %lu\n", populacao1);
	printf("Área: %.2f km²\n", area_km2_cidade1);
	printf("PIB: %.2f de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
	printf("PIB per Capita: %.2f\n", pib_per_capita1);
	printf("\n");
	printf("Carta 2:\n");
	printf("Estado: %c \n", estado2);
	printf("Código: %s \n", codigo_carta2);
	printf("Nome da cidade: %s \n", nome_cidade2);
	printf("População: %lu \n", populacao2);
	printf("Área: %.2f km²\n", area_km2_cidade2);
	printf("PIB: %.2f de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
	printf("PIB per Capita: %.2f\n", pib_per_capita2);

	//COMPARAÇÃO
	printf("\n COMPARAÇÃO \n");

	if (populacao1 > populacao2) {
		printf("Carta 01 (São Paulo) venceu na categoria População!\n");
	} else {
		printf("Carta 02 (Rio de Janeiro) venceu na categoria População!\n");
	}

	printf("Area: Carta 1 venceu: %d \n", area_km2_cidade1 > area_km2_cidade2);

	printf("PIB: Carta 1 venceu: %d \n", pib1 > pib2);

	printf("Pontos Turisticos: Carta 1 venceu: %d \n", numero_pontos_turisticos1 > numero_pontos_turisticos2);

	printf("Densidade Populacional: Carta 1 venceu: %d \n", densidade_populacional1 < densidade_populacional2);

	printf("PIB per Capita: Carta 1 venceu: %d \n", pib_per_capita1 > pib_per_capita2);

	printf("Super Poder: Carta 1 venceu: %d \n", super_poder1 > super_poder2);

	return 0;
} 