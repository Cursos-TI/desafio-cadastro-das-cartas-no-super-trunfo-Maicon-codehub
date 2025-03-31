#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Função para calcular o Super Poder das cartas (fruto de pesquisa)
//Função para calcular o Super Poder das cartas
float calcular_superpoder(unsigned long int populacao,  float area, float pib, float pontos_t, float pibPerCapita, float densidadepoPulacional){
    return populacao + area + (pib * 1000000000) + pontos_t + pibPerCapita + (1 / densidadepoPulacional);
}

int main() {
    // Definindo variáveis para cada atributo das cidades
    char estado1[3], codigocarta1[5], nomecidade1[30];
    char estado2[3], codigocarta2[5], nomecidade2[30];
    int pontos_t1, pontos_t2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    float pibPerCapita1, pibPerCapita2, densidadePopulacional1, densidadePopulacional2;
    //desnidade populacional = população/area
    //pib per capita = pib / população 

    // Cadastro das Cartas:
    printf("Insira os dados da carta 1:\n");

    printf("Estado: \n");
    scanf("%s", estado1); 
    
    printf("Codigo da cidade: \n");
    scanf("%s", codigocarta1);  
    
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);  // Lê a string inteira até encontrar uma nova linha(segundo minhas pesquisas era assim que resolvia o problema do nome de cidade come espaços)
    
    printf("População: \n");
    scanf("%u", &populacao1);

    printf("Area em Km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_t1);

    pibPerCapita1 = pib1*1000000000 / populacao1;
    densidadePopulacional1 = populacao1 / area1;

    printf("Insira os dados da carta 2:\n");

    printf("Estado: \n");
    scanf("%s", estado2);  // Lê até 2 caracteres para o estado
    
    printf("Codigo da cidade: \n");
    scanf("%s", codigocarta2);  // Lê até 4 caracteres para o código da cidade
    
    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);  
    
    printf("População: \n");
    scanf("%u", &populacao2);

    printf("Area em Km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_t2);

    pibPerCapita2 = pib2*1000000000 / populacao2;
    densidadePopulacional2 = populacao2 / area2;

    float superpoder1 = calcular_superpoder(populacao1,area1,pib1,pontos_t1,pibPerCapita1,densidadePopulacional1);
    float superpoder2 = calcular_superpoder(populacao2,area2,pib2,pontos_t2,pibPerCapita2,densidadePopulacional2);
    // Exibição dos Dados das Cartas:

    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da cidade: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Area em km²: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_t1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %f reais\n", pibPerCapita1);
    printf("O Super Poder da carta 1 é: %.2f", superpoder1);
   
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Area em km²: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_t2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("O Super Poder da carta 2 é: %.2f", superpoder2);

    //Comparação das cartas: 
    // 1 + (valor1 < valor2) → Retorna 1 se a Carta 1 vencer, ou 2 se a Carta 2 vencer.
    // (valor1 > valor2) * 1 → Retorna 1 se a Carta 1 vencer, ou 0 se a Carta 2 vencer.
    printf("Comparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", 1 + (populacao1 < populacao2), (populacao1 > populacao2) * 1);
    printf("Area: Carta %d venceu (%d)\n", 1 + (area1 < area2), (area1 > area2) * 1);
    printf("PIB: a Carta %d venceu (%d)\n", 1 + (pib1 < pib2), (pib1 > pib2) * 1 );
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 1 + (pontos_t1 < pontos_t2), (pontos_t1 > pontos_t2) * 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 1 + (densidadePopulacional1 > densidadePopulacional2), (densidadePopulacional1 < densidadePopulacional2) * 1); 
    printf("PIB per Capita: Carta %d venceu (%d)\n", 1 + (pibPerCapita1 < pibPerCapita2), (pibPerCapita1 > pibPerCapita2) * 1);
    printf("Super Poder: Carta %d venceu (%d)\n", 1 + (superpoder1 < superpoder2), (superpoder1 > superpoder2) * 1);

    return 0;
}

    