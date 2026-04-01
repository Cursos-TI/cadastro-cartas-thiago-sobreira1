
#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Objetivo: No nível Aventureiro será adicionar cálculo Densidade Populacional e PIB per Capita;

int main () {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[50], nome_cidade2[50];
	float area_km2_cidade1, area_km2_cidade2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
	int numero_pontos_turisticos1, numero_pontos_turisticos2;
	unsigned long int populacao1, populacao2;
	int opcao;

	// ÁREA PARA ENTRADA DE DADOS
	
	//DADOS CARTA 01
	estado1 = 'A';
	strcpy(codigo_carta1, "A01");
	strcpy(nome_cidade1, "São Paulo");
	populacao1 = 12325000;
	area_km2_cidade1 = 1521.11;
	pib1 = 699280000000;
	numero_pontos_turisticos1 = 30;

	densidade_populacional1 = populacao1 / area_km2_cidade1;
	pib_per_capita1 = pib1 / populacao1;

	//DADOS CARTA 02
	estado2 = 'B';
	strcpy(codigo_carta2, "B02");
	strcpy(nome_cidade2, "Rio de Janeiro");
	populacao2 = 6748000;
	area_km2_cidade2 = 1200.25;
	pib2 = 300500000000;
	numero_pontos_turisticos2 = 50;

	densidade_populacional2 = populacao2 / area_km2_cidade2;
	pib_per_capita2 = pib2 / populacao2;

	printf("### MENU DE COMPARAÇÃO ###\n");
	printf("Escolha um atributo para comparar\n");
	printf("1. População\n");
	printf("2. Área\n");
	printf("3. PIB\n");
	printf("4. Número de pontos turísticos\n");
	printf("5. Densidade demográfica\n");
	printf("Escolha uma opção: \n");
	scanf("%d", &opcao);

	switch (opcao) {
	case 1: 
		printf("Você escolheu comparar atributo População\n");
		printf("Carta 01: %lu e Carta 02: %lu\n", populacao1, populacao2);
		if (populacao1 > populacao2) {
			printf("Carta 01 ganhou! (%lu)\n", populacao1);
		} else if (populacao1 < populacao2) {
			printf ("Carta 02 ganhou! (%lu)\n", populacao2);
		} else {
			printf("Atributo empatado!");
		}
		break;
	case 2: 
		printf("Você escolheu comparar atributo Área\n");
		printf("Carta 01: %f e Carta 02: %f\n", area_km2_cidade1, area_km2_cidade2);
		if (area_km2_cidade1 > area_km2_cidade2) {
			printf("Carta 01 ganhou!");
		} else if (area_km2_cidade1 < area_km2_cidade2) {
			printf("Carta 02 ganhou!");
		} else {
			printf("Atributo empatado!");
		}
		break;
	case 3: 
		printf("Você escolheu comparar atributo PIB\n");
		printf("Carta 01: %f e Carta 02: %f\n", pib1, pib2);
		if (pib1 > pib2) {
			printf("Carta 01 ganhou!");
		} else if (pib1 < pib2) {
			printf("Carta 02 ganhou!");
		} else {
			printf("Atributo empadado!");
		}
		break;
	case 4: 
		printf("Você escolheu comparar atributo Número de pontos turísticos\n");
		printf("Carta 01: %d e Carta 02: %d\n", numero_pontos_turisticos1, numero_pontos_turisticos2);
		if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
		{
			printf("Carta 01 ganhou!");	
		} else if (numero_pontos_turisticos1 < numero_pontos_turisticos2) {
			printf("Carta 02 ganhou!");
		} else {
			printf("Atributo empatado!");
		}
		break;
	case 5: 
		printf("Você escolheu comparar atributo Densidade demográfica\n");
		printf("Carta 01: %f e Carta 02: %f\n", densidade_populacional1, densidade_populacional2);
		if (densidade_populacional1 < densidade_populacional2) {
			printf("Carta 01 ganhou!");
		} else if (densidade_populacional1 > densidade_populacional2) {
			printf("Carta 02 ganhou!");
		} else {
			printf("Atributo empatado");
		}
		break;
	default: 
		printf("Opção inválida, recarregue o programa e digite um número válido");
	}
} 