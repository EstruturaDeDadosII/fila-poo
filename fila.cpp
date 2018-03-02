//
// Created by thiago on 02/03/2018.
//

#include "fila.h"

void fila::adicionaNumeroNoFimDaFila(int numero) {
    numeros.push_back(numero);
}

int fila::removeNumeroDoTopo() {
    int numero = numeros.front();
    numeros.pop_front();
    return numero;
}

int fila::retornaObjDoTopo() {
    return numeros.front();
}

bool fila::estaVazia() {
    return numeros.empty();
}

void fila::listaFila() {

    if (numeros.empty()) {
        cout << "A sua fila nao contem nenhuma numero" << endl;
        return;
    }

    cout << endl << "---------------" << endl;
    for (deque<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl << "---------------" << endl;
}

int fila::tamanhoDaFila() {
    return numeros.size();
}