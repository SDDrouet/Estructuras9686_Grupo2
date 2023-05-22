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
	for (int i = 0; i < dim; i++) {
        free(*(matriz + i));
    }
    free(matriz);
}

template <typename T>
Matriz<T>::Matriz(int dim) {
	this->dim=dim;
	
	//segmentamos las filas
	matriz = (T**)malloc(dim * sizeof(T*));
	
	//Segmentamos las columnas
	for(int j = 0; j < dim; j++){
		*(matriz+j) = (T*)malloc(dim * sizeof(T));
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
