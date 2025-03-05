#include <stdio.h>

int main(){

char estado1[50], estado2[50], nome_da_cidade1[50], nome_da_cidade2[50], codigo_carta2[50], codigo_carta1[50];
int populacao2, populacao1, n_pontosturisticos1, n_pontosturisticos2;
float  area1, area2, pib1, pib2, densidade, per, densidade2, per2;


// primeira carta
    printf("Estado 1: \n");
    scanf("%s" , &estado1);

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
    printf(" \n");

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
        printf(" \n");
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
    printf(" \n");


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
        printf(" \n");

// calculo carta 1



    densidade = (float) populacao1/area1;

    per =(float) pib1 / populacao1;


// calculo carta 2


        densidade2 = (float) populacao2/area2;

        per2 = (float) pib2 / populacao2;

// impressao carta 1

    printf("Carta 1:\n");
    printf("Estado 1: %s \n", estado1);
    printf("Código da Carta: %s \n", codigo_carta1);
    printf("Nome da cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f", area1);
    printf(" Km² \n");
    printf("PIB: %.2f", pib1);
    printf(" bilhões de reais \n");
    printf("Número de pontos turísticos: %d \n", n_pontosturisticos1);
    printf("Densidade Populacional: %.2f ", densidade);
    printf(" hab/Km² \n");
    printf("PIB per Capita: %.2f", per);
    printf(" reais \n");
    printf(" \n");
// impressao carta 2
        printf("Carta 2:\n");
        printf("Estado 2: %s \n", estado2);
        printf("Código da Carta: %s \n", codigo_carta2);
        printf("Nome da cidade: %s \n", nome_da_cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %f", area2);
        printf(" Km² \n");
        printf("PIB: %.2f", pib2);
        printf(" bilhões de reais \n");
        printf("Número de pontos turísticos: %d \n", n_pontosturisticos2);
        printf("Densidade Populacional: %.2f ", densidade2);
        printf(" hab/Km² \n");
        printf("PIB per Capita: %.2f", per2);
        printf(" reais \n");
        printf(" \n");



// calculo densidade inverso;


float inverdensidade1=  1/densidade;
float inverdensidade2 =  1/densidade2;

// calculo super poder:

float superp1 = populacao1+area1+pib1+n_pontosturisticos1+per+inverdensidade1;

float superp2 = populacao2+area2+pib2+n_pontosturisticos2+per2+inverdensidade2;

// comparação das cartas utilizando if e else:
    printf("Comparação de cartas (Atributo: População):");
    printf(" \n");
    if (populacao1>populacao2)
    {
        printf("Carta 1 - São Paulo (SP): %d \n", populacao1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populacao2);
        printf("Carta 1 (São Paulo) venceu! \n");
    } else {
        printf("Carta 1 - São Paulo (SP): %d \n", populacao1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populacao2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: ÁREA):");
    printf(" \n");
    if (area1>area2)
    {
        printf("Carta 1 - São Paulo (SP): %f\n", area1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", area2);
        printf("Carta 1 (São Paulo) venceu!");
    } else {
        printf("Carta 1 - São Paulo (SP): %f\n", area1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", area2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: PIB):");
    printf(" \n");
    
    if (pib1>pib2)
    {
        printf("Carta 1 - São Paulo (SP): %f\n", pib1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", pib2);
        printf("Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Carta 1 - São Paulo (SP): %f\n", pib1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", pib2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");

    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: Pontos Turisticos):");
    printf(" \n");
    if (n_pontosturisticos1 > n_pontosturisticos2)
    {
        printf("Carta 1 - São Paulo (SP): %d\n", n_pontosturisticos1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", n_pontosturisticos2);
        printf("Carta 1 (São Paulo) venceu! \n");
    } else {

    
        printf("Carta 1 - São Paulo (SP): %d\n", n_pontosturisticos1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n",n_pontosturisticos2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    
    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: Densidade):");
    printf(" \n");
    if (inverdensidade1 < inverdensidade2)
    {
        printf("Carta 1 - São Paulo (SP): %d\n", inverdensidade1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", inverdensidade2);
        printf("Carta 1 (São Paulo) venceu!");
    } else {
        printf("Carta 1 - São Paulo (SP): %d\n", inverdensidade1);
        printf("Carta 2 - Rio de Janeiro (RJ): %d\n", inverdensidade2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: PIB per capita):");
    printf(" \n");
    if (per>per2)
    {
        printf("Carta 1 - São Paulo (SP): %f\n", per);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", per2);
        printf("Carta 1 (São Paulo) venceu!");
    } else {
        printf("Carta 1 - São Paulo (SP): %f\n", per);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", per2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");

    }
    printf(" \n");
    printf("Comparação de cartas (Atributo: Super poder):");
    printf(" \n");
    if (superp1>superp2)
    {
        printf("Carta 1 - São Paulo (SP): %f\n", superp1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", superp2);
        printf("Carta 1 (São Paulo) venceu!");
    } else {
        printf("Carta 1 - São Paulo (SP): %f\n", superp1);
        printf("Carta 2 - Rio de Janeiro (RJ): %f\n", superp2);
        printf("Carta 2 (Rio de Janeiro) venceu!\n");

    }

return 0;
}