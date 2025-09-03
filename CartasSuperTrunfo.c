#include <stdio.h>

struct Carta

{
    
    char Cidade[50];
    int Populacao;
    int Area;
    float PIB;
    float NumeroDePontosTuristicos;
    
};

     int main() { 
     struct Carta Carta1, Carta2;
     
    printf("\n=== Cadastro da primeira carta ===\n");

    printf("Cidade: ");
    scanf(" %s", Carta1.Cidade);

    printf("População: ");
    scanf(" %d", &Carta1.Populacao);

    printf("Área: ");
    scanf(" %d", &Carta1.Area);

    printf("PIB: ");
    scanf(" %f", &Carta1.PIB);

    printf("Número de pontos turísticos: ");
    scanf(" %f", &Carta1.NumeroDePontosTuristicos);

    printf("\n=== Carta cadastrada ===\n");

    printf("Cidade: %s\n", Carta1.Cidade);
    printf("População: %d\n", Carta1.Populacao);
    printf("Área: %d\n", Carta1.Area);
    printf("PIB: %f\n", Carta1.PIB);
    printf("Número de pontos turísticos: %.2f\n", Carta1.NumeroDePontosTuristicos);

    printf("\n=== Cadastro da segunda carta ===\n");
     
    printf("Cidade: ");
    scanf(" %s", Carta2.Cidade);

    printf("População: ");
    scanf(" %d", &Carta2.Populacao);

    printf("Área: ");
    scanf(" %d", &Carta2.Area);

    printf("PIB: ");
    scanf(" %f", &Carta2.PIB);

    printf("Número de pontos turísticos: ");
    scanf(" %f", &Carta2.NumeroDePontosTuristicos);

    printf("\n=== Carta cadastrada ===\n");

    printf("Cidade: %s\n", Carta2.Cidade);
    printf("População: %d\n", Carta2.Populacao);
    printf("Área: %d\n", Carta2.Area);
    printf("PIB: %f\n", Carta2.PIB);
    printf("Número de pontos turísticos: %.2f\n", Carta2.NumeroDePontosTuristicos);

    printf("\n === Cartas cadastradas com sucesso === \n");




    
     



    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel 2, variavel 3) (sintaxe básica)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão.
    %.2f: Imprime um número de ponto flutuante no formato normal.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.*/

    /*scanf("formato1, formato2, &variavel1, &variavel2"); (sintaxe scanf)*/

    return 0;

};