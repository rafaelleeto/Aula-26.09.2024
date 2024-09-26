#include <stdio.h>

void menu(){
     int opcao;
    printf("\nselecione seu metodo:\n");
    printf("\n1-Soma\n2-Subtracao\n3-Divisao\n4-mutiplicacao\n0-Sair");
    scanf("%d",&opcao);
    
    do
    {
        switch (opcao)
        {
        case 1:
        soma();
            break;
         case 2:
        subtracao();
            break;
        case 3:
        divisao();
            break;
         case 4:
        mutiplicacao();
            break;
        
        default:
            break;
        }
    } while (opcao!=0);
}