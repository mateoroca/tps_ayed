#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
    //ctor
}

Rectangulo::~Rectangulo()
{
    //dtor
}
////////////////////////////////////////////////
void Rectangulo::setaltura(float altura)
{
    this->altura=altura;
}
/////////////////////////////////////////////////
float Rectangulo::getaltura()
{
    return altura;
}
///////////////////////////////////////////////
void Rectangulo::setbase(float base)
{
    this->base = base;
}
///////////////////////////////////////////////
float Rectangulo::getbase()
{
    return base;
}
/////////////////////////////////////////////
float Rectangulo::area()
{
    return getaltura()*getbase();
}
/////////////////////////////////////////////
float Rectangulo::perimetro()
{
    return (2*getbase())+(2*getaltura());
}
////////////////////////////////////////////////
