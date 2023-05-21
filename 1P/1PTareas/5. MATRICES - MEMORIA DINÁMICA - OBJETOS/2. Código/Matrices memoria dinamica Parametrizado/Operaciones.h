/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 20/05/23 23:09
 * Fecha de modificacion: 20/05/23 23:09
 * Enunciado:
 * Ejemplo de punteros, matrices, multiplicacion y templates
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
		//void procesarPot(int);
		void procesarMulti(Matriz<T>&, Matriz<T>&);
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


template <typename T>
void Operaciones<T>::procesarMulti(Matriz<T> &objMatriz1, Matriz<T> &objMatriz2) {
	int dim = _matriz.getDim();
	int **matriz1 = objMatriz1.getMatriz();
	int **matriz2 = objMatriz2.getMatriz();
	int **matrizR = _matriz.getMatriz();
	
	for(int i=0;i<dim;i++) {
		for(int j=0;j<dim;j++) {
			for(int k=0;k<dim;k++) {
				*(*(matrizR + i) + j) = *(*(matrizR + i) + j)
							+ (*(*(matriz1 + i ) + k) * (*(*(matriz2 + k) + j)));
			}
		}
	}
}

template <typename T>
void Operaciones<T>::generar(){
	srand(time(NULL));
	for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			*(*(_matriz.getMatriz()+i)+j)=rand()%3;
		}
	}	
}

#endif