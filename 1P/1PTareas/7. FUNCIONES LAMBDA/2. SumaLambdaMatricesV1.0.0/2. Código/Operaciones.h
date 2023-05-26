/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 21/05/23 16:15
 * Fecha de modificacion: 21/05/23 16:15
 * Enunciado:
 * Ejemplo de suma de 2 matrices utliza (punteros, matrices, Suma y templates)
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
#include <functional>
#include "Operaciones.h"

template <typename T> 
class Operaciones{
	public:
		Operaciones();
		Operaciones(Matriz<T>&);
		~Operaciones();	
		void encerar();
		void generar();
		void imprimir();
		//void procesarPot(int);
		void procesarSuma(Matriz<T>&, Matriz<T>&);
		void sumaRecursivaMatrices(T**, T**, T**, int, int, int);
		
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

template<typename T>
void Operaciones<T>::procesarSuma(Matriz<T>& objMatriz1, Matriz<T>& objMatriz2) {
    int dim = _matriz.getDim();
    T** matriz1 = objMatriz1.getMatriz();
    T** matriz2 = objMatriz2.getMatriz();
    T** matrizR = _matriz.getMatriz();
	const std::function<void(int, int)> sumaRecursiva = [&](int f, int c){
		if ((f >= 0) && (c >= 0)) {
	        *(*(matrizR + f) + c) = *(*(matriz1 + f) + c) + *(*(matriz2 + f) + c); 
	        sumaRecursiva(f-1, c);
	        sumaRecursiva(f, c-1);
	    }
	};
	sumaRecursiva(dim - 1, dim - 1);
}

template <typename T>
void Operaciones<T>::generar(){
	//srand(time(NULL));
	for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			*(*(_matriz.getMatriz()+i)+j)=rand()%10;
		}
	}	
}

#endif