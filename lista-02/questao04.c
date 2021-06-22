#include<stdio.h>

int main(){
    int senhaSecreta = 1234;
    int senha;
    printf(":::::: Questao 04 ::::::\n\n");
    printf("Digite a senha: ");
    scanf("%d", &senha);
    if(senha == senhaSecreta){
        printf("\nACESSO PERMITIDO");
    }else{
        printf("\nACESSO NEGADO");
    }
    return 0;
}