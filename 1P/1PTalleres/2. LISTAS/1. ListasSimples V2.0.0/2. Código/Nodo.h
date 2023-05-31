/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 29/05/23 10:16
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#ifndef NODO_H
#define NODO_H

template <typename T>
class Nodo{
	public:
		Nodo(T);
		void setDato(T);
		void setSiguiente(Nodo*);
		T getDato(void);
		Nodo* getSiguiente(void);
	private:
		T dato;
		Nodo* siguiente;
};

#endif