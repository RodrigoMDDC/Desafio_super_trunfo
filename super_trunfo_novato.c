
#include <stdio.h>

int main(){


// Codigos da primeira carta

// Declaração de variaveis da primeira carta

    char estado_01;
    int cod_carta_01;
    char cidade_01[20];
    int populacao_01;
    float area_01;
    float pib_01;
    int pontos_turisticos_01;


// Descrição dos pedidos com printf
// Pedindo para que o usuario entre com os dados da primeira carta com scanf

    printf("Entre com a classificação de estado da primeira carta: \n");
    scanf(" %c", &estado_01);                                                          // Pedir pro usuario colocar o ESTADO da carta

    printf("Entre com o codigo da carta: \n");
    scanf(" %i", &cod_carta_01);                                                       // Pedir pro usuario colocar o codigo da carta

    printf("Entre com o nome da cidade: \n");
    scanf(" %s", cidade_01);                                                           // Pedir pro usuario colocar a Cidade da carta

    printf("Entre com a população da cidade: \n");
    scanf(" %i", &populacao_01);                                                       // Pedir pro usuario colocar a Quantidade populacional da carta

    printf("Entre com a area da cidade em km2: \n");
    scanf(" %f", &area_01);                                                            // Pedir pro usuario colocar a Area da carta

    printf("Entre com o PIB da Cidade: \n");
    scanf(" %f", &pib_01);                                                             // Pedir pro usuario colocar O PIB da carta

    printf("Entre com a quantidade de pontos turisticos da Cidade: \n");
    scanf(" %i", &pontos_turisticos_01);                                               // Pedir pro usuario colocar a quantidade de Pontos Turisticos da carta



    printf(" \n");      // apenas pulando uma linha
    
// Informando o nome do jogo e a ordem da carta para a entrada dos dados 

    printf("Cartas de SUPER TRUNFO \n\n===Carta 01===\n\n");


// Impressão dos dados da primeira carta conforme os dados de entrada que foram pedidos anteriormente


    printf("ESTADO: %c\n", estado_01);
    printf("Codigo: %c-%i\n", estado_01, cod_carta_01);
    printf("Cidade: %s\n", cidade_01);
    printf("População: %i mil habitantes\n", populacao_01);
    printf("Area (Km2): %.2f mil km2\n", area_01);
    printf("PIB em milhões: R$ %.2f\n", pib_01);
    printf("Pontos Turisticos: %i\n\n", pontos_turisticos_01);




// Codigos da segunda carta

// Declaração de variaveis da segunda carta

    char estado_02;
    int cod_carta_02;
    char cidade_02[20];
    int populacao_02;
    float area_02;
    float pib_02;
    int pontos_turisticos_02;


// Descrição dos pedidos com printf
// Pedindo para que o usuario entre com os dados da segunda carta com scanf

    printf("Entre com a classificação de estado da segunda carta: \n");
    scanf(" %c", &estado_02);                                                               // Pedir pro usuario colocar o ESTADO da carta

    printf("Entre com o codigo da carta: \n");
    scanf(" %i", &cod_carta_02);                                                            // Pedir pro usuario colocar o codigo da carta

    printf("Entre com o nome da cidade: \n");
    scanf(" %s", cidade_02);                                                                // Pedir pro usuario colocar a Cidade da carta

    printf("Entre com a população da cidade: \n");
    scanf(" %i", &populacao_02);                                                            // Pedir pro usuario colocar a Quantidade populacional da carta

    printf("Entre com a area da cidade em km2: \n");
    scanf(" %f", &area_02);                                                                 // Pedir pro usuario colocar a Area da carta

    printf("Entre com o PIB da Cidade: \n");
    scanf(" %f", &pib_02);                                                                  // Pedir pro usuario colocar O PIB da carta

    printf("Entre com a quantidade de pontos turisticos da Cidade: \n");
    scanf(" %i", &pontos_turisticos_02);                                                    // Pedir pro usuario colocar a quantidade de Pontos Turisticos da carta



    printf(" \n");                  // apenas pulando uma linha


// Informando o nome do jogo e a ordem da carta para a entrada dos dados 

    printf("Cartas de SUPER TRUNFO \n\n===Carta 02===\n\n");



// Impressão dos dados da primeira carta conforme os dados de entrada que foram pedidos anteriormente

    printf("ESTADO: %c\n", estado_02);
    printf("Codigo: %c-%i\n", estado_01, cod_carta_02);
    printf("Cidade: %s\n", cidade_02);
    printf("População: %i mil habitantes\n", populacao_02);
    printf("Area (Km2): %.2f mil km2\n", area_02);
    printf("PIB em milhões: R$ %.2f\n", pib_02);
    printf("Pontos Turisticos: %i\n\n", pontos_turisticos_02);


}