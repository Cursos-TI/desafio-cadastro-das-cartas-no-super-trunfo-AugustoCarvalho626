#include <stdio.h>

// Desafio Super Trunfo - Países 
// Tema 1 – Cadastro das cartas
// Teste Augusto Bento Carvalho

    int main(){

// Declaração de variáveis para carta 1
    char estado1;  // Recebe uma letra
    char codigo_carta1[3];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade1[20];  // Recebe o nome de uma cidade
    int população1;  // Recebe um número inteiro
    float area1;  // Recebe número com casas decimais
    float pib1;  // Recebe número com casas decimais
    int pnts_turist1;  // Recebe número inteiro 
    
// Declaração de variáveis para carta 2
    char estado2;  // Recebe uma letra
    char codigo_carta2[3];  // Recebe três caracteres, sendo uma letra e dois números 
    char nome_cidade2[20];  // Recebe nome de uma cidade
    int população2;  // Recebe um número inteiro
    float area2;  // Recebe número com casas decimais
    float pib2;  // Recebe número com casas decimais
    int pnts_turist2;  // Recebe número inteiro
    
// Inserção de dados da carta 1
        printf("Digite os dados da carta 1, de acordo com os itens solicitados: \n");

        printf("Digite uma letra para o estado da carta 1: ");
        scanf("%c", &estado1);
        
        printf("Digite o código da carta 1, contendo uma letra e dois números: ");
        scanf("%s", &codigo_carta1);

        printf("Digite o nome da cidade: ");
        scanf("%s", &nome_cidade1);

        printf("Digite o número da população: ");
        scanf("%i", &população1);

        printf("Digite a área em Km²: ");
        scanf("%.2f", &area1);

        printf("Digite o PIB: ");
        scanf("%i", &pib1);

// Inserção dos dados da carta 2
        
        printf("Digite os dados da carta 2, de acordo com os itens solicitados: \n");

        printf("Digite uma letra para o estado da carta 2: ");
        scanf("%c", &estado2);

        printf("Digite o código da carta 2, contendo uma letra e dois números: ");
        scanf("%S", &codigo_carta2);

        printf("Digite o nome da cidade: ");
        scanf("%S", &nome_cidade2);

        printf("Digite o número da população: ");




        return 0;

    }

