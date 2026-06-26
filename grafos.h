#ifndef GRAFO_H
#define GRAFO_H
#include "fila.h"
#define MAX_VERTICES 20

// Representa o entregador que circula pelo Grafo
typedef struct Motoboy {
    int id;
    int disponivel;       // 1 para Disponível na loja, 0 para Ocupado na rua
    int tempoRestante;    // Tempo que falta para ele ir ao vértice de destino e voltar
    Pedido pedidoAtual;   // O pedido que ele está a carregar no momento
} Motoboy;

// Estrutura do Grafo por Matriz de Adjacência
typedef struct Grafo {
    int numVertices;                                 // Total de pontos de entrega cadastrados
    int matrizAdjacencia[MAX_VERTICES][MAX_VERTICES]; // Tabela de tempos (pesos) entre os vértices
} Grafo;

// Protótipos das operações (Fase 2)
void carregarGrafoDeFicheiro(Grafo *g, const char *nomeFicheiro);
void exibirMatriz(Grafo *g);

#endif