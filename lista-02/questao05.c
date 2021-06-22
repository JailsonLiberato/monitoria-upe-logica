#include<stdio.h>

int main(){
    int golsGremio, golsInter;
    printf(":::::: Questao 05 ::::::\n\n");
    printf("Digite quantos gols marcou o Gremio: ");
    scanf("%d", &golsGremio);
    printf("\nDigite quantos gols marcou o Internacional: ");
    scanf("%d", &golsInter);

    if(golsGremio > golsInter){
        printf("\nGremio vencedor da partida");
    }else if(golsInter > golsGremio){
        printf("\nInternacional vencedor da partida");
    }else{
        printf("\nEmpate");
    }
    return 0;
}