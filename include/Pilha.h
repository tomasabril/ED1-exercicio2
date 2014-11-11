#ifndef PILHA_H
#define PILHA_H


struct No {
    int dado;
    No* prox;
    No* ant;
};

struct Head {
    int tamanho;
    No* topo;
};

class Pilha
{
private:

public:
    Head * head;
    Pilha();
    void inclui(int valor);
    void remover();
    void imprime();
    int lerDado();
};

#endif // PILHA_H
