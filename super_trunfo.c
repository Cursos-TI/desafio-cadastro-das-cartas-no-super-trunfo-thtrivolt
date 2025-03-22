#include <stdio.h>
//jogo Super Trunfo de Países
int main() {
    // Variáveis para armazenar os dados de duas cartas
        char estado1 , estado2, codigo1[5], codigo2[5], cidade1[50],cidade2[50]; 
        int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
        float area1, area2, pib1 , pib2;

    // Entrada de dados da primeira carta
    printf("Primeira Carta\n"); 
    printf("Digite a letra do estado (A a H): "); // 
    scanf(" %c", &estado1); // fazendo a leitura de caractere
    printf("Digite a letra do estado seguida de um número de (01 a 04):"); // O código da cidade é uma string
    scanf("%s", &codigo1); // fazendo a leitura de string
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1); 
    printf("Digite a população: ");
    scanf("%d", &populacao1); // fazendo a leitura de int
    printf("Digite a área da cidade km²: ");
    scanf("%f", &area1); // fazendo a leitura de float
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");   
    scanf("%d", &pontos_turisticos1);
    printf("\n"); // pular uma linha

    // Entrada de dados da segunda carta
    printf("Segunda Carta\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de (01 a 04):");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    //mostrar os dados da primeira carta
    printf("Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    //mostrar os dados da segunda carta
    printf("Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;   

}