#include <stdio.h>
#include <stdlib.h>

void divisao(){
    int n1,n2,resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d",&n1,&n2);
    resultado=n1/n2;
    system("cls");
    printf("A divisão dos dois numeros e de: %d\n",resultado);
    main();
}