#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definição da estrutura para as cartas
typedef struct {
    char nome[50];
    int populacao;
    float area, pib;
} Carta;

// Função para gerar uma carta aleatória
void gerarCarta(Carta *c) {
    sprintf(c->nome, "Cidade-%d", rand() % 100);
    c->populacao = rand() % 5000000 + 100000; // População entre 100 mil e 5 milhões
    c->area = (rand() % 9000) + 100;          // Área entre 100 e 9000 km²
    c->pib = ((rand() % 100) + 1) * 10.0;     // PIB entre 10 e 1000 bilhões
}

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    int opcao, atributo1, atributo2;
    char nome[50];

    // Exibe o título do jogo
    printf("Super Trunfo - Cartas de Cidades\n");
    // Menu principal
    printf("Menu principal:\n");
    printf("1. Jogar\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu jogar!\n");
            break;
        case 2:
            printf("As regras do jogo são simples:\n");
            printf("1. Duas cartas serão criadas com dados de cidades.\n");
            printf("2. Cada carta terá atributos como população, área e PIB.\n");
            printf("3. O superpoder de cada carta será calculado com base nesses atributos.\n");
            printf("4. A carta com o maior superpoder vence a partida.\n");
            printf("5. Se os superpoderes forem iguais, ocorre um empate.\n");
            printf("6. O jogo termina após a batalha entre as duas cartas.\n");
            printf("Pressione qualquer tecla para voltar ao menu principal.\n");
            getchar(); // Limpa o buffer do teclado
            getchar(); // Aguarda o usuário pressionar uma tecla
            return main(); // Reinicia o menu
        case 3:
            printf("Obrigado! Até a próxima!\n");
            return 0;
        default:
            printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
            return 1;
    }

    // Escolha do modo de jogo
    printf("Escolha o modo de jogo:\n");
    printf("1. Um jogador\n");
    printf("2. Dois jogadores\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Você escolheu o modo de um jogador!\n");
        print("Neste modo você joga contra o computador");

        Carta cartaUsuario, cartaComputador;

        printf("Insira o nome da sua cidade: ");
        scanf("%s", cartaUsuario.nome);
        printf("Insira a população: ");
        scanf("%d", &cartaUsuario.populacao);
        printf("Insira a área (km²): ");
        scanf("%f", &cartaUsuario.area);
        printf("Insira o PIB (bilhões): ");
        scanf("%f", &cartaUsuario.pib);

        // Gera a carta do computador
        gerarCarta(&cartaComputador);

        // Exibe as cartas
        printf("Sua carta:\n");
        printf("Nome: %s\n", cartaUsuario.nome);
        printf("População: %d\n", cartaUsuario.populacao);
        printf("Área: %.2f km²\n", cartaUsuario.area);
        printf("PIB: %.2f bilhões\n", cartaUsuario.pib);

        printf("\nCarta do computador:\n");
        printf("Nome: %s\n", cartaComputador.nome);
        printf("População: %d\n", cartaComputador.populacao);
        printf("Área: %.2f km²\n", cartaComputador.area);
        printf("PIB: %.2f bilhões\n", cartaComputador.pib);

        // Lógica para determinar o vencedor
        printf("Escolha o primeiro atributo para a batalha:\n");
        printf("1. População\n");  
        printf("2. Área\n");
        printf("3. PIB\n"); 
        printf("4. PIB per capita\n");
        printf("Escolha o primeiro atributo (1-4): ");
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 4) {
            printf("Atributo inválido! Por favor, escolha entre 1 e 4.\n");
            return 1; // Encerra o programa se a opção for inválida
        }

        if (atributo1 == 1) {
            printf("Você escolheu o atributo População!\n");
        } else if (atributo1 == 2) {
            printf("Você escolheu o atributo Área!\n");
        } else if (atributo1 == 3) {
            printf("Você escolheu o atributo PIB!\n");
        } else if (atributo1 == 4) {
            printf("Você escolheu o atributo PIB per capita!\n");
        }
        printf("Escolha o segundo atributo para a batalha:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. PIB per capita\n");
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 4) {
            printf("Atributo inválido! Por favor, escolha entre 1 e 4.\n");
            return 1; // Encerra o programa se a opção for inválida
        }
        if (atributo2 == 1) {
            printf("Você escolheu o atributo População!\n");
        } else if (atributo2 == 2) {
            printf("Você escolheu o atributo Área!\n");
        } else if (atributo2 == 3) {
            printf("Você escolheu o atributo PIB!\n");
        } else if (atributo2 == 4) {
            printf("Você escolheu o atributo PIB per capita!\n");
        }
        // Cálculo do superpoder da carta do usuário
        float superpoderUsuario = 0.0, superpoderComputador = 0.0;
        if (atributo1 == 1) {
            superpoderUsuario += cartaUsuario.populacao;
        } else if (atributo1 == 2) {
            superpoderUsuario += cartaUsuario.area;
        } else if (atributo1 == 3) {
            superpoderUsuario += cartaUsuario.pib;
        } else if (atributo1 == 4) {
            superpoderUsuario += cartaUsuario.pib / cartaUsuario.populacao; // PIB per capita
        }
        if (atributo2 == 1) {
            superpoderUsuario += cartaUsuario.populacao;
        } else if (atributo2 == 2) {
            superpoderUsuario += cartaUsuario.area;
        } else if (atributo2 == 3) {
            superpoderUsuario += cartaUsuario.pib;
        } else if (atributo2 == 4) {
            superpoderUsuario += cartaUsuario.pib / cartaUsuario.populacao; // PIB per capita
        }
        // Cálculo do superpoder da carta do computador
        if (atributo1 == 1) {
            superpoderComputador += cartaComputador.populacao;
        } else if (atributo1 == 2) {
            superpoderComputador += cartaComputador.area;
        } else if (atributo1 == 3) {
            superpoderComputador += cartaComputador.pib;
        } else if (atributo1 == 4) {
            superpoderComputador += cartaComputador.pib / cartaComputador.populacao; // PIB per capita
        }
        if (atributo2 == 1) {
            superpoderComputador += cartaComputador.populacao;
        } else if (atributo2 == 2) {
            superpoderComputador += cartaComputador.area;
        } else if (atributo2 == 3) {
            superpoderComputador += cartaComputador.pib;
        } else if (atributo2 == 4) {
            superpoderComputador += cartaComputador.pib / cartaComputador.populacao; // PIB per capita
        }
        // Determina o vencedor
        if (superpoderUsuario > superpoderComputador) {
            printf("Você venceu! Sua carta é mais poderosa.\n");
        } else if (superpoderUsuario < superpoderComputador) {
            printf("O computador venceu! A carta do computador é mais poderosa.\n");
        } else {
            printf("Empate! As cartas têm o mesmo poder.\n");
        }
        printf("Fim do jogo!\n");
        printf("Obrigado por jogar Super Trunfo - Cartas de Cidades!\n");

    } else if (opcao == 2) {
        printf("Você escolheu o modo de dois jogadores!\n");

        char estado1[20], estado2[20];
    char numcarta1[10], numcarta2[10];
    int populacao1, populacao2, ponto1, ponto2, opcao;
    float area1, area2, pib1, pib2, densi_pop1, densi_pop2, per_capita1, per_capita2;
    float  superpoder1, superpoder2;   
    char cidade1[50], cidade2[50];

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
    printf("Número da carta: A%s  \n", numcarta1);
    printf("Cidade: %s \n", cidade1);
    printf("Estado: %s \n", estado1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f\n", area1);
    printf("Densidade populacional: %.2f\n", densi_pop1);
    printf(" PIB per capita: %.2f \n", per_capita1);

    // Exibe os dados da segunda carta
    printf("Número da carta: A%s  \n", numcarta2);
    printf("Cidade: %s \n", cidade2);
    printf("Estado: %s \n", estado2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f\n", area2);
    printf("Densidade populacional: %.2f\n", densi_pop2);
    printf(" PIB per capita: %.2f \n", per_capita2);
    //Batalha entre as cartas
    if (superpoder1 > superpoder2) {
        printf("A carta A%s vence!\n", numcarta1);
    } else if (superpoder1 < superpoder2) {
        printf("A carta A%s vence!\n", numcarta2);
    } else {
        printf("As cartas A%s e A%s empatam!\n", numcarta1, numcarta2);
    }

    printf("Fim do jogo!\n");
    printf("Obrigado por jogar Super Trunfo - Cartas de Cidades!\n");
    
    return 0;

    } else {
        printf("Opção inválida! Por favor, escolha 1 ou 2.\n");
        return 1; // Encerra o programa se a opção for inválida
    }

    return 0;
}
