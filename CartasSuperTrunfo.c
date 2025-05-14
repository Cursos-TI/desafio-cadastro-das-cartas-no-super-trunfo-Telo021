#include <stdio.h>

int main() {
    // Cidade 1
    char estado1;
    int cidade1;
    int populacao1;
    float area1, pib1;
    int pontos1;

    // Cidade 2
    char estado2;
    int cidade2;
    int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada da cidade 1
    printf("Cadastro da Cidade 1\n");
    printf("Letra do Estado (A até H): ");
    scanf(" %c", &estado1);
    printf("Número da cidade (1 a 4): ");
    scanf("%d", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada da cidade 2
    printf("\nCadastro da Cidade 2\n");
    printf("Letra do Estado (A até H): ");
    scanf(" %c", &estado2);
    printf("Número da cidade (1 a 4): ");
    scanf("%d", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Mostrar dados cadastrados
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\nCidade 1:\n");
    printf("Código: %c%02d\n", estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCidade 2:\n");
    printf("Código: %c%02d\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}