#include <stdio.h>

int main(){

char estado1[50], estado2[50], nome_da_cidade1[50], nome_da_cidade2[50], codigo_carta2[50], codigo_carta1[50];
int populacao2, populacao1, n_pontosturisticos1, n_pontosturisticos2;
float  area1, area2, pib1, pib2, densidade, per, densidade2, per2;


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
        printf("Número de pontos turísticos: %d \n ", n_pontosturisticos2);
        printf("Densidade Populacional: %.2f ", densidade2);
        printf(" hab/Km² \n");
        printf("PIB per Capita: %.2f", per2);
        printf(" reais \n");

// comparação das cartas:

    float superp1,superp2, inverdensidade1, inverdensidade2;

// calculo densidade inverso;


    inverdensidade1=  1/densidade;
    inverdensidade2 =  1/densidade2;

// calculo super poder:

    superp1 = populacao1+area1+pib1+n_pontosturisticos1+per+inverdensidade1;

    superp2 = populacao2+area2+pib2+n_pontosturisticos2+per2+inverdensidade2;

// comparar:

    int venceu_carta1 = (populacao1 > populacao2);
    int venceu_carta2 = (populacao2 > populacao1);
    int venceu_area1 = (area1>area2);
    int venceu_area2 = (area2>area1);
    int venceu_pib1 = (pib1>pib2);
    int venceu_pib2 = (pib2>pib1);
    int venceu_turis1 = (n_pontosturisticos1>n_pontosturisticos2);
    int venceu_turis2 = (n_pontosturisticos2>n_pontosturisticos1);
    int venceu_per1 = (per>per2);
    int venceu_per2 = (per2>per);
    int venceu_inverdensidade1 = (inverdensidade1>inverdensidade2);
    int venceu_inverdensidade2 = (inverdensidade2>inverdensidade1);
    int venceu_superp1 = (superp1>superp2);
    int venceu_superp2 = (superp2>superp1);

    // Exibir os valores das cartas

    // Exibir o resultado
    printf("População: %s\n", (populacao1 == populacao2) ? "Empate" : (venceu_carta1 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)"));
    printf("Área: %s\n", (area1 == area2) ? "Empate" : (venceu_area1 ? "Carta 1 venceu(1)" : "Carta 2 venceu (0)"));
    printf("Pib: %s\n", (pib1 == pib2) ? "Empate" : (venceu_pib1 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)"));
    printf("Pontos Turisticos: %s\n", (n_pontosturisticos1 == n_pontosturisticos2) ? "Empate" : (venceu_turis1 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)"));
    printf("Pib per capita: %s\n", (per == per2) ? "Empate" : (venceu_per1 ? "Carta 1 venceu" : "Carta 2 venceu"));
    printf("Densidade: %s\n", (inverdensidade1 == inverdensidade2) ? "Empate" : (venceu_inverdensidade1 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)"));
    printf("Super poder: %s\n", (superp1 == superp2) ? "Empate" : (venceu_superp1 ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)"));


    return 0;
}