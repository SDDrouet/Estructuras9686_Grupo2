/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 20/05/23 23:09
 * Fecha de modificacion: 20/05/23 23:09
 * Enunciado:
 * Ejemplo de punteros, matrices, multiplicacion y templates
 * 
 *******************************************************************************/ 

#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

template <typename T>
class Matriz {
	private:
		T **matriz;
		int dim;
		
	public:
		Matriz();
		~Matriz();
		Matriz(int);
		int getDim();
		void setDim(int);
		T **getMatriz();
		void setMatriz(T **);
};

template <typename T>
Matriz<T>::Matriz() {
	matriz = nullptr;
	dim = 0;
}

template <typename T>
Matriz<T>::~Matriz() {
	if (matriz != nullptr) {
		for (int i = 0; i < dim; i++) {
			delete[] matriz[i];
		}
		delete[] matriz;
	}
}

template <typename T>
Matriz<T>::Matriz(int dim) {
	this->dim = dim;
	
	// Segmentamos las filas
	matriz = new T*[dim];
	
	// Segmentamos las columnas
	for (int i = 0; i < dim; i++) {
		matriz[i] = new T[dim];
	}
}

template <typename T>
int Matriz<T>::getDim() {
	return dim;
}

template <typename T>
void Matriz<T>::setDim(int dim) {
	this->dim = dim;
}

template <typename T>
T **Matriz<T>::getMatriz() {
	return matriz;
}

template <typename T>
void Matriz<T>::setMatriz(T **matriz1) {
	this->matriz = matriz1;
}

#endif
