#include <stdio.h>

int main(){
    
    int numero;
    
    do {

        printf("Digite um numero par para sair do programa... \n");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!", numero);
        }else {
            printf("%d é impar!", numero);
        }
    }while (numero % 2 != 0);

    printf("voce digitou um numero par, saindo do programa... \n");

    return 0;
    
}