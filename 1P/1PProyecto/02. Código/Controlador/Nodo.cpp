/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 23:19
 * Fecha de modificacion: 03/06/23 23:19
 * Enunciado:
 * Proyecto para el registro vehicular con operaciones CRUD, archivos y listas
 * dobles
 *
 *******************************************************************************/ 
#include "../Modelo/Nodo.h"

template<typename T>
Nodo<T>::~Nodo() {
}

template<typename T>
Nodo<T>::Nodo() {
	this->dato = nullptr;
	this->siguiente = nullptr;
	this->anterior = nullptr;
}

template<typename T>
Nodo<T>::Nodo(T dato){
	this->dato = dato;
	this->siguiente = nullptr;
	this->anterior = nullptr;
}

template<typename T>
void Nodo<T>::setDato(T nuevoDato){
	this->dato = nuevoDato;
}

template<typename T>
void Nodo<T>::setSiguiente(Nodo<T>* nuevoSiguiente){
	this->siguiente = nuevoSiguiente;
}	

template<typename T>
T Nodo<T>::getDato(void){
	return dato;
}

template<typename T>
Nodo<T>* Nodo<T>::getSiguiente(void){
	return siguiente;
}

template<typename T>
Nodo<T>* Nodo<T>::getAnterior(void){
	return anterior;
}

template<typename T>
void Nodo<T>::setAnterior(Nodo<T>* nuevoAnterior){
	this->anterior = nuevoAnterior;
}