#include "Operacion.h"

Operacion::Operacion(){
}
Operacion::Operacion(float A, float B) {
	this-> a = A;
	this-> b = B;
}

Operacion::~Operacion() {
}

void Operacion::setA(float newA) {
	this->a = newA;
}

float Operacion::getA(void) {
	return a;
}

void Operacion::setB(float newB) {
	this->b = newB;
}

float Operacion::getB(void) {
	return b;
}

float Operacion::operator +(const Operacion& op) const {
	Operacion sumaTotal(a + op.a,  b + op.b);
	return (sumaTotal.a + sumaTotal.b);
}