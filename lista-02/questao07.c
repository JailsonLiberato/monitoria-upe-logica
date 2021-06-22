#include<stdio.h>

int main() {
    int sexo;
    float altura;
    int CODIGO_MULHER = 1;
    int CODIGO_HOMEM = 2;

    printf(":::::: Questao 07 ::::::\n\n");
    printf("Digite o sexo (1) - Feminino | (2) - Masculino: ");
    scanf("%d", &sexo);
    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    if(sexo == CODIGO_MULHER){
        printf("Peso ideal: %.2f", (62.1 * altura) - 44.7);
    }else if(sexo == CODIGO_HOMEM){
        printf("Peso ideal: %.2f", (72.7 * altura) - 58);
    }else{
        printf("\nDigitou o sexo errado...");
    }
}