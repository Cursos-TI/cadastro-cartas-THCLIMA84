#include <stdio.h>

// Desafio Super Trunfo - Países - teste aula guanabara
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Variáveis da Carta 1
    int Populacao, PTuristico;
    char Estado[20], Codigo[20], Cidade[20];
    float Area, PIB, Densidade1, PIBpercapita1;

    // Variáveis da Carta 2
    int Populacao2, PTuristico2;
    char Estado2[20], Codigo2[20], Cidade2[20];
    float Area2, PIB2, Densidade2, PIBpercapita2;

    // Introdução do jogo
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("***** Olá, você está no SUPER TRUNFO - Países! *****\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("!!!!!!!!  ATENÇÃO PARA AS REGRAS DO JOGO   !!!!!!!!\n\n");

    printf("*************** De Olho Nas Regras *****************\n");
    printf("  *** Atenção!!*** - Caso utilize um Estado com nome composto, não utilize espaço em branco.\n");
    printf("  Separe com hífen (-) ou underline (_). Ex.: Rio-de-Janeiro, Minas_Gerais\n\n");

    // Entrada de dados da Carta 1
    printf("Digite um Estado de sua escolha: ");
    scanf("%s", Estado);

    printf("\n  ** Atenção!!** - Após escolher o Estado, escolha uma letra entre A e H que será o código da carta.\n");
    printf("  Exemplo: Bahia (B)\n");
    printf("  O código deve conter a letra que representa o Estado seguida de um número.\n");
    printf("  Exemplo 1: Estado = São_Paulo, letra A → Código: A01\n");
    printf("  Exemplo 2: Estado = Bahia, letra B → Código: B01\n\n");

    printf("Digite o Código da carta: ");
    scanf("%s", Codigo);

    printf("\n  ** Atenção!!** - Escolha uma cidade pertencente ao Estado escolhido.\n");
    printf("  Para nomes compostos, use hífen (-) ou underline (_). Ex.: Belo_Horizonte, Rio-de-Janeiro\n\n");

    printf("Digite a Cidade: ");
    scanf("%s", Cidade);

    printf("\n  ** Atenção!!** - Insira a população aproximada da cidade escolhida.\n");
    printf("Digite a População: %d");
    scanf("%d", &Populacao);

    printf("\n  ** Atenção!!** - Insira a área aproximada da cidade em km².\n");
    printf("Digite a Área: ");
    scanf("%f", &Area);

    printf("\n  ** Atenção!!** - Insira o valor aproximado do PIB da cidade.\n");
    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("\n  ** Atenção!!** - Insira o número aproximado de pontos turísticos da cidade.\n");
    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &PTuristico);

    // Cálculos da Carta 1
    Densidade1 = Populacao / Area;
    PIBpercapita1 = PIB / Populacao;

    // Exibição da Carta 1
    printf("\nLendo dados...\nCarregando Carta 1...\n... ... ...carregando.\n\n");
    printf("* CARTA 1 *\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", PTuristico);
    printf("Densidade Demográfica: %.2f hab/km²\n", Densidade1);
    printf("PIB per capita: %.2f\n\n", PIBpercapita1);

    // Entrada de dados da Carta 2
    printf("Digite os dados da Carta 2\n");

    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", Codigo2);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os Pontos Turísticos: ");
    scanf("%d", &PTuristico2);

    // Cálculos da Carta 2
    Densidade2 = Populacao2 / Area2;
    PIBpercapita2 = PIB2 / Populacao2;

    // Exibição da Carta 2
    printf("\nLendo dados...\nCarregando Carta 2...\n... ... ...carregando.\n\n");
    printf("* CARTA 2 *\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PTuristico2);
    printf("Densidade Demográfica: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);

    return 0;
}
