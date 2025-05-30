#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Bispo: 5 casas na diagonal superior direita
    //Torre: 5 casas para a direita
    //Rainha: 8 casas para a esquerda
    char bispo, torre, rainha;
    int casaBispo, casaTorre, casaRainha;
    int escolha;

    printf("Qual peça quer mover?\n\n");

    printf("*** 1 - BISPO.\n");
    printf("*** 2 - TORRE.\n");
    printf("*** 3 - RAINHA.\n");

    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        int escolhaBispo;
        
        printf("Para direita ou esquerda?\n\n");
        printf("*** 1 - Direita.\n");
        printf("*** 2 - Esquerda.\n");

        scanf("%d", &escolhaBispo);

        do {
            for (casaBispo = 0; casaBispo <= 5; casaBispo++)
            {
                printf("Direita, ");
                printf("cima\n\n");

                printf("Moveu 5x na diagonal superior direita.\n\n");

            } while (escolhaBispo != 1 && escolhaBispo != '\n');
        }

            break;

    default:
        break;
    


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
