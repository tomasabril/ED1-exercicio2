#include <iostream>
#include "Pilha.h"
#include "Fila.h"

using namespace std;

void interage(Pilha *o1, Fila *o2);

int main()
{
    cout << "Hello world!";

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
    cout << "\n-----\n";
    cout << "1 - inclusao na pilha\n";
    cout << "2 - remoção da pilha\n";
    cout << "3 - Impressão da pilha\n\n";

    cout << "4 - inclusao na fila\n";
    cout << "5 - remoção da fila\n";
    cout << "6 - Impressão da fila\n\n";

    cout << "7 - move dado da pilha para fila\n-----\n";

    cout << "\ndigite a opção: ";
    cin >> op;
    switch(op) {
    case 1:
        int valor;
        cout << "\ndigite valor\n";
        cin >> valor;
        (*o1).inclui(valor);
        break;
    case 2:
        (*o1).remover();
        break;
    case 3:
        (*o1).imprime();
        break;

    case 4:
        int valor2;
        cout << "\ndigite valor\n";
        cin >> valor2;
        (*o2).adicionar(valor2);
        break;
    case 5:
        (*o2).remover();
        break;
    case 6:
        (*o2).imprimir();
        break;
    case 7:
        if( (*o2).adicionar((*o1).lerDado()) ) {
            (*o1).remover();
        }
        break;

    default:
        cout << "opção invalida\n";
    }
}
