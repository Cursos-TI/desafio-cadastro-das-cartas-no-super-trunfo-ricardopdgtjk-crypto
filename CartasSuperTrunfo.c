#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    

  // Primeira carta

  char estado;

  char codigo_da_carta[10];

  char nome_da_cidade[30];

  int populacao;

  float area;

  float produto_interno_bruto;
 
  int numero_de_pontos_turisticos;

  float densidade_populacional;

  float pib_per_capita;



   

  // Segunda carta

  char estado2;

  char codigo_da_carta2[10];

  char nome_da_cidade2[30];

  int populacao2;

  float area2;

  float produto_interno_bruto2;

  int numero_de_pontos_turisticos2;

  float densidade_populacional2;

  float pib_per_capita2;

 

 




  printf("Super Trunfo\n");

 

  //Dados da primeira carta

  printf("Carta 1\n");

  printf("Forneça uma letra de 'A' a 'H' para o estado:\n");

  scanf(" %c", &estado);

  printf("Forneça o código da carta (01 ate 04):\n");

  scanf("%s", &codigo_da_carta);

  printf("Forneça o nome da cidade:\n");

  scanf(" %s", &nome_da_cidade);

  printf("Forneça a população da cidade:\n");

  scanf("%d", &populacao);

  printf("Forneça a área da cidade (em km²):\n");

  scanf("%f", &area);

  printf("Forneça o PIB da cidade (em R$):\n");

  scanf("%f", &produto_interno_bruto);

  printf("Forneça o número de pontos turísticos da cidade:\n");

  scanf("%d", &numero_de_pontos_turisticos);

  printf("Forneça a densidade populacional (em km²):\n");

  scanf("%f", &densidade_populacional);

  printf("Forneça o pib per capita (em R$):\n");

  scanf("%f", &pib_per_capita);

densidade_populacional = (float)populacao / area;


pib_per_capita = produto_interno_bruto / populacao;


printf("\n--- Resultados Calculados ---\n");

printf("A densidade populacional é: %.2f hab/km²\n", densidade_populacional);

printf("O PIB per capita é: R$ %.2f\n", pib_per_capita);
 


//Dados da segunda carta 

printf("Carta 2\n");



  printf("Forneça uma letra de 'A' a 'H' para o estado:\n");

  scanf(" %c", &estado2);

  printf("Forneça o código da carta (01 ate 04):\n");

  scanf("%s", &codigo_da_carta2);

  printf("Forneça o nome da cidade:\n");

  scanf(" %s", &nome_da_cidade2);

  printf("Forneça a população da cidade:\n");

  scanf("%d", &populacao2);

  printf("Forneça a área da cidade (em km²):\n");

  scanf("%f", &area2);

  printf("Forneça o PIB da cidade (em R$):\n");

  scanf("%f", &produto_interno_bruto2);

  printf("Forneça o número de pontos turísticos da cidade:\n");

  scanf("%d", &numero_de_pontos_turisticos2);

  printf("Forneça a densidade populacional (em km²):\n");
  scanf("%f", &densidade_populacional2);

  printf("Forneça o pib per capita (em R$):\n");
  scanf("%f", &pib_per_capita2);

 densidade_populacional2 = (float)populacao2 / area2;

pib_per_capita = produto_interno_bruto2 / populacao2;

printf("\n--- Resultados Calculados ---\n");

printf("A densidade populacional é: %.2f hab/km²\n", densidade_populacional2);

printf("O PIB per capita é: R$ %.2f\n", pib_per_capita2);

//Agora vamos comparar as cartas atributo por atributo, seguindo as suas regras.
// Para a densidade populacional, a carta com o menor valor vence.
//Para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
//Para verdadeiro (primeira carta vence), 0 para falso (segunda carta vence ou empate).






  return 0;

}
