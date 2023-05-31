/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 29/05/23 10:16
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "OperacionListas.h"
#include "Nodo.h"

template <typename T>
class ListaSimple: public OperacionListas<T>{
	private:
    	Nodo<T>* cabeza;
	public:
	    ListaSimple();
	    void insertarCabeza(T)override;
	    void insertarCola(T)override;
	    void buscar(T)override;
	    void eliminar(T)override;
	    void mostrar()override;
};

#endif