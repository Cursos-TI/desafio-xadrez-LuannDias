#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Desafio: Nível Novato - Concluído (Luann - 10/06/2025)
// Movimentações do bispo, torre e rainha implementadas usando as estruturas de repetição: while, do-while e for

// Desafio: Nível Aventureiro - Concluído (Luann - 10/06/2025)
// Movimentação do cavalo implementada com loops for e while aninhados

// Desafio: Nível Mestre - Concluído (Luann - 10/06/2025)
// Código alterado para:
// - Movimentação da torre e da rainha usando recursividade
// - Movimentação do bispo combinando recursividade e loops aninhados
// - Movimentação do cavalo usando loops aninhados e lógica mais complexa


// Uso de recursividade com loop aninhado para executar a movimentação do bispo
void bispo(int n) {
    for (int i = 0; i < n; i++) {
        printf("Cima, ");

        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

// Uso de recursividade para fazer a movimentação da torre
void torre(int n) {
    if (n <= 0) return;
    printf("Direita\n");

    torre(n - 1);
}

// Uso de recursividade para fazer a movimentação da rainha
void rainha(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");

    rainha(n - 1);
}

int main() {
    // Variáveis usadas para controlar os loops e movimentar as peças, seguindo o padrão camelCase
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    const int movimentoCavalo1 = 2;
    const int movimentoCavalo2 = 1;

    // Chamada da função de movimentação do bispo, passando a variável 'movimentoBispo'
    printf("Movimentação do Bispo:\n");
    bispo(movimentoBispo);

    // Chamada da função de movimentação da torre, passando a variável 'movimentoTorre'
    printf("Movimentação do Torre:\n");
    torre(movimentoTorre);

    // Chamada da função de movimentação da rainha, passando a variável 'movimentoRainha'
    printf("Movimentação do Rainha:\n");
    rainha(movimentoRainha);

    // Uso de loops aninhados e múltiplas variáveis para realizar a movimentação do cavalo 
    printf("Movimentação do Cavalo\n");
    for (int i = 0, j = 0; i < movimentoCavalo1; i++, j++) {
        printf("Cima\n");

        if (i == movimentoCavalo1 -1) {
            while (j <= movimentoCavalo2) {
                printf("Direita\n");
                j++;
            }
        }
    }

    return 0;
}
