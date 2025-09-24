#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    //VARIAVEIS CARTA UM
    char estado_carta_um,codigo_carta_um[4],nome_carta_um[100];
    int populacao_carta_um,pontos_turisticos_carta_um;
    float area_carta_um,pib_carta_um;

    //VARIAVEIS CARTA DOIS
    char estado_carta_dois,codigo_carta_dois[4],nome_carta_dois[100];
    int populacao_carta_dois,pontos_turisticos_carta_dois;
    float area_carta_dois,pib_carta_dois;

    //Entrada de dados da carta um;
    printf("DADOS DA CARTA UM \n");
    printf("DIGITE UMA LETRA DE A ATÉ H REPRESENTANDO UM DOS 8 ESTADO: \n");
    scanf(" %c",&estado_carta_um); // espaço antes do %c por conta do buffer( obs: pesquisar mais sobre o buffer )

    printf("DIGITE A LETRA ACIMA E UM NUMERO ENTRE 01 e 04 (EX:A01,B01) \n");
    scanf("%s",codigo_carta_um);

    printf("DIGITE O NOME DA CIDADE (caso seja composto digite sem o espaço): \n");
    scanf("%s",nome_carta_um);

    printf("NUMERO DA POPULAÇÃO: \n");
    scanf("%i",&populacao_carta_um);

    printf("TAMANHO DA AREA: \n");
    scanf("%f",&area_carta_um);

    printf("NUMERO DO PIB: \n");
    scanf("%f",&pib_carta_um);

    printf("NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%i",&pontos_turisticos_carta_um);

    //Entrada de dados da carta dois;
    printf("DADOS DA CARTA DOIS\n");
    printf("DIGITE UMA LETRA DE A ATÉ H REPRESENTANDO UM DOS 8 ESTADO: \n");
    scanf(" %c",&estado_carta_dois); // espaço antes do %c por conta do buffer( obs: pesquisar mais sobre o buffer )

    printf("DIGITE A LETRA ACIMA E UM NUMERO ENTRE 01 e 04 (EX:A01,B01) \n");
    scanf("%s",codigo_carta_dois);

    printf("DIGITE O NOME DA CIDADE (caso seja composto digite sem o espaço): \n");
    scanf("%s",nome_carta_dois);

    printf("NUMERO DA POPULAÇÃO: \n");
    scanf("%i",&populacao_carta_dois);

    printf("TAMANHO DA AREA: \n");
    scanf("%f",&area_carta_dois);

    printf("NUMERO DO PIB: \n");
    scanf("%f",&pib_carta_dois);

    printf("NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%i",&pontos_turisticos_carta_dois); 
    
    //SAIDA DOS DADOS DE AMBAS AS CARTAS

    printf("\n====================================\n");
    printf("      CARTAS CADASTRADAS\n");
    printf("====================================\n");

    printf("\n--- Informacoes da Carta 01 ---\n"
           "Estado: %c\n"
           "Codigo: %s\n"
           "Nome da cidade: %s\n"
           "Populacao: %d\n"
           "Area: %.2f km2\n"
           "PIB: %.2f bilhoes\n"
           "Pontos turisticos: %d\n",
           estado_carta_um,
           codigo_carta_um,
           nome_carta_um,
           populacao_carta_um,
           area_carta_um,
           pib_carta_um,
           pontos_turisticos_carta_um);

    printf("\n--- Informacoes da Carta 02 ---\n"
           "Estado: %c\n"
           "Codigo: %s\n"
           "Nome da cidade: %s\n"
           "Populacao: %d\n"
           "Area: %.2f km2\n"
           "PIB: %.2f bilhoes\n"
           "Pontos turisticos: %d\n",
            estado_carta_dois,
            codigo_carta_dois,
            nome_carta_dois,
            populacao_carta_dois,
            area_carta_dois,
            pib_carta_dois,
            pontos_turisticos_carta_dois);
    
    return 0;
}
