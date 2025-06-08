#include <stdio.h>
int main(){
    char estado1[20], estado2[20];
    char numcarta1[10], numcarta2[10];
    int populacao1, populacao2, ponto1, ponto2, resultado;
    float area1, area2, pib1, pib2, densi_pop1, densi_pop2, per_capita1, per_capita2;
    float  superpoder1, superpoder2;   
    char cidade1[50], cidade2[50];

    printf("Super Trunfo - Cartas de Cidades \n");

    // Solicita os dados da primeira carta
    printf("Digite o número da carta:  \n");
    scanf("%s", numcarta1);
    
    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade1);
    
    printf("Digite o estado:  \n");
    scanf(" %s", &estado1);
    
    printf("Digite a população:  \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área:  \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB:  \n");
    scanf("%f", &pib1);
   
    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto1);

    // Solicita os dados da segunda carta
    printf("Digite o número da segunda carta:  \n");    
    scanf("%s", numcarta2);
    
    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade2);
    
    printf("Digite o estado:  \n");
    scanf(" %s", &estado2);
    
    printf("Digite a população:  \n");
    scanf("%d", &populacao2);
   
    printf("Digite a área:  \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB:  \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto2);

    // Cálculos de densidade populacional e PIB per capita primeira carta
    densi_pop1 = (float)populacao1 / area1;
    per_capita1 = pib1 / populacao1;
    
    // Cálculos de densidade populacional e PIB per capita segunda carta
    densi_pop2 = (float)populacao2 / area2;
    per_capita2 = pib2 / populacao2;

    // cálculos dos superpoderes
    superpoder1 = ((densi_pop1/1) + per_capita1 + ponto1);
    superpoder2 = ((densi_pop2/1) + per_capita2 + ponto2);

    // Exibe os dados da primeira carta
    printf("Número da carta: A%s - Cidade: %s - Estado: %c \n", numcarta1, cidade1, estado1);
    printf("População: %d - Área: %.2f - PIB: %.2f - Pontos turísticos: %d \n", populacao1, area1, pib1, ponto1);
    printf("Densidade populacional: %.2f - PIB per capita: %.2f \n", densi_pop1, per_capita1);

    // Exibe os dados da segunda carta
    printf("Número da carta: A%s - Cidade: %s - Estado: %c \n", numcarta2, cidade2, estado2);
    printf("População: %d - Área: %.2f - PIB: %.2f - Pontos turísticos: %d \n", populacao2, area2, pib2, ponto2);
    printf("Densidade populacional: %.2f - PIB per capita: %.2f \n", densi_pop2, per_capita2);

    //Batalha entre as cartas
    resultado = (superpoder1 > superpoder2);
    printf("Quem vence a batalha? O superpoder da carta A%s é %.2f e o da carta A%s é %.2f. Vencedor: %s\n",
       numcarta1, superpoder1, numcarta2, superpoder2, resultado ? "Carta 1" : "Carta 2");

    
    return 0;
