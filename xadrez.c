#include <stdio.h>

int main() {

    //char bispo, torre, rainha;
    int casaBispo, casaTorre, casaRainha, casaCavalo;
    int escolha;

    // Mensagem inicial
    printf("Qual peça quer mover?\n\n");

    printf("*** 1 - BISPO.\n");
    printf("*** 2 - TORRE.\n");
    printf("*** 3 - RAINHA.\n");
    printf("*** 4 - CAVALO.\n");

    // Inicio da estrutura do código
    while (1){ // esse numero 1 significa TRUE
        printf("\nSua escolha: ");
        if (scanf("%d", &escolha) == 1) { // Jogador inseri sua escolha
            // Limpa o buffer de entrada após ler o inteiro
            while (getchar() != '\n'); 

            if (escolha >= 1 && escolha <= 4) {
                break; // Sai do loop se a entrada for válida
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 4.\n\n");
            }
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }
    
    switch (escolha) {
        case 1: { // Bispo
            int escolhaBispo;
            int casaBispo; // Declarar aqui para uso local

            // Loop para validar a escolha da direção do bispo
            while (1) {
                printf("Para qual direção deseja mover o BISPO (qual diagonal superior)?\n\n");
                printf("*** 1 - Direita.\n");
                printf("*** 2 - Esquerda.\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaBispo) == 1) {
                    // Limpa o buffer de entrada
                    while (getchar() != '\n');

                    if (escolhaBispo == 1) {
                        printf("\nBispo moveu 5 casas na diagonal superior direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal direita superior (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaBispo == 2) {
                        printf("\nBispo moveu 5 casas na diagonal superior esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal esquerda superior (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 1
        }
        case 2: { // Torre
            int escolhaTorre;
            int casaTorre; // Declarar aqui para uso local

            // Loop para validar a escolha da direção da Torre
            while (1) {
                printf("Para qual direção deseja mover a TORRE?\n\n");
                printf("*** 1 - Direita.\n");
                printf("*** 2 - Esquerda.\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaTorre) == 1) {
                    // Limpa o buffer de entrada
                    while (getchar() != '\n');

                    if (escolhaTorre == 1) {
                        printf("\nTorre moveu 5 casas para direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Direita (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaTorre == 2) {
                        printf("\nTorre moveu 5 casas para esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Esquerda (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 2
        }
        case 3: { // Rainha
            int escolhaRainha;
            int casaRainha; // Declarar aqui para uso local

            // Loop para validar a escolha da direção da Rainha
            while (1) {
                printf("Para qual direção deseja mover a RAINHA?\n\n");
                printf("*** 1 - Direita.\n");
                printf("*** 2 - Esquerda.\n");
                printf("*** 3 - Para Cima.\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaRainha) == 1) {
                    // Limpa o buffer de entrada
                    while (getchar() != '\n');

                    if (escolhaRainha == 1) {
                        printf("\nRainha moveu 5 casas para direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Direita (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaRainha == 2) {
                        printf("\nRainha moveu 5 casas para esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Esquerda (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaRainha == 3) {
                        printf("\nRainha moveu 5 casas para cima.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Para cima (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 3
        }
        default: // Esta parte é redundante com a validação do loop 'while' acima do switch, mas mantida por clareza.
            printf("Opção inválida, tente novamente.\n\n");
            break;
    }

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   