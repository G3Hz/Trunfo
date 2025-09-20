#include <stdio.h>

int main() {
    // DEFINIÇÃO DE VARIÁVEIS CARTA NUM 1
    char estado[3], codigo[4], cidade[40];
    int pontoturisticos;
    float area, pib, densidade, percapita, superPoder;
    unsigned long int habitantes;

    // DEFINIÇÃO DE VARIÁVEIS CARTA NUM 2
    char estado2[3], codigo2[4], cidade2[40];
    int pontoturisticos2;
    float area2, pib2, densidade2, percapita2, superPoder2;
    unsigned long int habitantes2;

    // ENTRADA DE DADOS NA CARTA NUM 1
    printf("Coloque os dados da primeira carta:\n");

    printf("Estado (ex: PA): ");
    scanf("%2s", estado);

    printf("Código da carta (ex: P03): ");
    scanf("%3s", codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);  // lê até o enter

    printf("Número de habitantes: ");
    scanf("%d", &habitantes);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos);

 // CALCULO CARTA NUM 1 (DENSIDADE, PER CAPITA E SUPER PODER)
    densidade = habitantes / area; // forçando formato de numero flutuante 
    percapita = pib / habitantes;
    superPoder = (float)habitantes + area + pib + pontoturisticos + percapita + (1.0f / densidade);

    printf("\n");

    // ENTRADA DE DADOS CARTA NUM 2
    printf("Coloque os dados da segunda carta:\n");

    printf("Estado (ex: BH): ");
    scanf("%2s", estado2);

    printf("Código da carta (ex: P03): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Número de habitantes: ");
    scanf("%d", &habitantes2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // CALCULO CARTA NUM 2
    densidade2 = habitantes2 / area2; // forçando formato de numero flutuante 
    percapita2 = pib2 / habitantes2;
    superPoder2 = (float)habitantes2 + area2 + pib2 + pontoturisticos2 + percapita2 + (1.0f / densidade2);

    printf("\n");

    // EXIBIÇÃO DA CARTA NUM 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Número de habitantes: %d\n", habitantes);
    printf("Área (em km²): %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontoturisticos);
    printf("Densidade populacional: %.5f hab/km²\n", densidade);
    printf("Renda per capita: %.2f\n", percapita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\n");

    // EXIBIÇÃO CARTA NUM 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Número de habitantes: %d\n", habitantes2);
    printf("Área (em km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturisticos2);
    printf("Densidade populacional: %.5f hab/km²\n", densidade2);
    printf("Renda per capita: %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    printf("\n");

    // COMPARAÇÃO DAS CARTAS
    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu\n", (habitantes > habitantes2) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontoturisticos > pontoturisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade < densidade2) ? 1 : 2); // menor vence
    printf("PIB per Capita: Carta %d venceu\n", (percapita > percapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superPoder > superPoder2) ? 1 : 2);

    return 0;
}