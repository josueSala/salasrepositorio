#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "grafos.h"
#include "bst.h"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao;
    
    // Declaração das estruturas e variáveis de controlo do sistema
    Fila *cozinha = NULL;
    Grafo mapaCidade;
    NodeBST *historicoVendas = NULL;
    Motoboy frota[3]; // A empresa começa com 3 motoboys registados
    
    do {
        printf("\n=============================================\n");
        printf("       SISTEMA DE ENTREGA DE FAST FOOD       \n");
        printf("=============================================\n");
        printf("  [1] -> Inserir Novo Pedido na Fila\n");
        printf("  [2] -> Despachar Pedido via Motoboy\n");
        printf("  [3] -> Avançar Tempo da Simulação\n");
        printf("  [4] -> Mostrar Estado dos Motoboys\n");
        printf("  [5] -> Mostrar Matriz de Rotas (Grafo)\n");
        printf("  [6] -> Relatório de Vendas Concluídas (BST)\n");
        printf("  [0] -> Sair do Programa\n");
        printf("---------------------------------------------\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("\n[ERRO]: Digite apenas numeros!\n");
            limparBuffer();
            opcao = -1;
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\nChama a funcao 'enfileirar' do TAD Fila...\n");
                break;
            case 2:
                printf("\nBusca motoboy livre em 'frota' e retira pedido da 'cozinha'...\n");
                break;
            case 3:
                printf("\nAtualiza o 'tempoRestante' dos motoboys na rua...\n");
                break;
            case 4:
                printf("\nLista o status atual de cada motoboy da frota...\n");
                break;
            case 5:
                printf("\nChama a funcao 'exibirMatriz' do TAD Grafo...\n");
                break;
            case 6:
                printf("\nChama a funcao 'exibirEmOrdem' do TAD BST...\n");
                break;
            case 0:
                printf("\nA fechar o esqueleto do simulador. Pronto para o GitHub!\n");
                break;
            default:
                if(opcao != -1) printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}