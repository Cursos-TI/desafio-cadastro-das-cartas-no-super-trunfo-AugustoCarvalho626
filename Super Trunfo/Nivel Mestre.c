#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 3 – Batalha de Cartas no Super Trunfo
// Teste: Augusto Bento Carvalho

    int main(){

// Declaração de variáveis para carta 1
    char estado1;  // Recebe uma letra
    char codigo_carta1[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade1[20];  // Recebe o nome de uma cidade
    int população1;  // Recebe um número inteiro
    float area1;  // Recebe número com casas decimais
    float pib1;  // Recebe número com casas decimais
    int pnts_turist1;  // Recebe número inteiro 
    float densidade_populacional1;  // Recebe número com casas decimais 
    float pib_percapita1;  // Recebe número com casas decimais 

// Declaração de variáveis para carta 2
    char estado2;  // Recebe uma letra
    char codigo_carta2[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade2[20];  // Recebe nome de uma cidade
    int população2;  // Recebe um número inteiro
    float area2;  // Recebe número com casas decimais
    float pib2;  // Recebe número com casas decimais
    int pnts_turist2;  // Recebe número inteiro
    float densidade_populacional2;  // Recebe número com casas decimais 
    float pib_percapita2;  // Recebe número com casas decimais

// Inserção de dados da carta 1
        
        printf("Digite os dados da carta 1, de acordo com os itens solicitados: \n");

        printf("\nDigite uma letra para o estado da carta 1: ");
        scanf(" %c", &estado1);
        
        printf("Digite o código da carta 1, contendo uma letra e dois números: ");
        scanf("%s", codigo_carta1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]s", nome_cidade1);

        printf("Digite o número da população: ");
        scanf("%i", &população1);

        printf("Digite a área: ");
        scanf("%f", &area1);

        printf("Digite o PIB: ");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turísticos ");
        scanf("%i", &pnts_turist1);

// Inserção dos dados da carta 2
        
        printf("\nDigite os dados da carta 2, de acordo com os itens solicitados: \n");

        printf("\nDigite uma letra para o estado da carta 2: ");
        scanf(" %c", &estado2);

        printf("Digite o código da carta 2, contendo uma letra e dois números: ");
        scanf(" %[^\n]s", codigo_carta2);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]s", nome_cidade2);

        printf("Digite o número da população: ");
        scanf("%i", &população2);

        printf("Digite a área: ");
        scanf("%f", &area2);

        printf("digite o pib: ");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos ");
        scanf("%i", &pnts_turist2);


// Calculando a densidade populacional

        densidade_populacional1 = população1 / area1;
        densidade_populacional2 = população2 / area2;


// Calculando o pib per capita

        pib_percapita1 = pib1 / população1;
        pib_percapita2 = pib2 / população2;


// Calculando o super poder

        unsigned poder1 = população1 + area1 + pib1 + pnts_turist1 +
                 pib_percapita1 - densidade_populacional1;
        unsigned poder2 = população2 + area2 + pib2 + pnts_turist2 +
                 pib_percapita2 - densidade_populacional2;


// Saída de dados da carta 1
        
        printf("\nDados relativo a carta 1:\n");
        printf("\nCódigo da carta: %s\n",codigo_carta1);
        printf("Letra do estado da carta: %c\n", estado1);
        printf("Nome da cidade da carta: %s\n", nome_cidade1);
        printf("População da cidade: %i\n",população1);
        printf("Área Km²: %.2f Km²\n", area1);
        printf("Pib: %.2f R$\n", pib1);
        printf("Pontos Turísticos: %i\n",pnts_turist1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("Pib Per Capita: %.2f R$\n", pib_percapita1);
        printf("Super poder: %u\n", poder1);

// Saída de dados da carta 2

        printf("\nDados relativos a carta 2:\n");
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Letra do estado da carta: %c\n",estado2);
        printf("Nome da cidade da carta: %s\n", nome_cidade2);
        printf("População da cidade: %i\n", população2);
        printf("Área Km²: %.2f Km²\n", area2);
        printf("Pib: %.2f R$\n", pib2);
        printf("Pontos Turísticos: %i\n", pnts_turist2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("Pib Per Capita: %.2f R$\n", pib_percapita2);
        printf("Super poder: %u\n", poder2);


// Comparando as cartas

        int populaçao_forte, area_forte, pib_forte, pnts_turist_forte, 
            densidade_popu_forte, percapita_forte, poder_forte;

        populaçao_forte = população1 > população2;
        area_forte = area1 > area2;
        pib_forte = pib1 > pib2;
        pnts_turist_forte = pnts_turist1 > pnts_turist2;
        densidade_popu_forte = densidade_populacional1 < densidade_populacional2;
        percapita_forte = pib_percapita1 > pib_percapita2;
        poder_forte = poder1 > poder2;


// Exibir os resultados das comparações

        printf("Carta 1 venceu em população? %i\n", populaçao_forte);
        printf("Carta 1 venceu em área? %i\n", area_forte);
        printf("Carta 1 venceu em pib? %i\n", pib_forte);
        printf("Carta 1 venceu em pontos turísticos? %i\n", pnts_turist_forte);
        printf("Carta 1 venceu em densidade populacional? %i\n", densidade_popu_forte);
        printf("Carta 1 venceu em pib per capita? %i\n", percapita_forte);
        printf("Carta 1 venceu em super poder? %i\n", poder_forte);


        return 0;

    }

