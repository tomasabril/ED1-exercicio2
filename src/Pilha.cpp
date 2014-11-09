/*
header topo aponta para o ultimo adiciodado
no prox aponta em direcao ao ultimo adicionado
no ant aponta em direcao ao primeiro adicionado
*/

#include <iostream>
#include "Pilha.h"

using namespace std;

Pilha::Pilha()
{
    head = new Head;
    head->topo = NULL;
    head->tamanho = 0;
}

void Pilha::inclui(int valor)
{
    //int valor;
    //cout << "digite valor\n";
    //cin >> valor;
    No * no = new No;
    no->dado = valor;
    no->prox = NULL;
    if (head->tamanho == 0) {
        no->ant = NULL;
    } else {
        no->ant = head->topo;
        (head->topo)->prox = no;
    }
    head->tamanho ++;
    head->topo = no;
}

void Pilha::remover()
{
    if(head->tamanho > 1) {
        head->topo = (head->topo)->ant ;
        delete (head->topo)->prox;
        (head->topo)->prox = NULL;
        head->tamanho --;
    }

    else if(head->tamanho == 1) {
        delete head->topo;
        head->topo = NULL;
        head->tamanho = 0;
    } else if(head->tamanho == 0) {
        cout << "Pilha já está vazia\n";
    }
}

void Pilha::imprime()
{
    cout << "\n Header\n";
    cout << "tamanho: " << head->tamanho
         << "\ntopo: " << head->topo;

    if(head->tamanho == 0) {
        cout << "\n nao existe nenhum nó na Pilha \n";
    } else {
        cout << "\n dado: " << (head->topo)->dado << "\n";
    }
}

int Pilha::lerDado()
{
    return (head->topo)->dado;
}




