#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao, pontos_turisticos;
    float pib;
    char area[50];

    printf("Digite o numero de pessoas na cidade:\n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turiscos na cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite o valor de PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &area);

    printf("Nome da cidade: %s\nPopulação: %d\nPontos turísticos: %d\nPIB: %f\n", area, populacao, pontos_turisticos, pib);




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
