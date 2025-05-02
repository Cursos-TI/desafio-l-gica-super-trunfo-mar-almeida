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

    char escolhaatributo1, escolhaatributo2, escolhaatributo3;
    int escolhausuario;
    int resultado1, resultado2;

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
    printf("1. Paraná\n");
    printf("2. Santa Catarina\n");
    scanf("%d", &escolhausuario);

    if (escolhausuario != 1 && escolhausuario != 2)
    {
        printf("Carta inválida. Reinicie");
        return 0;

    } else {
    
    printf("ATRIBUTOS\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Demográfica\n");
    printf("F. PIB per Capita\n");
    printf("G. Superpoder\n");
    printf("Escolha o primeiro atributo: \n");
    scanf(" %c", &escolhaatributo1);

    if (escolhaatributo1 != 'A' && escolhaatributo1 != 'a' &&
        escolhaatributo1 != 'B' && escolhaatributo1 != 'b' &&
        escolhaatributo1 != 'C' && escolhaatributo1 != 'c' &&
        escolhaatributo1 != 'D' && escolhaatributo1 != 'd' &&
        escolhaatributo1 != 'E' && escolhaatributo1 != 'e' &&
        escolhaatributo1 != 'F' && escolhaatributo1 != 'f' &&
        escolhaatributo1 != 'G' && escolhaatributo1 != 'g')
        {
            printf("Opção Inválida! Reinicie\n");
            return 0;

        } else {
            printf("Escolha o segundo atributo: \n");
            scanf(" %c", &escolhaatributo2);
    }

    if (escolhaatributo2 != 'A' && escolhaatributo2 != 'a' &&
        escolhaatributo2 != 'B' && escolhaatributo2 != 'b' &&
        escolhaatributo2 != 'C' && escolhaatributo2 != 'c' &&
        escolhaatributo2 != 'D' && escolhaatributo2 != 'd' &&
        escolhaatributo2 != 'E' && escolhaatributo2 != 'e' &&
        escolhaatributo2 != 'F' && escolhaatributo2 != 'f' &&
        escolhaatributo2 != 'G' && escolhaatributo2 != 'g')
    {
        printf("Opção Inválida! Reinicie\n");
        return 0;
        
    } else if (escolhaatributo1 == escolhaatributo2)
    {
        printf("Atributos iguais. Reinicie!\n");
        return 0;

    } else {

        switch (escolhaatributo1)
        {
        case 'A':
        case 'a':
        printf("---------COMPARATIVO---------\n");
        printf("População\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                printf("Paraná: %d habitantes\n", populacao1);
                printf("Santa Catarina: %d habitantes\n", populacao2);

            break;
            case 2:
                resultado1 = populacao2 > populacao1 ? 1 : 0;
                printf("Paraná: %d habitantes\n", populacao1);
                printf("Santa Catarina: %d habitantes\n", populacao2);
            
            default:
            break;
            
            }
        break;

        case 'B':
        case 'b':
        printf("---------COMPARATIVO---------\n");
        printf("Área\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = area1 > area2 ? 1 : 0;
                printf("Paraná: %.2f km2\n", area1);
                printf("Santa Catarina: %.2f km2\n", area2);

            break;
            case 2:
                resultado1 = area2 > area1 ? 1 : 0;
                printf("Paraná: %.2f km2\n", area1);
                printf("Santa Catarina: %.2f km2\n", area2);
            
            default:
            break;

            }
        break;

        case 'C':
        case 'c':
        printf("---------COMPARATIVO---------\n");
        printf("PIB\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = PIB1 > PIB2 ? 1 : 0;
                printf("Paraná: R$ %.2lf Bi\n", PIB1/1000000000);
                printf("Santa Catarina: R$ %.2lf Bi\n", PIB2/1000000000);

            break;
            case 2:
                resultado1 = PIB2 > PIB1 ? 1 : 0;
                printf("Paraná: R$ %.2lf Bi\n", PIB1/1000000000);
                printf("Santa Catarina: R$ %.2lf Bi\n", PIB2/1000000000);
            
            default:
            break;

            }
        break;

        case 'D':
        case 'd':
        printf("---------COMPARATIVO---------\n");
        printf("Pontos Turísticos\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
                printf("Paraná: %d \n", PontosTuristicos1);
                printf("Santa Catarina: %d \n", PontosTuristicos2);

            break;
            case 2:
                resultado1 = PontosTuristicos2 > PontosTuristicos1 ? 1 : 0;
                printf("Paraná: %d \n", PontosTuristicos1);
                printf("Santa Catarina: %d \n", PontosTuristicos2);
            
            default:
            break;
            
            }
        break;

        case 'E':
        case 'e':  
        printf("---------COMPARATIVO---------\n");
        printf("Densidade Populacional\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = DensPop1 < DensPop2 ? 1 : 0;
                printf("Paraná: %.2f hab/km2\n", DensPop1);
                printf("Santa Catarina: %.2f hab/km2\n", DensPop2);

            break;
            case 2:
                resultado1 = DensPop2 < DensPop1 ? 1 : 0;
                printf("Paraná: %.2f hab/km2\n", DensPop1);
                printf("Santa Catarina: %.2f hab/km2\n", DensPop2);
            
            default:
            break;

            }
        break;

        case 'F':
        case 'f':
        printf("---------COMPARATIVO---------\n");
        printf("PIB per Capita\n");   
            switch (escolhausuario)
            {
            case 1:
                resultado1 = PIBperCAP1 > PIBperCAP2 ? 1 : 0;
                printf("Paraná: R$ %.2f\n", PIBperCAP1);
                printf("Santa Catarina: R$ %.2f\n", PIBperCAP2);

            break;
            case 2:
                resultado1 = PIBperCAP2 > PIBperCAP1 ? 1 : 0;
                printf("Paraná: R$ %.2f\n", PIBperCAP1);
                printf("Santa Catarina: R$ %.2f\n", PIBperCAP2);
            
            default:
            break;
                
            }
        break;

        case 'G':
        case 'g': 
        printf("---------COMPARATIVO---------\n");
        printf("Superpoder\n");
            switch (escolhausuario)
            {
            case 1:
                resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
                printf("Paraná: %.2lf pontos\n", SuperPoder1);
                printf("Santa Catarina: %.2lf pontos\n", SuperPoder2);

            break;
            case 2:
                resultado1 = SuperPoder2 > SuperPoder1 ? 1 : 0;
                printf("Paraná: %.2lf pontos\n", SuperPoder1);
                printf("Santa Catarina: %.2lf pontos\n", SuperPoder2);
            
            default:
            break;
                
            }
        break;

        default:
        break;

        }

        switch (escolhaatributo2)
        {
        case 'A':
        case 'a':
        printf("População\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                printf("Paraná: %d habitantes\n", populacao1);
                printf("Santa Catarina: %d habitantes\n", populacao2);

            break;
            case 2:
                resultado2 = populacao2 > populacao1 ? 1 : 0;
                printf("Paraná: %d habitantes\n", populacao1);
                printf("Santa Catarina: %d habitantes\n", populacao2);
            
            default:
            break;
            
            }
        break;

        case 'B':
        case 'b':
        printf("Área\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = area1 > area2 ? 1 : 0;
                printf("Paraná: %.2f km2\n", area1);
                printf("Santa Catarina: %.2f km2\n", area2);

            break;
            case 2:
                resultado2 = area2 > area1 ? 1 : 0;
                printf("Paraná: %.2f km2\n", area1);
                printf("Santa Catarina: %.2f km2\n", area2);
            
            default:
            break;

            }
        break;

        case 'C':
        case 'c':
        printf("PIB\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = PIB1 > PIB2 ? 1 : 0;
                printf("Paraná: R$ %.2lf Bi\n", PIB1/1000000000);
                printf("Santa Catarina: R$ %.2lf Bi\n", PIB2/1000000000);

            break;
            case 2:
                resultado2 = PIB2 > PIB1 ? 1 : 0;
                printf("Paraná: R$ %.2lf Bi\n", PIB1/1000000000);
                printf("Santa Catarina: R$ %.2lf Bi\n", PIB2/1000000000);
            
            default:
            break;

            }
        break;

        case 'D':
        case 'd':
        printf("Pontos Turísticos\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
                printf("Paraná: %d \n", PontosTuristicos1);
                printf("Santa Catarina: %d \n", PontosTuristicos2);

            break;
            case 2:
                resultado2 = PontosTuristicos2 > PontosTuristicos1 ? 1 : 0;
                printf("Paraná: %d \n", PontosTuristicos1);
                printf("Santa Catarina: %d \n", PontosTuristicos2);
            
            default:
            break;
            
            }
        break;

        case 'E':
        case 'e':  
        printf("Densidade Populacional\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = DensPop1 < DensPop2 ? 1 : 0;
                printf("Paraná: %.2f hab/km2\n", DensPop1);
                printf("Santa Catarina: %.2f hab/km2\n", DensPop2);

            break;
            case 2:
                resultado2 = DensPop2 < DensPop1 ? 1 : 0;
                printf("Paraná: %.2f hab/km2\n", DensPop1);
                printf("Santa Catarina: %.2f hab/km2\n", DensPop2);
            
            default:
            break;

            }
        break;

        case 'F':
        case 'f':   
        printf("PIB per Capita\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = PIBperCAP1 > PIBperCAP2 ? 1 : 0;
                printf("Paraná: R$ %.2f\n", PIBperCAP1);
                printf("Santa Catarina: R$ %.2f\n", PIBperCAP2);

            break;
            case 2:
                resultado2 = PIBperCAP2 > PIBperCAP1 ? 1 : 0;
                printf("Paraná: R$ %.2f\n", PIBperCAP1);
                printf("Santa Catarina: R$ %.2f\n", PIBperCAP2);
            
            default:
            break;
                
            }
        break;

        case 'G':
        case 'g': 
        printf("Superpoder\n");
            switch (escolhausuario)
            {
            case 1:
                resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
                printf("Paraná: %.2lf pontos\n", SuperPoder1);
                printf("Santa Catarina: %.2lf pontos\n", SuperPoder2);

            break;
            case 2:
                resultado2 = SuperPoder2 > SuperPoder1 ? 1 : 0;
                printf("Paraná: R$ %.2lf pontos\n", SuperPoder1);
                printf("Santa Catarina: R$ %.2lf pontos\n", SuperPoder2);
            
            default:
            break;
                
            }
        break;

        default:
        break;

        }

        printf("----------RESULTADO----------\n");

        if (resultado1 == 1 && resultado2 == 1)
        {
            escolhausuario == 1 ? 
            printf("Parabéns! Paraná vence nos dois atributos!\n") : 
            printf("Parabéns! Santa Catarina vence nos dois atributos!\n");
            printf("-----------------------------");

        } else if (resultado1 == 1 && resultado2 == 0)
        {
            printf("Empate!\n");
            escolhausuario == 1 ? 
            printf("Primeiro atributo: PR ganha / Segundo atributo: PR perde\n") : 
            printf("Primeiro atributo: SC ganha / Segundo atributo: SC perde\n");
            printf("-----------------------------");

        } else if (resultado1 == 0 && resultado2 == 1)
        {
            printf("Empate!\n");
            escolhausuario == 1 ? 
            printf("Primeiro atributo: PR perde / Segundo atributo: PR Ganha\n") : 
            printf("Primeiro atributo: SC perde / Segundo atributo: SC Ganha\n");
            printf("-----------------------------");

        } else {
            escolhausuario == 1 ? 
            printf("Infelizmente, Paraná perde nos dois atributos!\n") : 
            printf("Infelizmente, Santa Catarina perde nos dois atributos!\n");
            printf("Tente novamente!\n");
            printf("-----------------------------");
            
        }
    }   
    
}

return 0;

}