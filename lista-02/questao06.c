#include<stdio.h>

int main() {
    int valor1, valor2, valor3;
    int total;

    printf(":::::: Questao 06 ::::::\n\n");
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("\nDigite o valor 2: ");
    scanf("%d", &valor2);
    printf("\nDigite o valor 3: ");
    scanf("%d", &valor3);


    if(valor1 > valor2 && valor2 > valor3){
       total = valor1 + valor2;
    }else if(valor1 > valor3 && valor3 > valor2){
        total = valor1 + valor3;
    }else{
        total = valor2 + valor3;
    }

    printf("\nO total da soma: %d", total);

    return 0;
}