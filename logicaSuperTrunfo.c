#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char nome1[50]; // Paraná
    char codigo1[50]; // PR01
    char cidade1[50]; // Curitiba
    int populacao1; // 11444380 hab
    float area1; // 199307.92 km2
    double PIB1; // R$ 614611000000
    int PontosTuristicos1; //350
    float DensPop1; // = Pop / Area
    float PIBperCAP1; // = PIB / Pop
    double SuperPoder1; // = populacao1 + area1 + PIB1 + PontosTuristicos1 + (1 / DensPop1) + PIBperCAP1;

    char nome2[50]; // Santa Catarina
    char codigo2[50]; // SC01
    char cidade2[50]; // Florianopolis
    int populacao2; // 8058441 hab
    float area2; // 95730.69 km2
    double PIB2; // R$ 466274000000 
    int PontosTuristicos2; //600
    float DensPop2; // = Pop / Area
    float PIBperCAP2; // = PIB / Pop
    double SuperPoder2; // = populacao2 + area2 + PIB2 + PontosTuristicos2 + (1 / DensPop2) + PIBperCAP2;

    printf("Nome do Estado 1: ");
    scanf("%s", &nome1);

    printf("Código da Carta 1: ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade 1: ");
    scanf("%s", &cidade1);

    printf("Digite a População 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Área 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB1: ");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos1: ");
    scanf("%d", &PontosTuristicos1);

    printf("Nome do Estado 2: ");
    scanf("%s", &nome2);

    printf("Código da Carta 2: ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade 2: ");
    scanf("%s", &cidade2);

    printf("Digite a População 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Área 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB2: ");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos2: ");
    scanf("%d", &PontosTuristicos2);

    printf("---------------------------------------------\n");

    DensPop1 = (float) populacao1 / area1;
    PIBperCAP1 = (float) PIB1 / populacao1;
    DensPop2 = (float) populacao2 / area2;
    PIBperCAP2 = (float) PIB2 / populacao2;

    SuperPoder1 = (float) populacao1 + area1 + PIB1 + PontosTuristicos1 + (1 / DensPop1) + PIBperCAP1;
    SuperPoder2 = (float) populacao2 + area2 + PIB2 + PontosTuristicos2 + (1 / DensPop2) + PIBperCAP2;

    // inserção de variaveis 'resultado' para cada parâmetros para em seguida fazer as condicionais
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPIB;
    int resultadoPontosTuristicos;
    int resultadoDensidadePop;
    int resultadoPIBperCap;
    int resultadoSuperPoder;

    // resultados são 0 ou 1 (1 = verdadeiro ; 0 = falso)
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = PIB1 > PIB2;
    resultadoPontosTuristicos = PontosTuristicos1 > PontosTuristicos2;
    resultadoDensidadePop = DensPop1 < DensPop2;
    resultadoPIBperCap = PIBperCAP1 > PIBperCAP2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    /* para os comparativos, utilizando IF-ELSE, os resultados com valor 1 (IF == 1) serão 
    associados à 'Carta 1' e os resultados com valor 0 (ELSE) serão associados à 'Carta 2' */

    printf("*** COMPARAÇÃO DAS CARTAS ***\n");

    printf("População\n");
    printf("Carta 1 - Paraná (PR): %d hab\n", populacao1);
    printf("Carta 2 - Santa Catarina (SC): %d hab\n", populacao2);
    if (resultadoPopulacao == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("Área\n");
    printf("Carta 1 - Paraná (PR): %.2f km2\n", area1);
    printf("Carta 2 - Santa Catarina (SC): %.2f km2\n", area2);
    if (resultadoArea == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("PIB\n");
    printf("Carta 1 - Paraná (PR): R$ %.2lf\n", PIB1);
    printf("Carta 2 - Santa Catarina (SC): R$ %.2lf\n", PIB2);
    if (resultadoPIB == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("Número de Pontos Turísticos\n");
    printf("Carta 1 - Paraná (PR): %d\n", PontosTuristicos1);
    printf("Carta 2 - Santa Catarina (SC): %d\n", PontosTuristicos2);
    if (resultadoPontosTuristicos == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("Densidade Populacional\n");
    printf("Carta 1 - Paraná (PR): %.2f hab/km2\n", DensPop1);
    printf("Carta 2 - Santa Catarina (SC): %.2f hab/km2\n", DensPop2);
    if (resultadoDensidadePop == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("PIB per Capita\n");
    printf("Carta 1 - Paraná (PR): R$ %.2f\n", PIBperCAP1);
    printf("Carta 2 - Santa Catarina (SC): R$ %.2f\n", PIBperCAP2);
    if (resultadoPIBperCap == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    printf("Super Poder\n");
    printf("Carta 1 - Paraná (PR): %.2lf\n", SuperPoder1);
    printf("Carta 2 - Santa Catarina (SC): %.2lf\n", SuperPoder2);
    if (resultadoSuperPoder == 1){
        printf("Vencedor: Carta 1!\n");}
        else {
            printf("Vencedor: Carta 2!\n");
        }

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
    
}
