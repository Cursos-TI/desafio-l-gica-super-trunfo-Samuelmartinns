#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char ESTADO [30], CODIGO [30], CAP [30];
    int populacao = 220, point=24;
    float area= 39.9, pib=30.8 ;
    char ESTADO2 [30] , CODIGO2 [30] , CAP2 [30] ;
    int populacao2 =200 , point2= 30 ;
    float area2 = 20.2, pib2 = 300.3;
    int nome;
    int resultado, resultado2;

    

    // perguntas da carta 1


     //printf("qual o estado? ");
     //scanf(" %s", ESTADO);
     //printf("qual o codigo? ");
     //scanf(" %s", CODIGO);
     //printf("qual a capital? ");
     //scanf(" %s", CAP);
     //printf("qual a população? ");
     //scanf("%d", &populacao);
     //printf("qual a área? ");
     //scanf("%f", &area);
     //printf("qual o PIB? ");
     //scanf("%f", &pib);
     //printf("quantos pontos turisticos? ");
     //scanf("%d", &point);
     float denci, rendapercapita;
   denci = populacao/area;
rendapercapita = pib/populacao;


     //pergutas da carta 2


     //printf("qual o estado 2? ");
     //scanf(" %s", ESTADO2);
     //printf("qual o codigo? ");
     //scanf(" %s", CODIGO2);
     //printf("qual a capital? ");
     //scanf(" %s", CAP2);
     //printf("qual a população? ");
     //scanf(" %d", &populacao2);
     //printf("qual a área? ");
     //scanf("%f", &area2);
     //printf("qual o PIB? ");
     //scanf("%f", &pib2);
     //printf("quantos pontos turisticos? ");
     //scanf("%d", &point2);
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
    printf("8. atributo do power que é o poder total\n");
    printf("qual desses é sua escolha? ");
    scanf("%d", &escolha);
    
