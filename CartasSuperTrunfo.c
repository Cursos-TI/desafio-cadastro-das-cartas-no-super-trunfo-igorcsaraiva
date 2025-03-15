#include <stdio.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

float CalcularDensidadePopulacional(int populacao, float area){
    return populacao/area;    
}

float CalcularPIBPerCapita(int populacao, float pib){
    return pib/populacao;
}

int main() {
    int numeroPontosTuristicos1, populacao1;
    int carta = 1;
    char codigo1[4], nomeCidade1[100];
    char estado1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;


    int numeroPontosTuristicos2, populacao2;
    char codigo2[4], nomeCidade2[100];
    char estado2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;
    
    printf("Informe o nome da cidade\n");
    fgets(nomeCidade1, 100, stdin);
    printf("Informe a populacao da cidade\n");
    scanf("%d",&populacao1);
    printf("Informe a area da cidade\n");
    scanf("%f",&area1);
    printf("Informe o PIB da cidade\n");
    scanf("%f",&pib1);
    printf("Informe o numero de pontos turisticos\n");
    scanf("%d",&numeroPontosTuristicos1);
    printf("Informe o codigo da carta\n");
    scanf("%s",&codigo1);
    printf("Informe o estado da carta\n");
    scanf(" %c",&estado1);
    flush_in();

    densidadePopulacional1 = CalcularDensidadePopulacional(populacao1, area1);
    pibPerCapita1 = CalcularPIBPerCapita(populacao1,pib1);

    
    printf("\n");
    printf("Carta: %d\n",carta);
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Nome da cidade: %s",nomeCidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %f\n",area1);
    printf("PIB: %f\n",pib1);
    printf("Numero pontos turisticos: %d\n",numeroPontosTuristicos1);
    printf("Densidade populacional: %f\n",densidadePopulacional1);
    printf("PIB per capita: %f\n",pibPerCapita1);
    printf("\n");

    printf("Informe o nome da cidade\n");
    fgets(nomeCidade2, 100, stdin);
    printf("Informe a populacao da cidade\n");
    scanf("%d",&populacao2);
    printf("Informe a area da cidade\n");
    scanf("%f",&area2);
    printf("Informe o PIB da cidade\n");
    scanf("%f",&pib2);
    printf("Informe o numero de pontos turisticos\n");
    scanf("%d",&numeroPontosTuristicos2);
    printf("Informe o estado da carta\n");
    scanf(" %c",&estado2);
    printf("Informe o codigo da carta\n");
    scanf("%s",&codigo2);

    densidadePopulacional2 = CalcularDensidadePopulacional(populacao2, area2);
    pibPerCapita2 = CalcularPIBPerCapita(populacao2,pib2);

    printf("\n");
    printf("Carta: %d\n",++carta);
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da cidade: %s",nomeCidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %f\n",area2);
    printf("PIB: %f\n",pib2);
    printf("Numero pontos turisticos: %d\n",numeroPontosTuristicos2);
    printf("Densidade populacional: %f\n",densidadePopulacional2);
    printf("PIB per capita: %f\n",pibPerCapita2);


    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s ( %c ): %d\n", nomeCidade1,estado1,populacao1);
    printf("Carta 2 - %s ( %c ): %d\n", nomeCidade2,estado2,populacao2);
    
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 ( %s ) venceu!", nomeCidade1);
        return 0;
    }
    printf("Resultado: Carta 2 ( %s ) venceu!", nomeCidade2);
    
    return 0;
}

