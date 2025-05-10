#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int b = 0;
    while(b <= 10){
        if(b % 2 == 0){
            printf("O Bispo moveu-se para a casa de cima : %d\n", b);
        }else {
            printf("O Bispo moveu-se para a casa da direita : %d\n", b);
        }
        b++;
    }

    printf("----------------------------------------------------\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    for(int t = 1; t <= 5; t++){
        printf("A Torre moveu-se para a casa : %d\n", t);   
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("----------------------------------------------------\n");

    int r = 0;
    do{
        printf("A Rainha moveu-se na direção esquerda: %d\n", r);
        r++;
    }while(r <= 8);
    
    return 0;
}