switch (escolha)
{
case 1:
printf("\n1. carta 1\n");
printf("2. carta 2\n");
printf("escolha qual carta você deseja ver\n");
scanf("%d", &nome);
if (nome ==1){
    printf("nome da carta 1: %s \n o codigo: %s \n a capital: %s\n", ESTADO, CODIGO,CAP);
}else if (nome == 2) {
    printf("nome da carta 2: %s \n o codigo: %s \n a capital: %s\n", ESTADO2, CODIGO2,CAP2);
}else {
    printf("opção invalida");
}

    
    break;
case 2:
printf("população da carta 1: %d\n de pessoas", populacao);
printf("população da carta 2: %d\n de pessoas", populacao2);
    if (populacao>populacao2){
        printf("a carta 1 ganhou");
    } else if (populacao<populacao2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    break;
case 3:
printf("a area da carta 1: %.2f\n", area);
printf("a area da carta 2: %.2f\n", area2);
    if (area>area2){
        printf("a carta 1 ganhou");
    } else if (area<area2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    
    break;
case 4:
printf("PIB da carta 1: %.2f\n", pib);
printf("PIB da carta 2: %.2f\n", pib2);
    if (pib>pib2){
        printf("a carta 1 ganhou");
    } else if (pib<pib2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    
    break;
case 5:
printf("pontos turisticos da carta 1: %d\n", point);
printf("pontos turisticos da carta 2: %d\n", point2);
    if (point>point2){
        printf("a carta 1 ganhou");
    } else if (point<point2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    
    break;
case 6:
printf("dencidade populacional da carta 1: %.2f\n", denci);
printf("dencidade populacional da carta 2: %.2f\n", denci2);
    if (denci<denci2){
        printf("a carta 1 ganhou");
    } else if (denci>denci2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    
    break;
case 7:
printf("renda per capita da carta 1: %.2f\n", rendapercapita);
printf("renda per capita da carta 2: %.2f\n", rendapercapita2);
    if (rendapercapita>rendapercapita2){
        printf("a carta 1 ganhou");
    } else if (rendapercapita<rendapercapita2){
        printf("a carta 2 ganhou");
    }else{
        printf("empate");
    }
    
    break;
    case 8:
    printf("power da carta 1: %.2lf\n", powercad1);
    printf("power da carta 2: %.2lf\n", powercad2);
        if (powercad1>powercad2){
            printf("a carta 1 ganhou");
        } else if (powercad1<powercad2){
            printf("a carta 2 ganhou");
        }else{
            printf("empate");
        }
        break;
default:
printf("opção invalida");
    break;
}
// ultimo desafio


printf("\n*** ecolha um atributo como primeiro***\n");
printf("1. atributo da população\n");
printf("2. atributo da área\n");
printf("3. atributo do PIB\n");
printf("4. atributo dos pontos turisticos\n");
printf("5. atributo da dencidade populacional\n");
printf("6. atributo da rendar per capita\n");
printf("7. atributo do power que é o poder total\n");
printf("qual desses é sua escolha? ");
scanf("%d", &resultado);
switch (resultado)
{


case 1:
printf("a area da carta 1: %.2f\n", area);
printf("a area da carta 2: %.2f\n", area2);
    resultado= (area>area2) ? 1:0;
    
    break;
   case 2:
    printf("a area da carta 1: %.2f\n", area);
printf("a area da carta 2: %.2f\n", area2);
    resultado =(area>area2) ? 1:0;
   
case 3:
printf("PIB da carta 1: %.2f\n", pib);
printf("PIB da carta 2: %.2f\n", pib2);
    resultado=(pib>pib2)  ? 1:0;
    break;
case 4:
printf("pontos turisticos da carta 1: %d\n", point);
printf("pontos turisticos da carta 2: %d\n", point2);
    resultado = (point>point2) ? 1:0;
    break;
case 5:
printf("dencidade populacional da carta 1: %.2f\n", denci);
printf("dencidade populacional da carta 2: %.2f\n", denci2);
    resultado =(denci<denci2) ? 1:0;
    break;
case 6:
printf("renda per capita da carta 1: %.2f\n", rendapercapita);
printf("renda per capita da carta 2: %.2f\n", rendapercapita2);
    resultado=(rendapercapita>rendapercapita2) ? 1:0;
    break;
    case 7:
    printf("power da carta 1: %.2lf\n", powercad1);
    printf("power da carta 2: %.2lf\n", powercad2);
        resultado=(powercad1>powercad2) ? 1:0;
            
        break;
default:
printf("opção invalida");
    break;


    printf("\n*** ecolha um atributo como segundo***\n");
printf("1. atributo da população\n");
printf("2. atributo da área\n");
printf("3. atributo do PIB\n");
printf("4. atributo dos pontos turisticos\n");
printf("5. atributo da dencidade populacional\n");
printf("6. atributo da rendar per capita\n");
printf("7. atributo do power que é o poder total\n");
printf("qual desses é sua escolha? ");
scanf("%d", &resultado2);
switch (resultado2)
{


case 1:
printf("a area da carta 1: %.2f\n", area);
printf("a area da carta 2: %.2f\n", area2);
    resultado2= (area>area2) ? 1:0;
    
    break;
   case 2:
    printf("a area da carta 1: %.2f\n", area);
printf("a area da carta 2: %.2f\n", area2);
    resultado2 =(area>area2) ? 1:0;
   
case 3:
printf("PIB da carta 1: %.2f\n", pib);
printf("PIB da carta 2: %.2f\n", pib2);
    resultado2=(pib>pib2)  ? 1:0;
    break;
case 4:
printf("pontos turisticos da carta 1: %d\n", point);
printf("pontos turisticos da carta 2: %d\n", point2);
    resultado2 = (point>point2) ? 1:0;
    break;
case 5:
printf("dencidade populacional da carta 1: %.2f\n", denci);
printf("dencidade populacional da carta 2: %.2f\n", denci2);
    resultado2 =(denci<denci2) ? 1:0;
    break;
case 6:
printf("renda per capita da carta 1: %.2f\n", rendapercapita);
printf("renda per capita da carta 2: %.2f\n", rendapercapita2);
    resultado2=(rendapercapita>rendapercapita2) ? 1:0;
    break;
    case 7:
    printf("power da carta 1: %.2lf\n", powercad1);
    printf("power da carta 2: %.2lf\n", powercad2);
        resultado2=(powercad1>powercad2) ? 1:0;
            
        break;
default:
printf("opção invalida");
    break;
    if (resultado && resultado2){
        printf("parabens, você ganhou nos dois atributos");
    } else if (resultado != resultado2){
        printf("você empatou");
    } else {
        printf("infelizmente, você perdeu nos dois atributos");
    }
    return 0;
}