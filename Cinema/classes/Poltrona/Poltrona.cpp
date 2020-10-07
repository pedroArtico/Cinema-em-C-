#include "Poltrona.h"
#include <stdbool.h>
#include <iostream>
#include "Coordenada.h"

using namespace std;

Poltrona::Poltrona()
{
    estado = 0; //livre
}

Poltrona::~Poltrona()
{
    //dtor
}

int Poltrona::getNumero(){
    return numero;
}
void Poltrona::setNumero(int numero){
    this->numero = numero;
}

bool Poltrona::getEstado(){
    return estado;
}
void Poltrona::alterarEstado(bool estado){
    this->estado = estado;
}

Coordenada Poltrona::getCoord(){
    return this->coord;
}
/*void Poltrona::setCoord(Coordenada coord){
    coord.setX(x);
    coord.setY(y);
}*/

void Poltrona::cadastrar(){
    //cout << "Numero da poltrona: ";
    //cin >> numero;
    //setNumero(numero);
    int cX;
    char cY;
    cout << "\nCoordenada da poltrona (numero): ";
    cin >> cX;
    coord.setX(cX);
    cout << "\nCoordenada da poltrona (letra): ";
    cin >> cY;
    coord.setY(cY);
}