#include <stdio.h>
#include <string.h>

int main () {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[50], nome_cidade2[50];
	float area_km2_cidade1, area_km2_cidade2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
	float somaPrimeiraCarta, somaSegundaCarta;
	int numero_pontos_turisticos1, numero_pontos_turisticos2;
	unsigned long int populacao1, populacao2;
	int opcao;
	int resultado1, resultado2;
	char primeiroAtributo, segundoAtributo;


	// ÁREA PARA ENTRADA DE DADOS
	
	//DADOS CARTA 01
	printf("=============================\n");
    printf("      Cadastro da Carta 1    \n");
    printf("=============================\n\n");

	printf("Insira o estado da carta 1 (Uma letra de 'A' a 'H' (representando um dos oito estados)): ");
	scanf(" %c", &estado1);

	printf("Insira o código da da carta 1 (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
	scanf(" %s", codigo_carta1);

	printf("Insira o nome da cidade da carta 1: ");
  	scanf(" %49[^\n]", nome_cidade1);

	printf("Insira a população da cidade da carta 1: ");
	scanf("%lu", &populacao1);

	printf("Insira a área da cidade em quilômetros quadrados da carta 1: ");
	scanf("%f", &area_km2_cidade1);

	printf("Insira o PIB da cidade da carta 1: ");
	scanf("%f", &pib1);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 1: \n");
	scanf("%d", &numero_pontos_turisticos1);


	//DADOS CARTA 02
	printf("=============================\n");
    printf("      Cadastro da Carta 2    \n");
    printf("=============================\n\n");

	printf("Insira o estado da carta 2: ");
	scanf(" %c", &estado2);

	printf("Insira o código da da carta 2: ");
	scanf(" %s", codigo_carta2);

	printf("Insira o nome da cidade da carta 2: ");
	scanf(" %49[^\n]", nome_cidade2);

	printf("Insira a população da cidade da carta 2: ");
	scanf("%lu", &populacao2);

	printf("Insira a área da cidade em quilômetros quadrados da carta 2: ");
	scanf("%f", &area_km2_cidade2);

	printf("Insira o PIB da cidade da carta 2: ");
	scanf("%f", &pib2);

	printf("Insira a quantidade de pontos turísticos na cidade da carta 2: \n");
	scanf("%d", &numero_pontos_turisticos2);

	// --- CÁLCULOS ---
	densidade_populacional1 = populacao1 / area_km2_cidade1;
	pib_per_capita1 = pib1 / populacao1;
	densidade_populacional2 = populacao2 / area_km2_cidade2;
	pib_per_capita2 = pib2 / populacao2;


	//EXIBIÇÃO DOS DADOS
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
	printf("População: %lu\n", populacao2);
	printf("Área: %.2f km²\n", area_km2_cidade2);
	printf("PIB: %.2f de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
	printf("PIB per Capita: %.2f\n", pib_per_capita2);

	// MENU 1º ATRIBUTO
	printf("### Escolha o primeiro atributo ###\n");
	printf("P. População\n");
	printf("A. Área\n");
	printf("I. PIB\n");
	printf("T. Número de pontos turísticos\n");
	printf("D. Densidade demográfica\n");

	printf("Escolha a comparação: \n");
	scanf(" %c", &primeiroAtributo);


	//COMPARAÇÃO DO 1º ATRIBUTO
	switch (primeiroAtributo) {
	case 'P':
	case 'p':
		printf("Você escolheu o atributo População\n");
		if (populacao1 > populacao2) {
			printf("Carta 01 venceu! Com %lu", populacao1);
		} else if (populacao2 > populacao1) {
			printf("Carta 02 venceu! Com %lu", populacao2);
		} else {
			printf("Empate!");
		}
		break;
	case 'A':
	case 'a':
		printf("Você escolheu o atributo Área\n");
		if (area_km2_cidade1 > area_km2_cidade2) {
			printf("Carta 01 venceu! Com %.2f", area_km2_cidade1);
		} else if (area_km2_cidade2 > area_km2_cidade1) {
			printf("Carta 02 venceu! Com %.2f", area_km2_cidade2);
		} else {
		    printf("Empate!");
		}
		break;
	case 'I': 
	case 'i':
		printf("Você escolheu o atributo PIB\n");
		if (pib1 > pib2) {
			printf("Carta 01 venceu! Com %.2f", pib1);
		} else if (pib2 > pib1) {
			printf("Carta 02 venceu! Com %.2f", pib2);
		} else {
		    printf("Empate!");
		}
		break;
	case 'T':
	case 't': 
		printf("Você escolheu o atributo Número de Pontos Turísticos\n");
		if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
			printf("Carta 01 venceu! Com %d", numero_pontos_turisticos1);
		} else if (numero_pontos_turisticos2 > numero_pontos_turisticos1) {
			printf("Carta 02 venceu! Com %d", numero_pontos_turisticos2);
		} else {
		    printf("Empate!");
		}
		break;
	case 'D':
	case 'd':
		printf("Você escolheu o atributo Densidade Demográfica\n");
		if (densidade_populacional1 < densidade_populacional2) {
			printf("Carta 01 venceu! Com %.2f", densidade_populacional1);
		} else if (densidade_populacional2 < densidade_populacional1) {
			printf("Carta 02 venceu! Com %.2f", densidade_populacional2);
		} else {
		    printf("Empate!");
		}
		break;
	default: 
		printf("Opção inválida, recarregue o programa e digite um número válido\n");
	}


	// MENU 2º ATRIBUTO
	printf("### Escolha o segundo atributo ###\n");
	printf("Escoha um atributo diferente do 1º\n");
	printf("P. População\n");
	printf("A. Área\n");
	printf("I. PIB\n");
	printf("T. Número de pontos turísticos\n");
	printf("D. Densidade demográfica\n");

	printf("Escolha a comparação: \n");
	scanf(" %c", &segundoAtributo);

	if (primeiroAtributo == segundoAtributo)
	{
		printf("Você escolheu o mesmo atributo, recarregue o programa e escolha um tributo diferente!");
	} else
	{
		switch (segundoAtributo) {
		case 'P':
		case 'p':
			printf("Você escolheu o atributo População");
			if (populacao1 > populacao2) {
				printf("Carta 01 venceu! Com %lu", populacao1);
			} else if (populacao2 > populacao1) {
				printf("Carta 02 venceu! Com %lu", populacao2);
			} else {
			    printf("Empate!");
			}
			break;
		case 'A':
		case 'a':
			printf("Você escolheu o atributo Área");
			if (area_km2_cidade1 > area_km2_cidade2) {
				printf("Carta 01 venceu! Com %.2f", area_km2_cidade1);
			} else if (area_km2_cidade2 > area_km2_cidade1) {
				printf("Carta 02 venceu! Com %.2f", area_km2_cidade2);
			} else {
			    printf("Empate!");
			}
			break;
		case 'I': 
		case 'i':
			printf("Você escolheu o atributo PIB");
			if (pib1 > pib2) {
				printf("Carta 01 venceu! Com %.2f", pib1);
			} else if (pib2 > pib1) {
				printf("Carta 02 venceu! Com %.2f", pib2);
			} else {
			    printf("Empate!");
			}
			break;
		case 'T':
		case 't': 
			printf("Você escolheu o atributo Número de Pontos Turísticos");
			if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
				printf("Carta 01 venceu! Com %d", numero_pontos_turisticos1);
			} else if (numero_pontos_turisticos2 > numero_pontos_turisticos1) {
				printf("Carta 02 venceu! Com %d", numero_pontos_turisticos2);
			} else {
			    printf("Empate!");
			}
			break;
		case 'D':
		case 'd':
			printf("Você escolheu o atributo Densidade Demográfica");
			if (densidade_populacional1 < densidade_populacional2) {
				printf("Carta 01 venceu! Com %.2f", densidade_populacional1);
			} else if (densidade_populacional2 < densidade_populacional1) {
				printf("Carta 02 venceu! Com %.2f", densidade_populacional2);
			} else {
			    printf("Empate!");
			}
			break;
		default: 
			printf("Opção inválida, recarregue o programa e digite um número válido");
		}
	}

	//SOMA DOS ATRIBUTOS
	somaPrimeiraCarta = populacao1 + area_km2_cidade1 + pib1 + numero_pontos_turisticos1 + pib_per_capita1 + (1/densidade_populacional1);
	somaSegundaCarta = populacao2 + area_km2_cidade2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

	printf("\nSoma dos atributos da Carta 01: %.2f", somaPrimeiraCarta);
	printf("\nSoma dos atributos da Carta 02: %.2f", somaSegundaCarta);
	
	if (somaPrimeiraCarta > somaSegundaCarta) {
		printf("\nA Carta 01 é a vencedora geral!");
	} else if (somaSegundaCarta > somaPrimeiraCarta) {
		printf("\nA Carta 02 é a vencedora geral!");
	} else {
		printf("\nAs cartas estão empatadas!");
	}
	
} 