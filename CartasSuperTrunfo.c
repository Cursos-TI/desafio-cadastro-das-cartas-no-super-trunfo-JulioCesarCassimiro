#include <stdio.h>
#define MAX_CARTAS 2

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Carta 1
    char estado;
    char codigo [20];
    char nome [20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("Digite seu estado (sigla, ex: S para São Paulo): ");
    scanf(" %c", &estado);  // Espaço antes do %c para evitar erro no buffer

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);  // Corrigido

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n---- Dados da Cidade ----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);


    // Carta 2

    char estado1;
    char codigo1[20];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;


    printf("Digite seu estado (sigla, ex: S para São Paulo): ");
    scanf(" %c", &estado1);  // Espaço antes do %c para evitar erro no buffer

    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);  // Corrigido

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

    // Exibição dos Dados da Carta 2:

    printf("\n---- Dados da Cidade ----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    


    return 0;
}
