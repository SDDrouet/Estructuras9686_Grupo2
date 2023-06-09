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
#include "../Modelo/ListaDoble.h"
#include <iostream>

template<typename T>
ListaDoble<T>::~ListaDoble(){	
}

template<typename T>
ListaDoble<T>::ListaDoble(){
	this->primero = nullptr;
	this->ultimo = nullptr;
}

template<typename T>
void ListaDoble<T>::insertar(T dato){
	Nodo<T>* nuevo = new Nodo<T>(dato);
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}

template<typename T>
Nodo<T>* ListaDoble<T>::buscar(T dato){
	Nodo<T>* actual = primero;
	    
    while (actual != nullptr) {
        if (actual->getDato() == dato) {
            return actual;
        }
        actual = actual->getSiguiente();
    }
    
    return nullptr;
}


template<typename T>
void ListaDoble<T>::modificar(T dato, T nuevoDato){
	Nodo<T>* nodo = buscar(dato);
    if (nodo != NULL) {
        nodo->setDato(nuevoDato);
        std::cout << "Elemento actualizado correctamente." << std::endl;
    } else {
        std::cout << "Elemento no encontrado." << std::endl;
    }
}


template<typename T>
void ListaDoble<T>::eliminar(T dato){
    Nodo<T>* nodo = buscar(dato);
    
    if (nodo != nullptr) {
        if (nodo == primero && nodo == ultimo) {
            primero = nullptr;
            ultimo = nullptr;
        } else if (nodo == primero) {
            primero = nodo->getSiguiente();
            primero->setAnterior(nullptr);
        } else if (nodo == ultimo) {
            ultimo = nodo->getAnterior();
            ultimo->setSiguiente(nullptr);
        } else {
            nodo->getAnterior()->setSiguiente(nodo->getSiguiente());
            nodo->getSiguiente()->setAnterior(nodo->getAnterior());
        }
        delete nodo;
        std::cout << "Elemento eliminado correctamente." << std::endl;
    } else {
        std::cout << "Elemento no encontrado." << std::endl;
    } 	
}


template<typename T>
void ListaDoble<T>::mostrar(){
	Nodo<T>* actual = primero;
	
	if (actual == NULL) {
		std::cout << "Sin registros, vuelva mas tarde :)" << std::endl;
	}
	
    while (actual != NULL) {
        std::cout << actual->getDato() << std::endl;
        actual = actual->getSiguiente();
    }
    
    std::cout << std::endl;
}

template<typename T>
Nodo<T>* ListaDoble<T>::getPrimero() {
	return primero;
}

template<typename T>
Nodo<T>* ListaDoble<T>::getUltimo() {
	return ultimo;
}

template<typename T>
void ListaDoble<T>::setPrimero(Nodo<T>* primero) {
	this->primero = primero;
}

template<typename T>
void ListaDoble<T>::setUltimo(Nodo<T>* ultimo) {
	this->ultimo = ultimo;
}