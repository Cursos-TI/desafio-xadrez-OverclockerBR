#include <stdio.h>

int main() {

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
                printf("Para qual direção deseja mover o BISPO (qual diagonal)?\n\n");
                printf("*** 1 - Diagonal Superior DIREITA.\n");
                printf("*** 2 - Diagonal Superior ESQUERDA.\n");
                printf("*** 3 - Diagonal INFERIOR Direita.\n");
                printf("*** 4 - Diagonal INFERIOR Esquerda.\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaBispo) == 1) {
                    // Limpa o buffer de entrada
                    while (getchar() != '\n');

                    if (escolhaBispo == 1) {
                        printf("\nBispo moveu 5 casas na diagonal superior direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal superior direita (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaBispo == 2) {
                        printf("\nBispo moveu 5 casas na diagonal superior esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal superior esquerda (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaBispo == 3) {
                        printf("\nBispo moveu 5 casas na diagonal inferior direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal inferior direita (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaBispo == 4) {
                        printf("\nBispo moveu 5 casas na diagonal inferior esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal inferior esquerda (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção
                    }
                    else {
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
                printf("*** 2 - Esquerda.\n");
                printf("*** 3 - Frente.\n");
                printf("*** 4 - Trás.\n\n");
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

                    } else if (escolhaTorre == 3) {
                        printf("\nTorre moveu 5 casas para Frente.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Frente (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaTorre == 4) {
                        printf("\nTorre moveu 5 casas para Trás.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Trás (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção

                    } else {
                        printf("Opção de direção inválida. Por favor, digite um número entre 1 ou 4.\n\n");
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
                printf("*** 3 - Para Frente.\n");
                printf("*** 4 - Para Trás.\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaRainha) == 1) {
                    // Limpa o buffer de entrada
                    while (getchar() != '\n');

                    if (escolhaRainha == 1) {
                        printf("\nRainha moveu 8 casas para direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 8; casaRainha++) {
                            printf("Movendo 1 casa: Direita (casa %d de 8)\n", casaRainha);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaRainha == 2) {
                        printf("\nRainha moveu 8 casas para esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 8; casaRainha++) {
                            printf("Movendo 1 casa: Esquerda (casa %d de 8)\n", casaRainha);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaRainha == 3) {
                        printf("\nRainha moveu 8 casas para frente.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 8; casaRainha++) {
                            printf("Movendo 1 casa: Para frente (casa %d de 8)\n", casaRainha);
                        }
                        break; // Sai do loop de direção

                    } else if (escolhaRainha == 4) {
                        printf("\nRainha moveu 8 casas para Trás.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 8; casaRainha++) {
                            printf("Movendo 1 casa: Para trás (casa %d de 8)\n", casaRainha);
                        }
                        break; // Sai do loop de direção

                    } else {
                        printf("Opção de direção inválida. Por favor, digite um número entre 1 ou 4.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 3
        }
        case 4: { // Cavalo
            int escolhaCavalo;

            while (1) {
                printf("Para qual tipo de movimento 'L' o CAVALO irá?\n\n");
                printf("*** 1 - Duas casas para frente e uma para direita.\n");
                printf("*** 2 - Duas casas para frente e uma para esquerda.\n");
                printf("*** 3 - Duas casas para trás e uma para direita.\n");
                printf("*** 4 - Duas casas para trás e uma para esquerda.\n\n");
                // Posso adicionar mais opções de movimento "L" se quiser simular todas as 8 direções
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaCavalo) == 1) {
                    while (getchar() != '\n');

                    if (escolhaCavalo >= 1 && escolhaCavalo <= 4) { // Assumindo 4 opções para simplificar
                        printf("\nCavalo moveu-se em 'L'.\n\n");
                        // Para o Cavalo, o loop de simulação de "casas" é diferente, pois não é uma linha reta.
                        // Poderíamos simplesmente confirmar o movimento "L".
                        // Exemplo:
                        switch (escolhaCavalo) {
                            case 1: printf("Movimento: 2 pra frente, 1 pra direita.\n\n"); break;
                            case 2: printf("Movimento: 2 pra frente, 1 pra esquerda.\n\n"); break;
                            case 3: printf("Movimento: 2 pra trás, 1 pra direita.\n\n"); break;
                            case 4: printf("Movimento: 2 pra trás, 1 pra esquerda.\n\n"); break;
                        } break;
                    } else {
                        printf("Opção de movimento inválida. Por favor, digite um número entre 1 e 4.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n');
                }
            }
            break;
        }
        default: // O default acaba sendo redundante com a validação do 'while' acima do switch, mas mantive para manter o padrão do switch.
            printf("Opção inválida, tente novamente.\n\n");
            break;
    }

    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   