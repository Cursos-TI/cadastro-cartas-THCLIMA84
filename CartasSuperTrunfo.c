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
    float Área;
    float PIB;
    int PTurísmo;

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*****Olá, você está no SUPER TRUNFO - Países!******\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("!!!!!!!!  ATENÇÃO PARA AS REGRAS DO JOGO   !!!!!!!!\n");
    printf("\n");
    printf("*************** De Olho Nas Regras *****************\n");
    printf("\n");
    printf("Digite um Estado de sua Escolha");
      scanf("%s", &Estado);
      printf("Estado: %s", &Estado);
      printf(" - * Após escolher o Estado, escolha uma lerta entre A e H que irá representar esse Estado, ex:. Bahia(B) \n");
      printf("\n");
    printf("Código da Carta ");
      printf("ATENÇÃO!!, O código da carta deve conter a letra que irá representar o Estado seguida de um número, ex. 1: Estado= São Paulo_letra_A_Código: A01; ex. 2: Bahia_letra_B_Código: B1 \n");
      printf("Código: ", &Codigo);
        //linha com código para usuário inserir o Código
          printf("\n");      
    printf("Cidade");
      printf("Escolha uma cidade pertencente ao Estado que escolheu anteriormente, ex:. Estado Bahia_cidade_Ilhéus;\n");
      printf("Cidade", &Cidade);
        //linha com código para usuário inseri a Cidade
          printf("\n");
  printf("População");
    printf("Insira a Populção aproximada da cidade escolhida anteriormente; \n");
      printf("População)", &População);
        //linha com código para usuário inserir População
          printf("\n");
printf("Área ");
  printf("insira um valor aproximado da densidade demgráfica da CIDADE escolhida anteriormente; \n");
    printf("Área: ", &Área);  
      //linha com código para usuário inserir densidade demográfica
        printf("\n");
printf("PIB:");
  printf("insira um valor aproximado do PIB da CIDADE escolhida anteriormente; \n");
    printf("PIB: ", &PIB);
      //linha com código para usuário inserir PIB
        printf("\n");
printf("Pontos Turísticos:");
  printf("insira um valor aproximado dos pontos turísticos da CIDADE escolhida anteriormente; \n");
    printf("Pontos Turísticos: ", &PTurísmo);  
      //linha com código para usuário inserir PIB
        printf("\n");
  
  
  // Área para exibição dos dados da cidade
  return 0;
}
