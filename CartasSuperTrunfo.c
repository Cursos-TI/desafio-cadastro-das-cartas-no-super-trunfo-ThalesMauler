#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int popTotal1, pontosTurista1;
    float area1, pib1;
    int popTotal2, pontosTurista2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("=== CARTA 1 ===\n");
    printf("Digite a população total em milhares:\n");
    scanf("%d", &popTotal1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTurista1);
    printf("Qual a área total em km2 ?\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib1);

    printf("\n=== CARTA 2 ===\n");
    printf("Digite a população total em milhares:\n");
    scanf("%d", &popTotal2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTurista2);
    printf("Qual a área total em km2 ?\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n=== CARTA 1 ===\n");
    printf("População: %d mil\n", popTotal1);
    printf("Nº pontos turísticos: %d\n", pontosTurista1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões\n\n", pib1);

    printf("\n=== CARTA 2 ===\n");
    printf("População: %d mil\n", popTotal2);
    printf("Nº pontos turísticos: %d\n", pontosTurista2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);

    return 0;
}
