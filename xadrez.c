#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoBispo(int bispo){ //Movimento Bispo
    if (bispo < 5){
        printf("Diagonal superior direita %d casa(s)\n", bispo + 1);
        movimentoBispo(bispo + 1);
    }
}

void movimentoTorre(int torre){ //Movimento Torre
    if (torre < 5){
        printf("Direita %d casa(s)\n", torre + 1);
        movimentoTorre(torre + 1);
    }
}

void movimentoRainha(int rainha){ //Movimento Rainha
    if (rainha < 8){
        printf("Esquerda %d casa(s)\n", rainha + 1);
        movimentoRainha(rainha + 1);
    }
}

void movimentoCavalo(int cavalo){ //Movimento Cavalo
    for (cavalo = 0; cavalo < 2; cavalo++){
        printf("Cima %d casa(s)\n", cavalo + 1);
     }
    printf("Direita %d casa\n", cavalo - 1);
}

int main() {

    printf("Vamos agora Simular alguns movimentos de peças de Xadrez!!\n");
    printf("\n");
    printf("Primeiro o Bispo movendo 5 casas para a diagonal superior direita:\n");

//Movimentação da peça Bispo
    movimentoBispo(0);
    printf("\n");

    printf("Agora, veremos a Torre mover 5 casas para a direita!\n");

//Movimentação da peça Torre
    movimentoTorre(0);
    printf("\n");

    printf("Agora, veremos a peça Rainha mover 8 casas para a esquerda\n");

//Movimentação da peça Torre
    movimentoRainha(0);
    printf("\n");

     printf("Agora, veremos a peça Cavalo mover 2 casas para a baixo e 1 casa para a esquerda\n");
//movimentação da peça Cavalo
    movimentoCavalo(0);

    return 0;
}
