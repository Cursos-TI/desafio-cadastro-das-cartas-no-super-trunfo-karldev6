#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;

    printf("bem vindo ao cadastro do super trunfo! \n");
    printf("digite de A até H para selecionar um estado: \n");
    scanf(" %c", &estado);

    printf("digite o codigo da carta usando a letra do estado e um numero: \n");
    scanf(" %s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf(" %s", &cidade);

    printf("digite a população: \n");
    scanf(" %d", &populacao);

    printf("digite a área do local: \n");
    scanf(" %f", &area);

    printf("digite o pib do local: \n");
    scanf(" %f", &pib);

    printf("digite os pontos turisticos: \n");
    scanf(" %d", &turistico);

    printf("cadastre a segunda carta! \n");

    printf("digite de A até H para selecionar um estado: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta usando a letra do estado e um numero: \n");
    scanf(" %s", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("digite a população: \n");
    scanf(" %d", &populacao2);

    printf("digite a área do local: \n");
    scanf(" %f", &area2);

    printf("digite o pib do local: \n");
    scanf(" %f", &pib2);

    printf("digite os pontos turisticos: \n");
    scanf(" %d", &turistico2); 

    printf("as informações da primeira carta é estado: %c, - codigo: %s, - cidade: %s, - população: %d, - área: %f, - pib: %f, e pontos turisticos: %d  \n", estado, codigo, cidade, populacao, area, pib, turistico);
    printf("as informações da segunda carta é estado: %c, - codigo: %s, - cidade: %s, - população: %d, - área: %f, - pib: %f, e pontos turisticos: %d  \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);




    return 0;
}
