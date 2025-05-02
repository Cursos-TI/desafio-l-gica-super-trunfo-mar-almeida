#include <stdio.h>

int main() {

    char nome1 [50]= "Paraná";
    char codigo1 [50]= "PR01";
    char cidade1 [50]= "Curitiba";
    int populacao1 = 11444380; // hab
    float area1 =  199307.92; // km2
    double PIB1 = 614611000000; // R$
    int PontosTuristicos1 = 320;
    float DensPop1; // = Pop / Area
    float PIBperCAP1; // = PIB / Pop
    double SuperPoder1; // = (pop1 + area1 + PIB1 + PtsTur1 + (1 / DensPop1) + PIBperCAP1) / 1000000000;

    char nome2[50] = "Santa Catarina";
    char codigo2[50] = "SC01";
    char cidade2[50] = "Florianopolis";
    int populacao2 = 8058441; // hab
    float area2 = 95730.69; // km2
    double PIB2 = 466274000000; // R$ 
    int PontosTuristicos2 = 680; 
    float DensPop2; // = Pop / Area
    float PIBperCAP2; // = PIB / Pop
    double SuperPoder2; // = (pop2 + area2 + PIB2 + PtsTur2 + (1 / DensPop2) + PIBperCAP2) / 1000000000;

    char escolhaatributo;
    int escolhausuario;

    DensPop1 = (float) populacao1 / area1;
    PIBperCAP1 = (float) PIB1 / populacao1;
    DensPop2 = (float) populacao2 / area2;
    PIBperCAP2 = (float) PIB2 / populacao2;

    SuperPoder1 = (float) (populacao1 + area1 + PIB1 + PontosTuristicos1 + 
        (1 / DensPop1) + PIBperCAP1) / 1000000000; // Divisão por bilhão para encurtar o result final
    SuperPoder2 = (float) (populacao2 + area2 + PIB2 + PontosTuristicos2 + 
        (1 / DensPop2) + PIBperCAP2) / 1000000000; // Divisão por bilhão para encurtar o result final

    printf("*****JOGO SUPERTRUNFO ESTADOS*****\n");
    printf("-----Paraná Vs Santa Catarina-----\n");

    printf("Escolha sua Carta\n");
    printf("1. Paraná / 2. Santa Catarina\n");
    scanf("%d", &escolhausuario);
    if (escolhausuario != 1 && escolhausuario != 2)
    {
        printf("Carta Inválida. Reinicie!\n");

    } else {
    
    printf("Escolha um dos Atributos\n");
    printf("a. População\n");
    printf("b. Área\n");
    printf("c. PIB\n");
    printf("d. Número de Pontos Turísticos\n");
    printf("e. Densidade Demográfica\n");
    printf("f. PIB per Capita\n");
    printf("g. Superpoder\n");
    printf("h. Sair do Jogo\n");
    printf("Escolha: ");
    scanf(" %c", &escolhaatributo);

        switch (escolhaatributo)
        {
        case 'a':
            switch (escolhausuario)
            {
            case 1:
                if (populacao1 > populacao2)
                {
                    printf("Paraná - %d habitantes\n", populacao1);
                    printf("Santa Catarina - %d habitantes\n", populacao2);
                    printf("Você Ganhou!");
                } else if (populacao1 < populacao2)
                {
                    printf("Paraná - %d habitantes\n", populacao1);
                    printf("Santa Catarina - %d habitantes\n", populacao2);
                    printf("Você Perdeu!");
                } else {
                    printf("Paraná: %d habitantes\n", populacao1);
                    printf("Santa Catarina: %d habitantes\n", populacao2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (populacao1 > populacao2)
                {
                    printf("Paraná - %d habitantes\n", populacao1);
                    printf("Santa Catarina - %d habitantes\n", populacao2);
                    printf("Você Perdeu!");
                } else if (populacao1 < populacao2)
                {
                    printf("Paraná - %d habitantes\n", populacao1);
                    printf("Santa Catarina - %d habitantes\n", populacao2);
                    printf("Você Ganhou!");
                } else {
                    printf("Paraná: %d habitantes\n", populacao1);
                    printf("Santa Catarina: %d habitantes\n", populacao2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'b':
            switch (escolhausuario)
            {
            case 1:
                if (area1 > area2)
                {
                    printf("Paraná - %.2f km2\n", area1);
                    printf("Santa Catarina - %.2f km2\n", area2);
                    printf("Você Ganhou!");
                } else if (area1 < area2)
                {
                    printf("Paraná - %.2f km2\n", area1);
                    printf("Santa Catarina - %.2f km2\n", area2);
                    printf("Você Perdeu!");
                } else {
                    printf("Paraná: %.2f km2\n", area1);
                    printf("Santa Catarina: %.2f km2\n", area2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (area1 > area2)
                {
                    printf("Paraná - %.2f km2\n", area1);
                    printf("Santa Catarina - %.2f km2\n", area2);
                    printf("Você Perdeu!");
                } else if (populacao1 < populacao2)
                {
                    printf("Paraná - %.2f km2\n", area1);
                    printf("Santa Catarina - %.2f km2\n", area2);
                    printf("Você Ganhou!");
                } else {
                    printf("Paraná: %.2f km2\n", area1);
                    printf("Santa Catarina: %.2f km2\n", area2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;

            }
        break;

        case 'c':
            switch (escolhausuario)
            {
            case 1:
                if (PIB1 > PIB2)
                {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("Você Ganhou!");
                } else if (PIB1 < PIB2)
                {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("Você Perdeu!");
                } else {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (PIB1 > PIB2)
                {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("Você Perdeu!");
                } else if (PIB1 < PIB2)
                {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("Você Ganhou!");
                } else {
                    printf("Paraná - R$ %.2lf Bi\n", PIB1/1000000000);
                    printf("Santa Catarina - R$ %.2lf Bi\n", PIB2/1000000000);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'd':
            switch (escolhausuario)
            {
            case 1:
                if (PontosTuristicos1 > PontosTuristicos2)
                {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("Você Ganhou!");
                } else if (PontosTuristicos1 < PontosTuristicos2)
                {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("Você Perdeu!");
                } else {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (PontosTuristicos1 > PontosTuristicos2)
                {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("Você Perdeu!");
                } else if (PontosTuristicos1 < PontosTuristicos2)
                {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("Você Ganhou!");
                } else {
                    printf("Paraná - %d\n", PontosTuristicos1);
                    printf("Santa Catarina - %d\n", PontosTuristicos2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'e':
            switch (escolhausuario)
            {
            case 1:
                if (DensPop1 > DensPop2)
                {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("Você Perdeu!");
                } else if (DensPop1 < DensPop2)
                {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("Você Ganhou!");
                } else {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (DensPop1 > DensPop2)
                {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("Você Ganhou!");
                } else if (DensPop1 < DensPop2)
                {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("Você Perdeu!\n");
                } else {
                    printf("Paraná - %.2f hab/km2\n", DensPop1);
                    printf("Santa Catarina - %.2f hab/km2\n", DensPop2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'f':
            switch (escolhausuario)
            {
            case 1:
                if (PIBperCAP1 > PIBperCAP2)
                {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("Você Ganhou!\n");
                } else if (PIBperCAP1 < PIBperCAP2)
                {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("Você Perdeu!\n");
                } else {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (PIBperCAP1 > PIBperCAP2)
                {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("Você Perdeu!\n");
                } else if (PIBperCAP1 < PIBperCAP2)
                {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("Você Ganhou!\n");
                } else {
                    printf("Paraná - R$ %.2f\n", PIBperCAP1);
                    printf("Santa Catarina - R$ %.2f\n", PIBperCAP2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'g':
            switch (escolhausuario)
            {
            case 1:
                if (SuperPoder1 > SuperPoder2)
                {
                    printf("Paraná - %.2lf pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2lf pts\n", SuperPoder2);
                    printf("Você Ganhou!\n");
                } else if (SuperPoder1 < SuperPoder2)
                {
                    printf("Paraná - %.2lf pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2lf pts\n", SuperPoder2);
                    printf("Você Perdeu!\n");
                } else {
                    printf("Paraná - %.2lf pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2lf pts\n", SuperPoder2);
                    printf("EMPATE!\n");
                }
            break;

            case 2:
                if (SuperPoder1 > SuperPoder2)
                {
                    printf("Paraná - %.2f pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2f pts\n", SuperPoder2);
                    printf("Você Perdeu!\n");
                } else if (SuperPoder1 < SuperPoder2)
                {
                    printf("Paraná - %.2lf pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2lf pts\n", SuperPoder2);
                    printf("Você Ganhou!\n");
                } else {
                    printf("Paraná - %.2lf pts\n", SuperPoder1);
                    printf("Santa Catarina - %.2lf pts\n", SuperPoder2);
                    printf("EMPATE!\n");
                }
            break;

            default:
            break;
            }

        break;

        case 'h':
            printf("...Saindo do Jogo...\n");
            printf("GAME OVER!\n");
        break;

        default:
            printf("Opção Inválida!");
        break;

        }
    }

return 0;

}