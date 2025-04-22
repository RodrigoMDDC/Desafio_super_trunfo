

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
    double super_poder_01;


// Descrição dos pedidos com printf
// Pedindo para que o usuario entre com os dados da primeira carta com scanf

    printf("Entre com a classificação de estado da primeira carta: \n");
    scanf(" %c", &estado_01);                                                          // Pedir pro usuario colocar o ESTADO da carta

    printf("Entre com o codigo da carta: \n");
    scanf(" %i", &cod_carta_01);                                                       // Pedir pro usuario colocar o codigo da carta

    printf("Entre com o nome da cidade: \n");
    scanf(" %s", cidade_01);                                                           // Pedir pro usuario colocar a Cidade da carta

    printf("Entre com a população da cidade: \n");
    scanf(" %i", &populacao_01);                                                      // Pedir pro usuario colocar a Quantidade populacional da carta

    printf("Entre com a area da cidade em km2: \n");
    scanf(" %f", &area_01);                                                            // Pedir pro usuario colocar a Area da carta

    printf("Entre com o PIB da Cidade: \n");
    scanf(" %f", &pib_01);                                                             // Pedir pro usuario colocar O PIB da carta

    printf("Entre com a quantidade de pontos turisticos da Cidade: \n");
    scanf(" %i", &pontos_turisticos_01);                                               // Pedir pro usuario colocar a quantidade de Pontos Turisticos da carta



    // Cdeclarando variaveis e cauculando densidade populacional

    float densidade_populacional_01 = (float) populacao_01 / area_01;
    float pib_percapito_01 = pib_01 / (float) populacao_01;



    // Cauculando super poder

    super_poder_01 = (float) populacao_01 + area_01 + pib_01 + pontos_turisticos_01 + pib_percapito_01 + (1 / densidade_populacional_01);



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
    printf("Pontos Turisticos: %i\n", pontos_turisticos_01);
    printf("Densidade Populacional: %.0f habitantes por km2\n", densidade_populacional_01);
    printf("PIB Percapito: %.2f\n", pib_percapito_01);
    printf("Super Poder: %.3f\n\n", super_poder_01);



// Codigos da segunda carta

// Declaração de variaveis da segunda carta

    char estado_02;
    int cod_carta_02;
    char cidade_02[20];
    int populacao_02;
    float area_02;
    float pib_02;
    int pontos_turisticos_02;
    double super_poder_02;


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


        // Cdeclarando variaveis e cauculando densidade populacional

    float densidade_populacional_02 = (float) populacao_02 / area_02;
    float pib_percapito_02 = pib_02 / (float) populacao_02;


            // Cauculando super poder

    super_poder_02 = (float) populacao_02 + area_02 + pib_02 + pontos_turisticos_02 + pib_percapito_02 + (1 / densidade_populacional_02);





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
    printf("Pontos Turisticos: %i\n", pontos_turisticos_02);
    printf("Densidade Populacional: %.2f mil habitantes por km2 \n", densidade_populacional_02);
    printf("PIB Percapito: %.2f\n\n", pib_percapito_02);
    printf("Super Poder: %.3f\n\n", super_poder_02);

    

    // Comparando os atributos das cartar

    int compara_estado = populacao_01 > populacao_02;
    int compara_area = area_01 > area_02;
    int compara_pib = pib_01 > pib_02;
    int compara_ponto_turistico = pontos_turisticos_01 > pontos_turisticos_02;
    int compara_densidade_populacional = densidade_populacional_01 > densidade_populacional_02;
    int compara_pib_percatito = pib_percapito_01 > pib_percapito_02;
    int compara_super = super_poder_01 > super_poder_02;

    


    printf("Primeira carta\n1 ganha com a maior população\n0 perde com menor população\n\nAPontuação: %i\n\n", compara_estado);
    printf("Primeira carta\n1 ganha com a maior area\n0 perde com menor area\n\nPontuação: %i\n\n", compara_area);
    printf("Primeira carta\n1 ganha com a maior pib\n0 perde com menor pib\n\nPontuação: %i\n\n", compara_pib);
    printf("Primeira carta\n1 ganha com a maior numero de pontos turisticos\n0 perde com menor numero de pontos turisticos\n\nPontuação: %i\n\n", compara_ponto_turistico);
    printf("Primeira carta\n1 ganha com a menor densidade populacional\n0 perde com maior densidade populacional\n\nPontuação: %i\n\n", compara_densidade_populacional);
    printf("Primeira carta\n1 ganha com a maior pib per capita\n0 perde com menor pib per capita\n\nPontuação: %i\n\n", compara_pib_percatito);
    printf("Primeira carta\n1 ganha com a maior super poder\n0 perde com menor super poder\n\nPontuação: %i\n\n", compara_super);





    return 0;

}