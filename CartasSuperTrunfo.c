#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int População, População2;
    char Estado[20], Estado2[20];
    char Código[20], Código2[20];
    char Cidade[20], Cidade2[20];
    float Área, Área2;
    float PIB, PIB2;
    int PTurístico, PTurístico2;

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
              printf("Código: %s \n", &Código);
                printf("\n");      
    printf("Cidade \n");
      printf("Escolha uma cidade pertencente ao Estado que escolheu anteriormente, ex:. Estado Bahia_cidade_Ilhéus; \n");
        printf("Digite a Cidade: ");
          scanf("%s", &Cidade);
              printf("Cidade: %s \n", &Cidade);
                Cidade[20] = &Cidade;
                    printf("\n");
    printf("População \n");
      printf("Insira a Populção aproximada da cidade escolhida anteriormente; \n");
        printf("Digite a População: ");
          scanf("%d", &População);
            printf("População: %d \n", População);    
              População = População;    
                printf("\n");
    printf("Área \n");
      printf("insira um valor aproximado da densidade demgráfica da CIDADE escolhida anteriormente; \n");
        scanf("%f" , &Área);
          printf("Área: %f \n", Área);      
            printf("\n");
    printf("PIB \n");
      printf("insira um valor aproximado do PIB da CIDADE escolhida anteriormente; \n");
        scanf("%f", &PIB);
          printf("PIB: %f \n", PIB);
            printf("\n");
    printf("Pontos Turísticos \n");
      printf("insira um valor aproximado dos pontos turísticos da CIDADE escolhida anteriormente; \n");
        scanf("%d", &PTurístico);
          printf("Pontos Turísticos: %d \n", PTurístico);
            printf("\n");
              printf("\n");
                printf("\n");
    printf("lendo dados... \n");
      printf("\n");
        printf("carrregando Carta 1. \n");
          printf("\n");
            printf("carregando... \n");
              printf("\n");
                printf("Carta 1 carregada com sucesso \n");
                  printf("\n");
    printf("Digite os dados da Carta 2 \n");  
      printf("Estado: %s", &Estado2 );
        scanf("%s", &Estado2);
          printf("\n");
    printf("Código da Carta: ");
      scanf("%s", &Código2);
        printf("Código: %s \n", Código2);
          printf("\n");
    printf("Cidade: ");
      scanf("%s", &Cidade2);
        printf("\n");
    printf("População: ");
      scanf("%d", &População2);
        printf("\n");
    printf("Área: ");
      scanf("%d", &Área2);
        printf("\n");
    printf("PIB: ");
      scanf("%d", &PIB2);
        printf("\n");
    printf("Pontos Turísticos: ");
      scanf("%d", &PTurístico2);
        printf("\n");
    printf("lendo dados... \n");
      printf("\n");
        printf("carrregando Carta 2 \n");
          printf("\n");
            printf("carregando... \n");
              printf("\n");
                printf("Carta 2 carregada com sucesso \n");
                  printf("\n");
    printf("Gerando Cartas... \n");
      printf("\n");
    printf("*CARTA 1* \n"); 
      printf("Estado: %s \n", Estado);
        printf("Código: %s \n", Código);
          printf("Cidade: %s \n", Cidade);
            printf("População: %d \n", População);
              printf("Área: %f \n", Área);
                printf("PIB: %f \n", PIB);
                  printf("Pontos Turísticos: %d \n", PTurístico);
                    printf("\n");



  
  
  // Área para exibição dos dados da cidade
  return 0;
}
