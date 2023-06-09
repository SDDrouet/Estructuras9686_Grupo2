/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/06/23 10::00
 * Fecha de modificacion: 09/06/23 10:36
 * Enunciado:
 * Implementación de plantillas, interfaces y contador de pares en pilas
 *
 *******************************************************************************/ 
#include "Pila.h"
#include <iostream>
#include <string>

//constructor y destructor
template <typename T>
Pila<T>::Pila(){
	tope = nullptr;
	contadorPares = 0;
	contadorElementos = 0;
}

template <typename T>
Pila<T>::~Pila(){
	while (!isEmpty()){
		pop();
	}
} 

template <typename T>
int Pila<T>::getContadorPares(void){
	return contadorPares;
}

template <typename T>
int Pila<T>::getContadorElementos(void){
	return contadorElementos;
}

//metodos
template <typename T>
void Pila<T>::push(T dato){
	Nodo<T>* nuevo = new Nodo<T>(dato);
	nuevo->setSiguiente(tope);
	tope = nuevo;
}
template <typename T>
T Pila<T>::pop(){
	if (!isEmpty()){
		T dato = tope->getDato();
		Nodo<T>* aux = tope;
		tope = tope->getSiguiente();
		delete aux;
		return dato;
	}else{
		return NULL;
	}
}
template <typename T>
T Pila<T>::peek(){
	if (!isEmpty()){
		return tope->getDato();
	}else{
		return NULL;
	}
}

template <typename T>
bool Pila<T>::isEmpty(){
	return tope == nullptr;
}

template <typename T>
void Pila<T>::contarPares(){
	T dato;
	contadorElementos = 0;
	contadorPares = 0;	
	while(!isEmpty()){
		dato = peek();
		contadorElementos ++;
		if(dato%2 == 0){
			contadorPares ++;
		}
		pop();	
	}
	std::cout << "Numero de elementos pares: " << contadorPares << std::endl;
}

