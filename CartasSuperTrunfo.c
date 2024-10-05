#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigoCidade;
    char[30] nome;
    unsigned long int populacao;
    float area;
    long long int pib;
    unsigned int pontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    scanf("Por favor digite o nome da Cidade: &%c\n", nome);
    scanf("Por favor digite o código da Cidade: &%d\n", codigoCidade);
    scanf("Por favor digite a população geral da Cidade: &%ld\n", populacao);
    scanf("Por favor digite a área em m² da Cidade: &%f\n", area);
    scanf("Por favor digite o PIB da Cidade: &%ld\n", pib);
    scanf("Por favor digite quantos pontos turísticos tem na Cidade: &%d\n", pontosTuristicos);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
