#include <iostream>
#include "Pilha.h"
#include "Fila.h"

using namespace std;

void interage(Pilha *o1, Fila *o2);

int main()
{
    Pilha pilha;
    Fila fila;

    while(true) {
        interage(&pilha, &fila);
    }

    return 0;
}

void interage(Pilha *o1, Fila *o2)
{

    int op;
    cout << "\n  ----- MENU -----\n";
    cout << " 1 - inclusao na pilha\n";
    cout << " 2 - move dado da pilha para fila\n";
    cout << " 3 - Impressão da pilha e fila\n";
    cout << " 4 - remoção da fila\n";
    cout << "\n> ";
    cout << "digite a opção: ";

    cin >> op;

    switch(op) {
    case 1:
        int valor;
        cout << "\ndigite valor: ";
        cin >> valor;
        (*o1).inclui(valor);
        break;
    case 2:
        if( ((*o1).head->tamanho) != 0 ) {
            if( (*o2).adicionar((*o1).lerDado()) ) {
                (*o1).remover();
            }
        } else {
            cout << "\n Pilha está vazia";
        }
        break;
    case 3:
        (*o1).imprime();
        (*o2).imprimir();
        break;
    case 4:
        (*o2).remover();
        break;
    default:
        cout << "opção invalida\n";
    }
}
