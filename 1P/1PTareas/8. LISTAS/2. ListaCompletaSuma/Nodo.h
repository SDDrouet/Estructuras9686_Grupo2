/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
 *******************************************************************************/ 
#pragma once
#include <iostream>
#include <conio.h>

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo (int, Nodo*);
		Nodo (int);
		Nodo ();
		int getValor();
		Nodo* getSiguiente(); 
		void setValor(int);
		void setSiguiente(Nodo*);

	friend class Lista;
};