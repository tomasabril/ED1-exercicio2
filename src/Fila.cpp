
#include <iostream>
#include "Fila.h"

using namespace std;

Fila::Fila()
{
    //cout << "\nQual o tamanho da fila? (sem contar o 0) ";
    //cin >> tamanho;
    tamanho = 5;
    tamanho--;

    vec = new int[tamanho+1];
    for(int i=0; i<=tamanho; i++)
    {
        vec[i] = 0;
    }
    posicaoFim = -1;
    posicaoInicio = 0;
    cheios = 0;
}

bool Fila::adicionar(int dado)
{
    if(cheios == tamanho+1)
    {
        cout << "\n a fila já está cheia!";
        return false;
    }
    else
    {
        if(posicaoFim == tamanho)
        {
            posicaoFim = -1;
        }
        posicaoFim++;
        vec[posicaoFim] = dado;
        cheios++;
        return true;
    }
}

void Fila::remover()
{
    if(cheios == 0)
    {
        cout << "\n fila vazia!";
    }
    else
    {
        cout << "\n valor a ser retirado " << vec[posicaoInicio];
        vec[posicaoInicio] = 0;
        if(posicaoInicio == tamanho)
        {
            posicaoInicio = -1;
        }
        posicaoInicio++;
        cheios--;
        //cout << "\n cheios: " << cheios;
    }
}

void Fila::imprimir()
{

    //if(!(posicaoFim < 0 && posicaoInicio == 0))
    if(cheios > 0)
    {
        cout << "\n Fila:";
        //cout << "\n" << cheios << " de " << tamanho+1 << " preenchidos";
        //cout << "\n posicao inicio " << posicaoInicio;
        if(posicaoFim < 0 && posicaoInicio == 0)    //caso vazio
        {
            cout << "\n posicao fim " << posicaoFim+1;
            cout << "\n ultimo valor adicionado: " << vec[posicaoFim+1];
        }
        else
        {
            //cout << "\n posicao fim " << posicaoFim;
            /////cout << "\n ultimo valor adicionado: " << vec[posicaoFim];
        }
        cout << "\n proximo valor a ser retirado: " << vec[posicaoInicio];
        cout << "\n";
    }
    else
    {
        cout << "\n Fila vazia\n";
    }
}



