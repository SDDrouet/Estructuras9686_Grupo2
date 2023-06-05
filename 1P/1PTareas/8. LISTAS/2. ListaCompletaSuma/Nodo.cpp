/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
 *******************************************************************************/ 
#include "Nodo.h"

Nodo::Nodo(int val,Nodo *sig=NULL){
	this->valor=val;
	this->siguiente=sig;
}

Nodo::Nodo(){
	this->valor=0;
	this->siguiente=NULL;	
}

Nodo::Nodo(int val){
	this->valor=val;
	this->siguiente=NULL;
}

void Nodo::setValor(int otroValor){
	valor=otroValor;
}

void Nodo::setSiguiente(Nodo* otroSiguiente){
	siguiente=otroSiguiente;
}

int Nodo::getValor(){
	return valor;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
}
