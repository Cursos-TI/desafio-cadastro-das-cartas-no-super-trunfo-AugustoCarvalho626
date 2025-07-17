#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 1 – Cadastro das cartas
// Teste Augusto Bento Carvalho

    int main(){

// Declaração de variáveis para carta 1
    char estado1;  // Recebe uma letra
    char codigo_carta1[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade1[20];  // Recebe o nome de uma cidade
    int população1;  // Recebe um número inteiro
    float area1;  // Recebe número com casas decimais
    float pib1;  // Recebe número com casas decimais
    int pnts_turist1;  // Recebe número inteiro 
    
// Declaração de variáveis para carta 2
    char estado2;  // Recebe uma letra
    char codigo_carta2[4];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade2[20];  // Recebe nome de uma cidade
    int população2;  // Recebe um número inteiro
    float area2;  // Recebe número com casas decimais
    float pib2;  // Recebe número com casas decimais
    int pnts_turist2;  // Recebe número inteiro
    
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

// Saída de dados da carta 1
        
        printf("\nDados relativo a carta 1:\n");
        printf("\nCódigo da carta: %s\n",codigo_carta1);
        printf("Letra do estado da carta: %c\n", estado1);
        printf("Nome da cidade da carta: %s\n", nome_cidade1);
        printf("População da cidade: %i\n",população1);
        printf("Área Km²: %.2f\n", area1);
        printf("Pib: %.2f\n", pib1);
        printf("Pontos Turísticos: %i\n",pnts_turist1);

// Saída de dados da carta 2

        printf("\nDados relativos a carta 2:\n");
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Letra do estado da carta: %c\n",estado2);
        printf("Nome da cidade da carta: %s\n", nome_cidade2);
        printf("População da cidade: %i\n", população2);
        printf("Área Km²: %.2f\n", area2);
        printf("Pib: %.2f\n", pib2);
        printf("Pontos Turísticos: %i\n", pnts_turist2);


        return 0;

    }

