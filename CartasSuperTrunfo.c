#include <stdio.h>

struct InfoCidade
{
    char estado[50];
    char codigo[50];
    char nome[50];
    unsigned long int populacao;
    int areaKm2;
    int pibBilhoes;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float forcaTotal;
};

float calcularForcaTotal(struct InfoCidade cidade) {
    return (float)cidade.populacao
           + cidade.areaKm2
           + cidade.pibBilhoes
           + cidade.pontosTuristicos
           + cidade.pibPerCapita
           + (1.0f / cidade.densidade);
}

int main() {
    struct InfoCidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("\n--- Cadastro Cidade 1 ---\n");
    printf("Estado: ");
    scanf(" %s", cidade1.estado);
    printf("Código: ");
    scanf(" %s", cidade1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("População: ");
    scanf(" %lu", &cidade1.populacao);
    printf("Área (km²): ");
    scanf(" %d", &cidade1.areaKm2);
    printf("PIB em bilhões: ");
    scanf(" %d", &cidade1.pibBilhoes);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &cidade1.pontosTuristicos);

    cidade1.densidade = (float)cidade1.populacao / cidade1.areaKm2;
    cidade1.pibPerCapita = ((float)cidade1.pibBilhoes * 1e9f) / cidade1.populacao;
    cidade1.forcaTotal = calcularForcaTotal(cidade1);

    // Cadastro da segunda cidade
    printf("\n--- Cadastro Cidade 2 ---\n");
    printf("Estado: ");
    scanf(" %s", cidade2.estado);
    printf("Código: ");
    scanf(" %s", cidade2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("População: ");
    scanf(" %lu", &cidade2.populacao);
    printf("Área (km²): ");
    scanf(" %d", &cidade2.areaKm2);
    printf("PIB em bilhões: ");
    scanf(" %d", &cidade2.pibBilhoes);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &cidade2.pontosTuristicos);

    cidade2.densidade = (float)cidade2.populacao / cidade2.areaKm2;
    cidade2.pibPerCapita = ((float)cidade2.pibBilhoes * 1e9f) / cidade2.populacao;
    cidade2.forcaTotal = calcularForcaTotal(cidade2);

    // Comparações
    printf("\n=== Resultados das Comparações ===\n");

    printf("População: Cidade %d venceu (%d)\n",
           cidade1.populacao > cidade2.populacao ? 1 : 2,
           cidade1.populacao > cidade2.populacao ? 1 : 0);

    printf("Área: Cidade %d venceu (%d)\n",
           cidade1.areaKm2 > cidade2.areaKm2 ? 1 : 2,
           cidade1.areaKm2 > cidade2.areaKm2 ? 1 : 0);

    printf("PIB: Cidade %d venceu (%d)\n",
           cidade1.pibBilhoes > cidade2.pibBilhoes ? 1 : 2,
           cidade1.pibBilhoes > cidade2.pibBilhoes ? 1 : 0);

    printf("Pontos Turísticos: Cidade %d venceu (%d)\n",
           cidade1.pontosTuristicos > cidade2.pontosTuristicos ? 1 : 2,
           cidade1.pontosTuristicos > cidade2.pontosTuristicos ? 1 : 0);

    printf("Densidade Populacional: Cidade %d venceu (%d)\n",
           cidade1.densidade < cidade2.densidade ? 1 : 2,
           cidade1.densidade < cidade2.densidade ? 1 : 0);

    printf("PIB per Capita: Cidade %d venceu (%d)\n",
           cidade1.pibPerCapita > cidade2.pibPerCapita ? 1 : 2,
           cidade1.pibPerCapita > cidade2.pibPerCapita ? 1 : 0);

    printf("Força Total: Cidade %d venceu (%d)\n",
           cidade1.forcaTotal > cidade2.forcaTotal ? 1 : 2,
           cidade1.forcaTotal > cidade2.forcaTotal ? 1 : 0);

    return 0;
}