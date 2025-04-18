#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char ESTADO [30], CODIGO [30], CAP [30];
    int populacao, point;
    float area, pib;
    char ESTADO2 [30], CODIGO2 [30], CAP2 [30];
    int populacao2, point2;
    float area2, pib2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
     //perguntas da carta 1
     printf("qual o estado? ");
     scanf(" %s", ESTADO);
     printf("qual o codigo? ");
     scanf(" %s", CODIGO);
     printf("qual a capital? ");
     scanf(" %s", CAP);
     printf("qual a população? ");
     scanf("%d", &populacao);
     printf("qual a área? ");
     scanf("%f", &area);
     printf("qual o PIB? ");
     scanf("%f", &pib);
     printf("quantos pontos turisticos? ");
     scanf("%d", &point);
     float denci, rendapercapita;
    denci = populacao/area;
    rendapercapita = pib/populacao;
     //pergutas da carta 2
     printf("qual o estado 2? ");
     scanf(" %s", ESTADO2);
     printf("qual o codigo? ");
     scanf(" %s", CODIGO2);
     printf("qual a capital? ");
     scanf(" %s", CAP2);
     printf("qual a população? ");
     scanf(" %d", &populacao2);
     printf("qual a área? ");
     scanf("%f", &area2);
     printf("qual o PIB? ");
     scanf("%f", &pib2);
     printf("quantos pontos turisticos? ");
     scanf("%d", &point2);
     float denci2, rendapercapita2;
    denci2 = populacao2/area2;
    rendapercapita2 = pib2/populacao2;
    long double powercad1 = populacao + area + pib + point + rendapercapita + denci, powercad2 =populacao2 + area2 + pib2 + point2 + rendapercapita2 + denci2;
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    int escolha;
    printf("\n*** escolha da comparação das cartas ***\n");
    printf("1. nome dos estados/países\n");
    printf("2. atributo da população\n");
    printf("3. atributo da área\n");
    printf("4. atributo do PIB\n");
    printf("5. atributo dos pontos turisticos\n");
    printf("6. atributo da dencidade populacional\n");
    printf("7. atributo da rendar per capita\n");
    printf("qual desses é sua escolha");
    scanf(" %d ", &escolha);


    switch (escolha)
    {
    case 1:int nome;
printf("1. primeira carta");
printf("2. segunda carta");
    printf("escolha qual nome da carta voce quer ver?");
scanf(" %d ", &nome);
    switch (nome)
    {
    case 1:
        printf("o nome do estado/país da primeira carta é: %s \n", ESTADO);
        break;
    case 2:
    printf("o nome do estado/país da segunda carta é: %s \n", ESTADO2);
    break;
    default:
    printf("opção invalida");
        break;
       }
        case 2:
        printf("\n compação dos atributos das cartas \n");
    printf("carta 1 - (%s) tem a população de: %d\n", ESTADO,populacao);
    printf("carta 2 - (%s) tem a população de: %d\n", ESTADO2,populacao2);
    if(populacao>populacao2) {
    printf("\ncarta 1 - (%s) venceu\n", ESTADO);
    } else{
    printf("\ncarta 2 - (%s) venceu\n", ESTADO2);
    }
       break;
    
    default:
        break;
    }


    printf("\n compação dos atributos das cartas \n");
    printf("carta 1 - (%s) tem a população de: %d\n", ESTADO,populacao);
    printf("carta 2 - (%s) tem a população de: %d\n", ESTADO2,populacao2);
    if(populacao>populacao2) {
    printf("\ncarta 1 - (%s) venceu\n", ESTADO);
    } else{
    printf("\ncarta 2 - (%s) venceu\n", ESTADO2);
    }
    return 0;
}
