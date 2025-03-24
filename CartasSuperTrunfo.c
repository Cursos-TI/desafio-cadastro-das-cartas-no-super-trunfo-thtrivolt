#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Thiago

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codCarta1[3], codCarta2[3], nomeCidade1[50], nomeCidade2[50];
    int pontos_turisticos1, pontos_turisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_capita1, pib_capita2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Entrada de dados da primeira carta
    printf("== Jogo Super Trunfo de Países ==\n");
    printf("Primeira Carta\n");
    printf("Digite a primeira letra do estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf(" %s", codCarta1);
    printf("Digite o nome da cidade: ");
    // %49[^\n] para ler até 49 caracteres, ignorando o \n
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Calcular a densidade populacional da primeira carta e converter populacao1 para float
    densidade1 = (float)populacao1 / area1;

    // Calcular o PIB per capita da primeira carta
    pib_capita1 = (float)pib1 / populacao1;

    // Calcular o Super Poder da primeira carta
    superPoder1 = (float)(populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1 + (1.0 / densidade1));

    // Entrada de dados da segunda carta
    printf("Segunda Carta\n");
    printf("Digite a primeira letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf(" %s", codCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Calcular a densidade populacional da segunda carta e converter populacao2 para float
    densidade2 = (float)populacao2 / area2;

    // Calcular o PIB per capita da segunda carta
    pib_capita2 = (float)pib2 / populacao2;

    // Calcular o Super Poder da segunda carta
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 + (1.0 / densidade2));

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibir as informações da primeira carta
    printf("Informações da Primeira Carta\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);
    printf("\n");

    // Exibir as informações da segunda carta
    printf("Informações da Segunda Carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);
    printf("\n");

    /*Comparar os atributos das cartas e exibir os resultados
    Estrutura do operador ternário: (condição) ? valor_se_verdadeiro : valor_se_falso*/

    printf("Comparação de Cartas:\n");

    // Comparar População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    // Comparar Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // Comparar PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    // Comparar Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparar Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);

    // Comparar PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_capita1 > pib_capita2) ? 1 : 2, (pib_capita1 > pib_capita2) ? 1 : 0);

    // Comparar Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
