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
#ifndef NODO_H
#define NODO_H

template <typename T>
class Nodo{
	public:
		Nodo();
		~Nodo();
		Nodo(T);
		void setDato(T);
		void setSiguiente(Nodo*);		
		T getDato(void);
		Nodo<T>* getSiguiente(void);
		void setAnterior(Nodo*);
		Nodo<T>* getAnterior(void);
		
	private:
		T dato;
		Nodo* siguiente;
		Nodo* anterior;
};

#endif