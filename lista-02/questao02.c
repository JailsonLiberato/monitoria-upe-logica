#include<stdio.h>

int main(){
    int anoNascimento;
    int anoAtual = 2021;
    printf(":::::: Questao 02 ::::::\n\n");
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    int diferenca = anoAtual - anoNascimento;

    if(diferenca >= 16){
        printf("\nPode votar");
    }else{
        printf("\nNao pode votar");
    }

    return 0;
}