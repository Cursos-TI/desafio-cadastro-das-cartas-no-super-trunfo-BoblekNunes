#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigoCidade1, codigoCidade2;
    char nome1[50], nome2[50];
    unsigned long int populacao1,populacao2;
    float area1,area2;
    long long int pib1,pib2;
    unsigned int pontosTuristicos1,pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Por favor digite o nome da primeira Cidade: \n");
    scanf("%s", &nome1);
    printf("Por favor digite o código da primeira Cidade: \n");
    scanf("%d", &codigoCidade1);
    printf("Por favor digite a população geral da primeira Cidade: \n");
    scanf("%lu", &populacao1);
    printf("Por favor digite a área em m² da primeira Cidade: \n");
    scanf("%f", &area1);
    printf("Por favor digite o PIB da primeira Cidade: \n");
    scanf("%lld", &pib1);
    printf("Por favor digite quantos pontos turísticos tem na primeira Cidade: \n");
    scanf("%u", &pontosTuristicos1);

    printf("Por favor digite o nome da segunda Cidade: \n");
    scanf("%s", &nome2);
    printf("Por favor digite o código da segunda Cidade: \n");
    scanf("%d", &codigoCidade2);
    printf("Por favor digite a população geral da segunda Cidade: \n");
    scanf("%lu", &populacao2);
    printf("Por favor digite a área em m² da segunda Cidade: \n");
    scanf("%f", &area2);
    printf("Por favor digite o PIB da segunda Cidade: \n");
    scanf("%lld", &pib2);
    printf("Por favor digite quantos pontos turísticos tem na segunda Cidade: \n");
    scanf("%u", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    printf("\nInformações da primeira cidade:\n");
    printf("Nome: %s\n", nome1);
    printf("Código: %d\n", codigoCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f m²\n", area1);
    printf("PIB: %lld\n", pib1);
    printf("Pontos turísticos: %u\n", pontosTuristicos1);

    printf("\nInformações da segunda cidade:\n");
    printf("Nome: %s\n", nome2);
    printf("Código: %d\n", codigoCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("PIB: %lld\n", pib2);
    printf("Pontos turísticos: %u\n", pontosTuristicos2);

    printf("A população de %s é maior que a de %s? %d\n", nome1, nome2, (populacao1 > populacao2));
    printf("A área de %s é menor que a de %s? %d\n", nome1, nome2, (area1 < area2));
    printf("O PIB de %s é que o PIB de %s? %d\n", nome1, nome2, (pib1 == pib2));
    printf("Os pontos turísticos de %s diferente que os de %s? %d\n", nome1, nome2, (pontosTuristicos1 != pontosTuristicos2));

    
   

    return 0;
}
