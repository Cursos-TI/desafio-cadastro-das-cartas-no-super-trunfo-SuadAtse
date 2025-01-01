#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome_estado[20], nome_da_cidade[20];
    int populacao, pontos_turisticos;
    float pib, area, densidade_populacional, pib_per_capita;
    

    printf("Digite o nome do Estado:\n");
    scanf("%s", &nome_estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("Digite o valor da população em %s\n",nome_da_cidade);
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turiscos na cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite o valor de PIB de %s\n",nome_da_cidade);
    scanf("%f", &pib);

    printf("Digite o valor da área em km² de %s\n", nome_da_cidade);
    scanf("%f", &area);
    
    densidade_populacional = populacao/area;

    pib_per_capita = pib/populacao;


    printf("Nome do Estado: %s\nNome da cidade: %s\nPopulação: %d\nPontos turísticos: %d\nPIB: %f\nÁrea: %f\nDensidade Populaciomal: %f\nPIB per capita: %f\n", nome_estado, nome_da_cidade, populacao, pontos_turisticos, pib, area, densidade_populacional, pib_per_capita);




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
