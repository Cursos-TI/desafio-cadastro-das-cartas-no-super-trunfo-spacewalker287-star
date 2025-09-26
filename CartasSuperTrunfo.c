#include <stdio.h>

struct Carta

{
    

    char Estado[50];
    char Codigo[50];
    char NomeDaCidade[50];
    int Populacao;
    int AreaEmkm2; //Substituir em km²
    int PIBEmBilhoes;
    int NumeroDePontosTuristicos;
    float DensidadePopulacional;
    float PIBPerCapta;
    
};

     int main() { 
     struct Carta Carta1, Carta2;
     
    printf("\n=== Cadastro da primeira carta ===\n");


    printf("Estado: ");
    scanf(" %s", Carta1.Estado);

    printf("Código: ");
    scanf(" %s", Carta1.Codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Carta1.NomeDaCidade);

    printf("População: ");
    scanf(" %d", &Carta1.Populacao);

    printf("Área em km2: ");
    scanf(" %d", &Carta1.AreaEmkm2);

    printf("PIB em bilhões: ");
    scanf(" %d", &Carta1.PIBEmBilhoes);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &Carta1.NumeroDePontosTuristicos);

    printf("Densidade Populacional: ");
    scanf(" %f", &Carta1.DensidadePopulacional);

    printf("PIB Per Capta: ");
    scanf(" %f", &Carta1.PIBPerCapta);

    printf("\n=== Carta cadastrada ===\n");

    printf("Estado: %s\n", Carta1.Estado);
    printf("Código: %s\n", Carta1.Codigo);
    printf("Nome da cidade: %s\n", Carta1.NomeDaCidade);
    printf("População: %d\n", Carta1.Populacao);
    printf("Área em km²: %d\n", Carta1.AreaEmkm2);
    printf("PIB em bilhões: %d\n", Carta1.PIBEmBilhoes);
    printf("Número de pontos turísticos: %d\n", Carta1.NumeroDePontosTuristicos);
    printf("Densidade Populacional: %f\n", Carta1.DensidadePopulacional);
    printf("PIB Per Capta: %f\n", Carta1.PIBPerCapta);


    printf("\n=== Cadastro da segunda carta ===\n");
     
    printf("Estado: ");
    scanf(" %s", Carta2.Estado);

    printf("Código: ");
    scanf(" %s", Carta2.Codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", Carta2.NomeDaCidade);

    printf("População: ");
    scanf(" %d", &Carta2.Populacao);

    printf("Área em km²: ");
    scanf(" %d", &Carta2.AreaEmkm2);

    printf("PIB em bilhões: ");
    scanf(" %d", &Carta2.PIBEmBilhoes);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &Carta2.NumeroDePontosTuristicos);

    printf("Densidade Populacional: ");
    scanf(" %f", &Carta2.DensidadePopulacional);

    printf("PIB Per Capta: ");
    scanf(" %f", &Carta2.PIBPerCapta);

    printf("\n=== Carta cadastrada ===\n");

    printf("Estado: %s\n", Carta2.Estado);
    printf("Código: %s\n", Carta2.Codigo);
    printf("Nome da cidade: %s\n", Carta2.NomeDaCidade);
    printf("População: %d\n", Carta2.Populacao);
    printf("Área em km²: %d\n", Carta2.AreaEmkm2);
    printf("PIB em bilhões: %d\n", Carta2.PIBEmBilhoes);
    printf("Número de pontos turísticos: %d\n", Carta2.NumeroDePontosTuristicos);
    printf("Densidade Populacional: %f\n", Carta2.DensidadePopulacional);
    printf("PIB Per Capta: %f\n", Carta2.PIBPerCapta);

    printf("\n === Cartas cadastradas com sucesso === \n");




    
     



    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel 2, variavel 3) (sintaxe básica)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão.
    %.2f: Imprime um número de ponto flutuante no formato normal.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    %f: no printf para double %lf: no scanf para double*/

    /*scanf("formato1, formato2, &variavel1, &variavel2"); (sintaxe scanf)*/

    return 0;

}