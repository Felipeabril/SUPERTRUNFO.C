#include <stdio.h>

struct Carta {
    char estado[3];       // Ex: SP, RJ, MG
    char codigo[4];       // Ex: A01, B02
    char cidade[50];      // Nome da cidade
    int populacao;        // População
    float area;           // Área em km²
    float pib;            // PIB em R$
    int pontosTuristicos; // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // === Cadastro da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%2s", carta1.estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em R$): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // === Cadastro da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%2s", carta2.estado);

    printf("Digite o codigo da carta (ex: B01): ");
    scanf("%3s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em R$): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // === Cálculos ===
    float densidade1 = carta1.populacao / carta1.area;
    float pibPerCapita1 = carta1.pib / carta1.populacao;

    float densidade2 = carta2.populacao / carta2.area;
    float pibPerCapita2 = carta2.pib / carta2.populacao;

    // === Exibição das cartas ===
    printf("\n\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // === Comparações ===
    printf("\n\n===== COMPARAÇÃO ENTRE AS CARTAS =====\n");

    printf("Populacao: ");
    if (carta1.populacao > carta2.populacao)
        printf("%s vence!\n", carta1.cidade);
    else if (carta2.populacao > carta1.populacao)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    printf("Area: ");
    if (carta1.area > carta2.area)
        printf("%s vence!\n", carta1.cidade);
    else if (carta2.area > carta1.area)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    printf("PIB: ");
    if (carta1.pib > carta2.pib)
        printf("%s vence!\n", carta1.cidade);
    else if (carta2.pib > carta1.pib)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    printf("Pontos Turisticos: ");
    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
        printf("%s vence!\n", carta1.cidade);
    else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    printf("Densidade Populacional (menor vence): ");
    if (densidade1 < densidade2)
        printf("%s vence!\n", carta1.cidade);
    else if (densidade2 < densidade1)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("%s vence!\n", carta1.cidade);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("%s vence!\n", carta2.cidade);
    else
        printf("Empate!\n");

    return 0;
}
