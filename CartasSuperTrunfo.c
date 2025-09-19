#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int População;
    char Estado;
    char Codigo;
    char Cidade[20];
    float Area;
    float PIB;
    int Turismo;

printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("*****Olá, você está no SUPER TRUNFO - Países!******\n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("!!!!!!!!  ATENÇÃO PARA AS REGRAS DO JOGO   !!!!!!!!\n");
printf(" De Olho nas Regras!! \n");
printf("...");
printf("Você deverá fornecer as seguintes informações: \n");
printf("\n");
  printf("Estado");  
    printf("Você deve escolher um Estado:... \n ");
      printf("...após escolher o Estado, escolha uma lerta entre A e H que irá representar esse Estado, ex:. Bahia(B) \n");
      printf("\n");
  printf("Código da Carta: ");
    printf("ATENÇÃO!!, O código da carte deve conter a letra que irá representar o Estado seguida de um número, ex:. Estado Bahia_letra_B_Cod: B01; \n");
    printf("\n");
  printf("CIDADE: ");
    printf("escolha uma cidade pertencente ao Estado que escolheu anteriormente, ex:. Estado Bahia_cidade_Ilhéus;\n");
    printf("\n");
  printf("POPULAÇÃO: ");
    printf("insira Populção aproximada da cidade escolhida anteriormente; \n");
    printf("\n");
  printf("ÁREA: ");
    printf("insira um valor aproximado da densidade demgráfica da CIDADE escolhida anteriormente; \n");
    printf("\n");
  printf("PIB:");
    printf("insira um valor aproximado do PIB da CIDADE escolhida anteriormente; \n");
    printf("\n");
  printf("NÚMERO DE PONTOS TURÍSTICOS:");
                printf("deve conter um valor aproximado dos pontos turísticos da CIDADE escolhida anteriormente; \n");
                    printf("\n");
  
  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
