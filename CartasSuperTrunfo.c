#include <stdio.h>

int main(){

char estado1[50], estado2[50], nome_da_cidade1[50], nome_da_cidade2[50], codigo_carta2[50], codigo_carta1[50];
int populacao2, populacao1, n_pontosturisticos1, n_pontosturisticos2;
float  area1, area2, pib1, pib2, per, per2;


// primeira carta
    printf("Estado 1: \n");
    scanf("%s", &estado1);

    printf("Codigo da carta: \n");
    scanf("%s", &codigo_carta1);

    printf("Nome da cidade: \n");
    scanf("%s", &nome_da_cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);


    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &n_pontosturisticos1);

    printf("Cadastrada com sucesso \n");


//segunda carta

        printf("Estado 2: \n");
        scanf("%s", &estado2);

        printf("Codigo da carta: \n");
        scanf("%s", &codigo_carta2);

        printf("Nome da cidade: \n");
        scanf("%s", &nome_da_cidade2);

        printf("População: \n");
        scanf("%d", &populacao2);

        printf("Área: \n");
        scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &n_pontosturisticos2);

        printf("Cadastrada com sucesso \n");

// impressao dos dados da carta 1:

    printf("Estado 1: %c \n", estado1);
    printf("Código da Carta: %c \n", codigo_carta1);
    printf("Nome da cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f", area1);
    printf(" Km² \n");
    printf("PIB: %.2f", pib1);
    printf(" bilhões de reais \n");
    printf("Número de pontos turísticos: %d \n", n_pontosturisticos1);



// impressao dos dados da carta 2:

        printf("Estado 1: %c \n", estado2);
        printf("Código da Carta: %s \n", codigo_carta2);
        printf("Nome da cidade: %s \n", nome_da_cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f", area2);
        printf(" Km² \n");
        printf("PIB: %.2f", &pib2);
        printf(" bilhões de reais \n");
        printf("Número de pontos turísticos: %d", n_pontosturisticos2);










    return 0;
}
