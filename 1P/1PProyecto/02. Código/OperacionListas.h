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
#ifndef OPERACIONLISTAS_H
#define OPERACIONLISTAS_H

#include "Nodo.h"

template <typename T>
class OperacionListas {
	public:
		virtual void insertar(T) = 0;
		virtual Nodo<T>* buscar(T) = 0;
		virtual void eliminar(T) = 0;
		virtual void mostrar() = 0;
		virtual void modificar(T, T) = 0;
};

#endif