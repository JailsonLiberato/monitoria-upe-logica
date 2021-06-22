#include<stdio.h>

int main1(){
    int numero1;
    int numero2;
    printf(":::::: Questao 01 ::::::\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    if(numero1 == numero2){
        printf("\nO numero 1 e o numero 2 sao iguais");
    }
    else if(numero1 > numero2){
        printf("\nO numero 1 eh maior que o numero 2");
    }else{
        printf("\nO numero 2 eh maior que o numero 1");
    }

    return 0;
}
