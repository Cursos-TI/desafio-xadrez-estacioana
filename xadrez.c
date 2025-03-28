#include <stdio.h>

// Função recursiva para movimentação da Torre (5 casas para a direita)
void moverTorre(int casas, int count) {
    if (count >= casas) {
        return; // Base da recursão: parar quando alcançar o número de casas
    }
    printf("Direita\n"); // Movimento da Torre para a direita
    moverTorre(casas, count + 1); // Chamada recursiva para mover uma casa a mais
}

// Função recursiva para movimentação do Bispo (5 casas na diagonal para cima e direita)
void moverBispo(int casas, int count) {
    if (count >= casas) {
        return; // Base da recursão: parar quando alcançar o número de casas
    }
    printf("Cima Direita\n"); // Movimento do Bispo para cima e à direita
    moverBispo(casas, count + 1); // Chamada recursiva para mover uma casa a mais
}

// Função recursiva para movimentação da Rainha (8 casas para a esquerda)
void moverRainha(int casas, int count) {
    if (count >= casas) {
        return; // Base da recursão: parar quando alcançar o número de casas
    }
    printf("Esquerda\n"); // Movimento da Rainha para a esquerda
    moverRainha(casas, count + 1); // Chamada recursiva para mover uma casa a mais
}

// Função para movimentar o Cavalo (2 casas para baixo e 1 casa para a esquerda)
void moverCavalo() {
    int i, j;
    // Loop para movimento do Cavalo (2 casas para baixo)
    for (i = 0; i < 2; i++) { 
        printf("Baixo\n");
    }
    // Loop para mover o Cavalo para a esquerda (1 casa)
    for (j = 0; j < 1; j++) { 
        printf("Esquerda\n");
    }
}

// Função para movimentar o Bispo com loops aninhados (5 casas na diagonal para cima e direita)
void moverBispoComplexo(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Definindo o número de casas para cada peça
    int casasBispo = 5;    // O bispo se moverá 5 casas na diagonal
    int casasTorre = 5;    // A torre se moverá 5 casas para a direita
    int casasRainha = 8;   // A rainha se moverá 8 casas para a esquerda

    // Movimentação do Bispo com Recursividade
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    moverBispo(casasBispo, 0); // Chamada recursiva para o Bispo

    // Movimentação da Torre com Recursividade
    printf("\nMovimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre, 0); // Chamada recursiva para a Torre

    // Movimentação da Rainha com Recursividade
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha, 0); // Chamada recursiva para a Rainha

    // Movimentação do Cavalo com Loops Complexos
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    moverCavalo(); // Chamada para o movimento do Cavalo

    // Movimentação do Bispo com Loops Aninhados (5 casas na diagonal)
    printf("\nMovimento do Bispo com Loops Aninhados (5 casas na diagonal Cima Direita):\n");
    moverBispoComplexo(5, 1); // Loop aninhado para simular o movimento do Bispo

    return 0;
}
