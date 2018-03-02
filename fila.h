//
// Created by thiago on 02/03/2018.
//

#ifndef FILA_POO_FILA_H
#define FILA_POO_FILA_H

#include <iostream>
#include <deque>

using namespace std;

class fila {

    public:
    deque<int> numeros;
    void adicionaNumeroNoFimDaFila(int numero);
    int removeNumeroDoTopo();
    int retornaObjDoTopo();
    bool estaVazia();
    void listaFila();
    int tamanhoDaFila();

};


#endif //FILA_POO_FILA_H
