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

// Comparação

// Entrada 1 escolha:
    int escolha_1, resultado_1;

    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB Per Capita\n");
    printf("5. Densidade\n");
    printf("6. Pontos turisticos\n");
    printf("Digite a primeira opção:");
    scanf("%d", &escolha_1);
    printf("\n");

    switch (escolha_1)
    {

    case 1:
        printf("Você escolheu a opção População!!!\n");
        resultado_1 = populacao1>populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção Área!!!\n");
        resultado_1 = area1>area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção PIB!!!\n");
        resultado_1 = pib1>pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção PIB Per Capita!!!\n");
        resultado_1 = per>per2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção Densidade!!!\n");
        resultado_1 = densidade<densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu a opção Numeros de Pontos Turisticos!!!\n");
        resultado_1 = n_pontosturisticos1>n_pontosturisticos2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida");
        break;
    }


// Entrada 2 escolha:
int escolha_2, resultado_2;
printf("\n");
printf("Escolha o segundo atributo(Não pode ser o mesmo do primeiro atributo):\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. PIB Per Capita\n");
printf("5. Densidade\n");
printf("6. Pontos turisticos\n");
printf("Digite a opção:");
scanf("%d", &escolha_2);
printf("\n");

    if (escolha_1 == escolha_2)
    {
        printf("Você escolheu o mesmo atributo\n");
    } else{
        switch (escolha_2)
        {
        case 1:
            printf("Você escolheu a opção População!!! \n");
            resultado_2 = populacao1> populacao2 ? 1:0;
            break;
        case 2:
            printf("Você escolheu a opção Área!!!\n");
            resultado_2 = area1> area2? 1:0;
            break;
        case 3:
            printf("Você escolheu a opção PIB!!!\n");
            resultado_2 = pib1> pib2 ? 1:0;
            break;
        case 4:
            printf("Você escolheu a opção Pib per capita!!!\n");
            resultado_2 = per> per2 ? 1:0;
            break;
        case 5:
            printf("Você escolheu a opção Densidade!!!\n");
            resultado_2 = densidade< densidade2 ? 1:0;
            break;
        case 6:
            printf("Você escolheu a opção Números de Pontos Turísticos!!!\n");
            resultado_2 = populacao1> populacao2 ? 1:0;
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
        
        printf("\n");
        printf("Resultado");
        printf("\n");
        if (resultado_1 && resultado_2 )
        {
            printf("Estados:\n");
            printf("%c \n", estado1);
            printf("%c \n", estado2);
            printf("Atributos escolhidos:\n");
            printf("%d \n", escolha_1);
            printf("%d\n", escolha_2);
            printf("Valores dos atributos:\n");
            printf("Primeiro atributo: ");
            printf("%d\n", resultado_1);
            printf("Segundo atributo: ");
            printf("%d\n", resultado_2);
            printf("Parabéns! você ganhou");
        } else if (resultado_1 != resultado_2)
        {
            printf("Estados:\n");
            printf("%c \n", estado1);
            printf("%c \n", estado2);
            printf("Atributos escolhidos:\n");
            printf("%d \n", escolha_1);
            printf("%d\n", escolha_2);
            printf("Valores dos atributos\n");
            printf("Primeiro atributo: ");
            printf("%d\n", resultado_1);
            printf("Segundo atributo: ");
            printf("%d\n", resultado_2);
            printf("Você empatou");
        } else
        {
            printf("Estados:\n");
            printf("%c \n", estado1);
            printf("%c \n", estado2);
            printf("Atributos escolhidos:\n");
            printf("%d \n", escolha_1);
            printf("%d\n", escolha_2);
            printf("Valores dos atributos:\n");
            printf("Primeiro atributo: ");
            printf("%d\n", resultado_1);
            printf("Segundo atributo: ");
            printf("%d\n", resultado_2);
            printf("Que pena, você perdeu :(");
        }
        
        
        {
            
        }
        
        
    }    

    return 0;
}