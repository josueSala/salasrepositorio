#ifndef BST_H
#define BST_H
#include "fila.h"

// Nó da Árvore Binária de Busca
typedef struct NodeBST {
    Pedido pedidoConcluido;
    struct NodeBST *esquerda; // Subárvore com IDs menores
    struct NodeBST *direita;  // Subárvore com IDs maiores
} NodeBST;

// Protótipos das operações (Fase 2)
NodeBST* inserirNaBST(NodeBST *raiz, Pedido p);
void exibirEmOrdem(NodeBST *raiz);

#endif