#include <stdio.h>
//carta num 1
int main() {
   char estado[3], codigo[4], cidade[40];
    int habitantes, pontoturisticos;
    float area, pib;


//carta num 2
    char estado2[3], codigo2[4], cidade2[40];
    int habitantes2, pontoturisticos2;
    float area2, pib2;

    //entrada carta numero 1

    printf("Coloque os dados da primeira carta: \n");
    
    printf("Estado(ex: BH): \n");
    scanf("%2s", estado);
    
    printf("Digite o codigo da carta (ex:P03): \n");
    scanf("%3s", codigo);

    printf("O nome da cidade: \n");
    scanf("%s", cidade);

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &habitantes);

    printf("Área(em km²): \n");
    scanf("%3f", &area);

    printf("PIB: \n");
    scanf("%3f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontoturisticos);
    printf("\n");
 
    //entrada carta numero 2

    printf("Coloque os dados da segunda carta: \n");

    printf("Estado(ex: BH): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%3s", codigo2);

    printf("O nome da cidade: \n");
    scanf("%s", cidade2);

    printf("O número de habitantes: \n");
    scanf("%d", &habitantes2);

    printf("Área (em km²): \n");
    scanf("%3f", &area2);

    printf("PIB: \n");
    scanf("%3f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontoturisticos2);

    printf("\n");

    //exibiçao carta 1

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("O número de habitantes: %d\n", habitantes);
    printf("Área (em km²): %3f\n", area);
    printf("PIB: %3f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontoturisticos);

    printf("\n");

    // exibição carta 2 

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("O número de habitantes: %d\n", habitantes2);
    printf("Área (em km²): %3f\n", area2);
    printf("PIB: %3f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturisticos2);
    return 0;

}
