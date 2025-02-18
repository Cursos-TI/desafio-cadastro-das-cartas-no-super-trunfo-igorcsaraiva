#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int numeroPontosTuristicos, populacao;
    int carta = 1;
    char codigo[4], nomeCidade[100];
    char estado;
    float area, pib;
    
    printf("Informe o nome da cidade\n");
    fgets(nomeCidade, 100, stdin);
    printf("Informe a populacao da cidade\n");
    scanf("%d",&populacao);
    printf("Informe a area da cidade\n");
    scanf("%f",&area);
    printf("Informe o PIB da cidade\n");
    scanf("%f",&pib);
    printf("Informe o numero de pontos turisticos\n");
    scanf("%d",&numeroPontosTuristicos);
    printf("Informe o codigo da carta\n");
    scanf("%s",&codigo);
    printf("Informe o estado da carta\n");
    scanf(" %c",&estado);
    flush_in();

    
    printf("\n");
    printf("Carta: %d\n",carta);
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo);
    printf("Nome da cidade: %s",nomeCidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %f\n",area);
    printf("PIB: %f\n",pib);
    printf("Numero pontos turisticos: %d\n",numeroPontosTuristicos);
    printf("\n");

    printf("Informe o nome da cidade\n");
    fgets(nomeCidade, 100, stdin);
    printf("Informe a populacao da cidade\n");
    scanf("%d",&populacao);
    printf("Informe a area da cidade\n");
    scanf("%f",&area);
    printf("Informe o PIB da cidade\n");
    scanf("%f",&pib);
    printf("Informe o numero de pontos turisticos\n");
    scanf("%d",&numeroPontosTuristicos);
    printf("Informe o estado da carta\n");
    scanf(" %c",&estado);
    printf("Informe o codigo da carta\n");
    scanf("%s",&codigo);

    printf("\n");
    printf("Carta: %d\n",++carta);
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo);
    printf("Nome da cidade: %s",nomeCidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %f\n",area);
    printf("PIB: %f\n",pib);
    printf("Numero pontos turisticos: %d\n",numeroPontosTuristicos);

    return 0;
}

