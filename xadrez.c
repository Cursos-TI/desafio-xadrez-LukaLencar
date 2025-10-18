#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo;
    int torre = 0;
    int rainha = 0;
    
    printf("Vamos agora Simular alguns movimentos de peças de Xadrez!!\n");
    printf("\n");
    printf("Primeiro o Bispo movendo 5 casas para a diagonal superior direita:\n");

//Movimentação da peça Bispo
    for (bispo = 0; bispo < 5; bispo++){
        printf("Diagonal superior direita %d casa(s)\n", bispo + 1);
    }
    printf("\n");

    printf("Agora, veremos a Torre mover 5 casas para a direita!\n");

//Movimentação da peça Torre
    do {
        printf("Direita %d casa(s)\n", torre + 1);
        torre++;
    } while (torre < 5);
    printf("\n");

    printf("Por último, veremos a peça Rainha mover 8 casa para a esquerda\n");

//Movimentação da peça Torre
    while (rainha < 8){
        printf("Esquerda %d casa(s)\n", rainha + 1);
        rainha++;
    }
    
    return 0;
}
