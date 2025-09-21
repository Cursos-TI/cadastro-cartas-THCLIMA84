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
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("!!!!!!!!  ATENÇÃO PARA AS REGRAS DO JOGO   !!!!!!!!\n");
printf("\n");
printf("*************** De Olho nas Regras *****************\n");
printf("\n");
printf("Digite o Estado de sua escolha... \n ");
  printf("Estado: "); 
    //linha de código para o usuário inserir o Estado
    printf("Estado: ", &Estado);
      printf(" - * após escolher o Estado, escolha uma lerta entre A e H que irá representar esse Estado, ex:. Bahia(B) \n");
        printf("\n");
printf("Código da Carta ");
  printf("ATENÇÃO!!, O código da carte deve conter a letra que irá representar o Estado seguida de um número, ex:. Estado= São Paulo_letra_A_Cod: A01; \n");
      //linha com código para usuário inserir o Código
      printf("Código: ", &Codigo);
        printf("\n");      
printf("Cidade");
  printf("escolha uma cidade pertencente ao Estado que escolheu anteriormente, ex:. Estado Bahia_cidade_Ilhéus;\n");
  //linha com código para usuário inserir a Cidade
  printf("Cidade")
    printf("\n");
printf("População: ");
  printf("insira a Populção aproximada da cidade escolhida anteriormente; \n");
  //linha com código para usuário inserir População
    printf("\n");
printf("Área: ");
  printf("insira um valor aproximado da densidade demgráfica da CIDADE escolhida anteriormente; \n");
  //linha com código para usuário inserir densidade demográfica
      printf("\n");
printf("PIB:");
  printf("insira um valor aproximado do PIB da CIDADE escolhida anteriormente; \n");
  //linha com código para usuário inserir PIB
    printf("\n");
printf("Pontos Turísticos:");
  printf("insira um valor aproximado dos pontos turísticos da CIDADE escolhida anteriormente; \n");
  //linha com código para usuário inserir PIB
    printf("\n");
  
  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
