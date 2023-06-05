/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
 *******************************************************************************/ 
#pragma once
#include "Nodo.h"

class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
		bool listaVacia(){
			return (this->primero==NULL);
		}

	public:
		Lista ();
		void insertarPorCabeza(int);
		void insertarPorCola(int);
		void eliminarPorCabeza();
		void eliminarPorCola();
		void buscarElemento(int);
		void modificarPrimeraOcurrencia(int,int);
		void mostrarLista();
		Nodo* getPrimero();
		Nodo* getActual();
		void setPrimero(Nodo*);
		void setActual(Nodo*);
		int sumarLista();
		bool estaVacia();
};
