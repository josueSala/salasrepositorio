#ifndef FILA_H
#define FILA_H

// Representa o produto do cardápio (Pizza, Hambúrguer, etc.)
typedef struct Produto {
    int id;
    float preco;
} Produto;

// Guarda os dados essenciais de cada pedido feito
typedef struct Pedido {
    int id;              // ID único do pedido
    Produto item;        // O produto que foi pedido
    int bairroDestino;   // O número do bairro (vértice do grafo) para onde vai a entrega
} Pedido;

// Nó para a estrutura encadeada da Fila
typedef struct NodeFila {
    Pedido dado;
    struct NodeFila *proximo;
} NodeFila;

// Estrutura de controlo do TAD Fila
typedef struct Fila {
    NodeFila *frente;    // Aponta para o próximo pedido a ser despachado
    NodeFila *tras;      // Aponta para o último pedido que entrou na cozinha
} Fila;

// Protótipos das operações (Fase 2)
Fila* criarFila();
void enfileirar(Fila *f, Pedido p);
Pedido  desenfileirar(Fila *f);
int filaVazia(Fila *f);

#endif