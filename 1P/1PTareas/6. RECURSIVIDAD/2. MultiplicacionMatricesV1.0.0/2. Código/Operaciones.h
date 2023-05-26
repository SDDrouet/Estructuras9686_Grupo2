/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 21/05/23 19:57
 * Fecha de modificacion: 21/05/23 19:57
 * Enunciado:
 * Ejemplo de multiplicación de 2 matrices utliza (punteros, matrices y templates)
 * 
 *******************************************************************************/ 

#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include "Operaciones.h"

template <typename T> 
class Operaciones{
	public:
		Operaciones();
		Operaciones(Matriz<T>&);
		~Operaciones();	
		void encerar();
		void generar();
		void procesarMultiRecursivo(Matriz<T> &, Matriz<T> &, int, int, int);
		void imprimir();
		
	private:
		Matriz<T> _matriz;
};

template <typename T>
Operaciones<T>::Operaciones(){
}

template <typename T>
Operaciones<T>::~Operaciones(){
}

template <typename T> 
Operaciones<T>::Operaciones(Matriz<T>& m){
	this->_matriz=m;
}

template <typename T>
void Operaciones<T>::encerar() {
	int dim = _matriz.getDim();
	int **matriz = _matriz.getMatriz();
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){				
			*(*(matriz+i)+j)=0;
		}
	}
}

template <typename T>
void Operaciones<T>::imprimir(){
	printf("La matriz es:\n");
	int dim = _matriz.getDim();
	int **matriz = _matriz.getMatriz();
	for(int i=0;i<dim;i++){
		for(int j=0;j< dim;j++){
			printf("%d\t",*(*(matriz+i)+j));			
		}
		printf("\n");
	}
}
// multiplicación de matrices cuadradas con recursividad
template <typename T>
void Operaciones<T>::procesarMultiRecursivo(Matriz<T> &objMatriz1, Matriz<T> &objMatriz2, int columna, int fila, int pivote) {
	int dim = _matriz.getDim();
	T **matriz1 = objMatriz1.getMatriz();
	T **matriz2 = objMatriz2.getMatriz();
	T **matrizR = _matriz.getMatriz();
	
	//Caso base para salir de la función recursiva 
	if ((columna >= 0) && (fila >= 0) && (pivote >= 0)) {
		*(*(matrizR + columna) + fila) += (*(*(matriz1 + columna ) + pivote) * (*(*(matriz2 + pivote) + fila)));
		//std::cout << columna << ", " << fila << ", " << pivote << std::endl;
		procesarMultiRecursivo(objMatriz1, objMatriz2, columna, fila, pivote - 1);
		
		if (pivote == dim - 1) {
			procesarMultiRecursivo(objMatriz1, objMatriz2, columna, fila - 1, pivote);
			if (fila == dim - 1) {
				procesarMultiRecursivo(objMatriz1, objMatriz2, columna - 1, fila, pivote);	
			}			
		}	
	}

		
}



template <typename T>
void Operaciones<T>::generar(){
	//srand(time(NULL));
	for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			*(*(_matriz.getMatriz()+i)+j)=rand()%5;
		}
	}	
}

#endif