#include <stdio.h>

int main(){

    int torre, bispo, rainha, cavalo;

    // Movimentação da Torre (for)
    printf("Movimentação da Torre:\n");
    for(torre = 1; torre <= 5; torre++){
        printf("Torre move-se horizontalmente para a direita\n");
    }

    printf("---------------------------------------------------");

     // Movimentação do Bispo (while)
    printf("\nMovimentação do Bispo:\n");
    bispo = 1;

    while(bispo <= 5){
        printf("Bispo move-se para cima direita\n");
         bispo ++;
    }

    printf("---------------------------------------------------");

    // Movimentação da Rainha (do-while)
    rainha = 1;
    printf("\nMovimentação da Rainha:\n");

    do {
        printf("Rainha move-se para a esquerda:\n");
        rainha++;
    } while (rainha <= 8);

    printf("---------------------------------------------------");

    //Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:");
    for(cavalo = 1; cavalo < 2; cavalo++){

        for(int i = 1; i <= 2; i++){
            printf("\nCavalo move-se para baixo");
        }

        printf("\nCavalo move-se para esquerda");
    }
    
    
    return 0;
}