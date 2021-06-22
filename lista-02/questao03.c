#include<stdio.h>

int main(){

    int quantidade;
    printf(":::::: Questao 03 ::::::\n\n");
    printf("Digite quantas macas deseja: ");
    scanf("%d", &quantidade);
    float valor;
    if(quantidade < 12){
        valor = 0.30 * quantidade;
    }else{
        valor = 0.25 * quantidade;
    }

    printf("\nO valor final foi: R$ %.2f", valor);

    return 0;
}