#ifndef FILA_H
#define FILA_H


class Fila
{
private:
    int cheios;
    int tamanho;
    int *vec;
    int posicaoInicio;
    int posicaoFim;
public:
    Fila();
    bool adicionar(int dado);
    void remover();
    void imprimir();
};

#endif // FILA_H
