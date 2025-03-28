#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    //  variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasBispo = 5;   // O bispo se moverá 5 casas na diagonal
    int casasTorre = 5;    // A torre se moverá 5 casas para a direita
    int casasRainha = 8;   // A rainha se moverá 8 casas para a esquerda

    // Implementação de Movimentação do Bispo
    printf("movimento do pisbo (5 casas na diagonal cima direita):\n");
    int i;
    for(i = 0; i < casasBispo; i++){
        printf("Cima Direita\n");  // Movimento do Bispo para cima e à direita
    }
    
    // Implementação de Movimentação da Torre (usando while)
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    int a = 0;
    while (a < casasTorre) {
        printf("Direita\n");  // Movimento da Torre para a direita
        a++;
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int j = 0;
    do {
    printf("Esquerda\n");  // Movimento da Rainha para a esquerda
    j++;
    } while (j < casasRainha);

    // Implementação do Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");

    // Loop aninhado para simular o movimento do Cavalo
    int m;
    for (m = 0; m < 2; m++) {  // Movimento para baixo (2 casas)
        printf("Baixo\n");
    }
    int n;
    for (n = 0; n < 1; n++) {  // Movimento para a esquerda (1 casa)
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
