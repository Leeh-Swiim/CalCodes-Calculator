#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    char opcao;


    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%   CAL CODES CALCULATOR   %%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n");

    do{        // PERMANECER NO MENU


    printf("    MENU \n\n");

    printf("1 - SOMATORIO \n");
    printf("2 - LOGICA PROPOSICIONAL \n");
    printf("3 - MATRIZES \n");
    printf("4 - ANALISE COMBINATORIA \n");
    printf("5 - SAIR \n\n");

    printf(" * DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &menu);

    printf("\n");

    switch(menu){

    int somatoria, menusomatoria, m, n, soma;
    case 1:

            printf("1 - Somatório de j = m até n para a regra j\n\n");
            printf("2 - Somatório de j = m até n para a regra (−j)^(j + 1)\n\n");
            printf("3 - Voltar ao Menu anterior\n\n");

    printf(" * DIGITE A OPCAO DESEJADA: ");
    scanf("%d,", &menusomatoria);
    printf("\n");

        switch(menusomatoria){

        case 1:
        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);

        soma = m + n;   // EXEMPLO

        printf("\n");
        printf("   RESULTADO = %d \n\n", soma);
        printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

        break;

        case 2:

        printf(" - DIGITE UM VALOR PARA M: ");
        scanf("%d", &m);
        printf(" - DIGITE UM VALOR PARA N: ");
        scanf("%d", &n);

        soma = m - n;   // EXEMPLO

        printf("\n");
        printf("   RESULTADO = %d \n\n", soma);
        printf("   RETORNANDO AO MENU PRINCIAL........ \n\n");

        break;

        case 3:
        printf(" ");


        }

    break;



    case 2:
    printf("  CODIGO EM CONSTRUCAO \n");                      // LÓGICA PROPOSICIONAL
    break;



    case 3:
    printf("  CODIGO EM CONSTRUCAO \n");                      // MATRIZES
    break;



    case 4:
    printf("  CODIGO EM CONSTRUCAO \n");                      // ANÁLISE COMBINATÓRIA
    break;


    case 5:
    printf("DESCONECTANDO... \nPROGRAMA FINALIZADO COM SUCESSO!\n");                   // SAIR
    exit(1); // SAINDO SOMENTE NA OPÇÃO 5


    default:
    printf("** DIGITE UMA OPCAO VALIDA **\n\n");                  // OPÇÃO INVALIDA

    }
    }while(1);  // PERMANECER NO MENU


    printf("\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}
