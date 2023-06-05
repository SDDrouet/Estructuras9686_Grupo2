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
#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "OperacionListas.h"
#include "Nodo.h"

template <typename T>
class ListaDoble: public OperacionListas<T>{
	private:
    	Nodo<T>* primero;
    	Nodo<T>* ultimo;
    	
	public:
		~ListaDoble();
	    ListaDoble();
	    void insertar(T)override;
	    Nodo<T>* buscar(T)override;
	    void eliminar(T)override;
	    void mostrar()override;
	    void modificar(T, T)override;
};

#endif