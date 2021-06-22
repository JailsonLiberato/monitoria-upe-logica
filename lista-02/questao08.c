#include<stdio.h>

int main() {
    int lado1, lado2, lado3;
    printf(":::::: Questao 08 ::::::\n\n");
    printf("Digite o lado 1: ");
    scanf("%d", &lado1);
    printf("\nDigite o lado 2: ");
    scanf("%d", &lado2);
    printf("\nDigite o lado 3: ");
    scanf("%d", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("\nTriangulo Equilatero");
    }else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
        printf("\nTriangulo Isoceles");
    }else{
        printf("\nTriangulo Escaleno");
    }

    return 0;
}
