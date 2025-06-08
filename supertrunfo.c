#include <stdio.h>
int main(){
    char estado1[20], estado2[20];
    char numcarta1[10], numcarta2[10];
    int populacao1, populacao2, ponto1, ponto2;
    float area1, area2, pib1, pib2, densi_pop1, densi_pop2, per_capita1, per_capita2;
    float  superpoder1, superpoder2;   
    char cidade1[50], cidade2[50];

    printf("Super Trunfo - Cartas de Cidades \n");

    // Solicita os dados da primeira carta
    printf("Digite o número da carta:  \n");
    scanf("%s", numcarta1);
    
    printf("Digite o nome da cidade:  \n");
    scanf("%18s", cidade1);
    
    printf("Digite o estado:  \n");
    scanf(" %18s", estado1);

    printf("Digite a população:  \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área:  \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB:  \n");
    scanf("%f", &pib1);
   
    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto1);

    // Valida se os dados informados estão dentro da regra do jogo
    if (populacao1 <= 0 || area1 <= 0 || pib1 < 0 || ponto1 < 0) {
        printf("Dados inválidos para a primeira carta. Verifique os valores informados.\n");
        return 1;
    }

    // Solicita os dados da segunda carta
    printf("Digite o número da segunda carta:  \n");    
    scanf("%s", numcarta2);
    
    printf("Digite o nome da cidade:  \n");
    scanf("%18s", cidade2);
    
    printf("Digite o estado:  \n");
    scanf(" %18s", estado2);
    
    printf("Digite a população:  \n");
    scanf("%d", &populacao2);
   
    printf("Digite a área:  \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB:  \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &ponto2);

    // Valida se os dados informados estão dentro da regra do jogo
    if (populacao2 <= 0 || area2 <= 0 || pib2 < 0 || ponto2 < 0) {
        printf("Dados inválidos para a segunda carta. Verifique os valores informados.\n");
        return 1;
    }

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
    if (superpoder1 > superpoder2) {
        printf("A carta A%s vence!\n", numcarta1);
    } else if (superpoder1 < superpoder2) {
        printf("A carta A%s vence!\n", numcarta2);
    } else {
        printf("As cartas A%s e A%s empatam!\n", numcarta1, numcarta2);
    }

    
    return 0;

}    
