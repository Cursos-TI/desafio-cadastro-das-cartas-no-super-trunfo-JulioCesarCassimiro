#include <stdio.h>
#define MAX_CARTAS 2

int main() {
    // Carta 1
    char estado;
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    long int superpoder;

    // Cadastro da Carta 1
    printf("Digite seu estado (sigla, ex: S para São Paulo): ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Verificação de divisão por zero
    if (area == 0) {
        printf("Erro: a área não pode ser zero!\n");
        return 1;
    }

    // Calculando a densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Calculando o "superpoder" baseado em todas as variáveis
    superpoder = (populacao * 0.1) + (pontos_turisticos * 50) + (densidade_populacional * 20) + (pib_per_capita * 10);

    // Exibição dos Dados da Carta 1
    printf("\n---- Dados da Cidade 1 ----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Superpoder: %ld\n", superpoder);  // Exibição do superpoder

    // Carta 2
    char estado1;
    char codigo1[20];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    long int superpoder1;

    // Cadastro da Carta 2
    printf("\nDigite seu estado (sigla, ex: S para São Paulo): ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Verificação de divisão por zero
    if (area1 == 0) {
        printf("Erro: a área não pode ser zero!\n");
        return 1;
    }

    // Calculando a densidade populacional e PIB per capita
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Calculando o "superpoder" baseado em todas as variáveis
    superpoder1 = (populacao1 * 0.1) + (pontos_turisticos1 * 50) + (densidade_populacional1 * 20) + (pib_per_capita1 * 10);

    // Exibição dos Dados da Carta 2
    printf("\n---- Dados da Cidade 2 ----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Superpoder: %ld\n", superpoder1);  // Exibição do superpoder

    return 0;
}
