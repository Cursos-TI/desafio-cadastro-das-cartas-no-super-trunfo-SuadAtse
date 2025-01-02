#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome_estado1[20], nome_da_cidade1[20], nome_estado2[20], nome_da_cidade2[20];
    unsigned int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float pib1, area1, densidade_populacional1, pib_per_capita1, superpoder1, pib2, area2, densidade_populacional2, pib_per_capita2, superpoder2;
    
    printf("Digite os valores da carta 1\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s", &nome_estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade1);

    printf("Digite o valor da população em %s:\n",nome_da_cidade1);
    scanf("%u", &populacao1);

    printf("Digite o numero de pontos turiscos na cidade de %s:\n", nome_da_cidade1);
    scanf("%u", &pontos_turisticos1);

    printf("Digite o valor de PIB de %s\n",nome_da_cidade1);
    scanf("%f", &pib1);

    printf("Digite o valor da área em km² de %s:\n", nome_da_cidade1);
    scanf("%f", &area1);
    
    densidade_populacional1 = populacao1/area1;

    pib_per_capita1 = pib1/populacao1;

    superpoder1 = populacao1 + pontos_turisticos1 + pib1 + area1 + pib_per_capita1;

    printf("Nome do Estado: %s\nNome da cidade: %s\nPopulação: %d\nPontos turísticos: %d\nPIB: %f\nÁrea: %f\nDensidade Populaciomal: %f\nPIB per capita: %f\n", nome_estado1, nome_da_cidade1, populacao1, pontos_turisticos1, pib1, area1, densidade_populacional1, pib_per_capita1);

    printf("///////////////////////////////////////////////\n");

    printf("Digite os valores da carta 2\n");

    printf("Digite o nome do estado:\n");
    scanf("%s", &nome_estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite o valor da população em %s:\n", nome_da_cidade2);
    scanf("%u", &populacao2);

    printf("Digite o número de pontos turísticos na cidade de %s:\n",nome_da_cidade2);
    scanf("%u", &pontos_turisticos2);

    printf("Digite o valor de PIB de %s:\n", nome_da_cidade2);
    scanf("%f", &pib2);

    printf("Digite o valor da área em km² de %s:\n", nome_da_cidade2);
    scanf("%f", &area2);

    densidade_populacional2 = populacao2/area2;

    pib_per_capita2 = pib2/populacao2;

    superpoder2 = populacao2 + pontos_turisticos2 + pib2 + area2 + pib_per_capita2;

    printf("Nome do estado: %s\nNome da cidade: %s\nPopulação: %u\nPontos turísticos: %u\nPIB: %f\nÁrea: %f\nDensidade populacional: %f\nPIB per capita: %f\n", nome_estado2, nome_da_cidade2, populacao2, pontos_turisticos2, pib2, area2, densidade_populacional2, pib_per_capita2);

    if (densidade_populacional2 < densidade_populacional1){
        printf("A carta 2 vence por ter a densidade populacional menor que a carta 1.\n");
    }
    else if(densidade_populacional1 < densidade_populacional2){
        printf("A carta 1 vence por ter a densidade populacional menor que a carta 2.\n");
    }
    else{
        printf("Empate pois as cartas possuem o mesmo valor de densidade populacional.\n");
    }
    if (superpoder1 > superpoder2){
        printf("Carta 1 possue o maior super poder.\n");
    }
    else if (superpoder2 > superpoder1){
        printf("Carta 2 possue o maior super poder.\n");
    }
    else{
        printf("As cartas possuem super poder igual.\n");
    }



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
