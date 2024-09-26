#include <stdio.h>
#include <stdlib.h>

void soma(){
    int n1,n2;
    int resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d",&n1,&n2);
    resultado=n1+n2;
    system("cls");
    printf("A soma dos dois numeros e de: %d\n",resultado);
    main();
}