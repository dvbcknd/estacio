#include <stdio.h>


// Movimentação da Torre , 05 vezes para a direita
void movimentoTorre(int torre){
    if (torre > 0){
        printf("Torre move-se horizontalmente para a direita\n");

        movimentoTorre(torre - 1); //Faz cria a recursividade e decrementa -1 do valor definido para torre.
    } 
}

void movimentoBispo (int bispo){
    if (bispo > 0){
        for(int i = 1; i < 2; i++){
            printf("Bispo move-se para cima");
            for(int j = 1; j < 2; j++){
                printf(" e para direita\n");
            }
        }    

        movimentoBispo(bispo - 1);
        
    }
    
}


void movimentoRainha (int rainha){
    if(rainha > 0){
        printf("Rainha move-se para a esquerda:\n");

        movimentoRainha(rainha -1 );
    }
}

int main(){

    int torre = 5, bispo = 5, rainha = 8, cavalo;

    // Movimentação da Torre (for), 05 vezes para a direita
    printf("Movimentação da Torre:\n");
    movimentoTorre(torre);
    // for(torre = 1; torre <= 5; torre++){
    //     printf("Torre move-se horizontalmente para a direita\n");
    // }

    printf("---------------------------------------------------");

     // Movimentação do Bispo (while), 05 vezes para cima + direita
    printf("\nMovimentação do Bispo:\n");
    movimentoBispo(bispo);

    // bispo = 1;

    // while(bispo <= 5){
    //     printf("Bispo move-se para cima direita\n");
    //      bispo ++;
    // }

    printf("---------------------------------------------------");

    // Movimentação da Rainha (do-while), 08 vezes para a esquerda
    // rainha = 1;
    printf("\nMovimentação da Rainha:\n");
    movimentoRainha(rainha);

    // do {
    //     printf("Rainha move-se para a esquerda:\n");
    //     rainha++;
    // } while (rainha <= 8);


    printf("---------------------------------------------------");

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:");

    for (int cavalo = 1; cavalo <= 1; cavalo++) {

        for (int i = 1, j = 1; i <= 2; i++) {
            printf("\nCavalo move-se para cima"); 
            if (i == 2) {
                
                j++;
                if (j == 2) {
                    
                    break;
                }
            }
        }

        printf("\nCavalo move-se para direita"); 
    }
    
    return 0;
}