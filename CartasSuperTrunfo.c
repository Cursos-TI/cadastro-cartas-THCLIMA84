#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int População;
    char Estado;
    char Código[20];
    char Cidade[20];
    float Área;
    float PIB;
    int PTurístico;

    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*****Olá, você está no SUPER TRUNFO - Países!******\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("!!!!!!!!  ATENÇÃO PARA AS REGRAS DO JOGO   !!!!!!!!\n");
    printf("\n");
    printf("*************** De Olho Nas Regras *****************\n");
    printf("\n");
    printf("Para começarmos, digite um Estado de sua Escolha \n");
      scanf("%s", &Estado);
        printf("Estado: %s \n", &Estado );
          printf(" - * Após escolher o Estado, escolha uma lerta entre A e H que será Código da carta que irá representar esse Estado, ex:. Bahia(B) \n");
            printf("\n");
    printf("Código da Carta \n");
      printf("- *ATENÇÃO!!* \n");
        printf(" O código da carta deve conter a letra que irá representar o Estado seguida de um número, ex. 1: Estado= São Paulo_letra_A_Código: A01; ex. 2: Bahia_letra_B_Código: B1 \n");
          printf("\n");
          printf("Digite o Código da carta \n ");
            scanf("%s", &Código);
              printf("Código: %s \n ", &Código);                
                  Código[20] = &Código;
                    printf("\n");      
    printf("Cidade \n");
      printf("Escolha uma cidade pertencente ao Estado que escolheu anteriormente, ex:. Estado Bahia_cidade_Ilhéus;\n");
        printf("Digite a Cidade: ");
          scanf("%s ", &Cidade);              
            printf("\n");
    printf("População \n");
      printf("Insira a Populção aproximada da cidade escolhida anteriormente; \n");
        printf("Digite a População: ");
          scanf("%f", &População);
            printf("População)", &População);        
              printf("\n");
    printf("Área \n");
      printf("insira um valor aproximado da densidade demgráfica da CIDADE escolhida anteriormente; \n");
        scanf("%f" , &Área);
          printf("Área: %f", &Área);      
            printf("\n");
    printf("PIB \n");
      printf("insira um valor aproximado do PIB da CIDADE escolhida anteriormente; \n");
        scanf("%f", &PIB);
          printf("PIB: %f ", &PIB);      
            printf("\n");
    printf("Pontos Turísticos \n");
      printf("insira um valor aproximado dos pontos turísticos da CIDADE escolhida anteriormente; \n");
        scanf("%i", & PTurístico);
          printf("Pontos Turísticos: %i", &PTurístico); 
            printf("\n");
  
  
  // Área para exibição dos dados da cidade
  return 0;
}
