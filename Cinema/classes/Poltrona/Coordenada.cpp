#include "Coordenada.h"

Coordenada::Coordenada()
{
    //ctor
}

Coordenada::~Coordenada()
{
    //dtor
}

int Coordenada::getX(){
    return x;
}
void Coordenada::setX(int x){
    this->x = x;
}

char Coordenada::getY(){
    return y;
}
void Coordenada::setY(char y){
    this->y = y;
}
