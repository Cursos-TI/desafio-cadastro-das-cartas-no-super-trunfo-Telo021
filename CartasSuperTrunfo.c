#include <stdio.h>
 
int main() {

    char Estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float km1;
    float pib1;
    int turistico1;

    char Estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float km2;
    float pib2;
    int turistico2;

    //Cidade 1
    printf("Estado (ex: De A a H): ");
    scanf(" %c", &Estado1);
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", &cidade1); //para funcionar com espaço: %[^\n]s
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &km1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico1);

    //Cidade 2
    printf("\n===Carta 2===\n\nEstado (ex: De A a H): ");
    scanf(" %c", &Estado2);
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", &cidade2); //para funcionar com espaço: %[^\n]s
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);


    //Exibição da Carta 1

    printf ("\n****Carta 1****\n\n");

    printf("Estado: %c \n",Estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %d \n",populacao1);
    printf("Área %.2f km²\n",km1);             // %.2f para 2 cassas decimais
    printf("PIB: %.2f Bilhoes de Reais\n",pib1);
    printf("Pontos Turísticos: %d \n",turistico1);

    //Exibição da Carta 2

    printf ("\n****Carta 2****\n\n");

    printf("Estado: %c \n",Estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %d \n",populacao2);
    printf("Área %.2f km²\n",km2);            // %.2f para 2 cassas decimais
    printf("PIB: %.2f Bilhoes de Reais\n",pib2);
    printf("Pontos Turísticos: %d \n",turistico2);




    return 0;
    
}