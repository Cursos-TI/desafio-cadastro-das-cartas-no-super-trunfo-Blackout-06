#include <stdio.h>

int main() {
    printf("Super Trunfo de Thales - CARTA 01\n");

    char Letra;
    int Codigo;
    char Cidade;
    int Populacao;
    float Area;
    float PIB;

    printf("Digite a Letra: \n");
    scanf("%s", &Letra);
    printf("Digite o código: \n");
    scanf("%d", &Codigo);
    printf("Digite a Cidade: \n");
    scanf("%s", &Cidade);
    printf("Insira a população: \n");
    scanf("%d", &Populacao);
    printf("Insira a área: \n");
    scanf("%f", &Area);
    printf("Insira o PIB: \n");
    scanf("%f", &PIB);
    
    printf("Letra escolhida: %s\n", Letra);
    printf("Código da carta: %d\n", Codigo);
    printf("Cidade da carta: %s\n", Cidade);
    printf("População da Cidade: %d\n", Populacao);
    printf("Área da Cidade: %f\n", Area);
    printf("PIB da Cidade: %f\n", PIB);

    return 0;
}
