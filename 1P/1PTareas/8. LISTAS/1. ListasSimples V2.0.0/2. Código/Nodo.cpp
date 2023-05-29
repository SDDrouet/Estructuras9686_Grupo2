/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 29/05/23 10:16
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#include "Nodo.h"
template<typename T>
Nodo<T>::Nodo(T dato){
	this->dato = dato;
	this->siguiente = nullptr;
}
template<typename T>
void Nodo<T>::setDato(T nuevoDato){
	this->dato = nuevoDato;
}
template<typename T>
void Nodo<T>::setSiguiente(Nodo<T>* actual){
	this->siguiente = actual;
}	
template<typename T>
T Nodo<T>::getDato(void){
	return dato;
}
template<typename T>
Nodo<T>* Nodo<T>::getSiguiente(void){
	return siguiente;
}