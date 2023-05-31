/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 27/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#include <iostream>
#include "ListaSimple.h"
template<typename T>
ListaSimple<T>::ListaSimple(){
	this->cabeza = nullptr;
}
template<typename T>
inline void ListaSimple<T>::insertarCabeza(T dato){
	Nodo<T>* nuevoNodo = new Nodo<T>(dato);
	if(cabeza == nullptr){
		cabeza = nuevoNodo;
	}else{
		Nodo<T>* auxiliar = cabeza;
		while(auxiliar->getSiguiente() != nullptr){
			auxiliar= auxiliar->getSiguiente();
		}
		auxiliar->setSiguiente(nuevoNodo);
	}
}
template<typename T>
inline void ListaSimple<T>::insertarCola(T dato){
	Nodo<T>* nuevoNodo = new Nodo<T>(dato);
	if(cabeza == nullptr){
		cabeza = nuevoNodo;
	}else{
		Nodo<T>* auxiliar = cabeza;
		cabeza = nuevoNodo;
		cabeza->setSiguiente(auxiliar);
	}
}
template<typename T>
inline void ListaSimple<T>::buscar(T dato){
	Nodo<T>* iterador = cabeza;
    while (iterador != nullptr) {
        if (iterador->getDato() == dato) {
            std::cout << "El dato " << dato << " si se encuentra en la lista" << std::endl;
            return;
        }
        iterador = iterador->getSiguiente();
    }
    std::cout << "El dato " << dato << " no se encuentra en la lista" << std::endl;
}
	template<typename T>
	inline void ListaSimple<T>::eliminar(T dato){
		Nodo<T>* iterador = cabeza;
		Nodo<T>* anterior = nullptr;
		while(iterador != nullptr){
			if(iterador->getDato() == dato){
				if (anterior != nullptr) {
				    anterior->setSiguiente(iterador->getSiguiente());
				} else {
				    cabeza = iterador->getSiguiente();
				}
				delete iterador;
				std::cout << "El dato " << dato << " se ha eliminado de la lista" <<std:: endl;
				return;
			}
			anterior = iterador;
			iterador = iterador->getSiguiente();	
		}
		std::cout << "El dato " << dato << " no se encuentra en la lista" << std::endl;
	}
template<typename T>
inline void ListaSimple<T>::mostrar(){
	Nodo<T>* iterador = cabeza;
	while(iterador != nullptr){
		std::cout<<iterador->getDato()<<" -> ";
		iterador = iterador->getSiguiente();
	}
	std::cout<<"NULL"<<std::endl;
}