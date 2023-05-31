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
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

template <typename T>
class Operaciones{
	private:
		Matriz<T> _matriz;
		
	public:
		Operaciones();
		Operaciones(Matriz<T>&);
		~Operaciones();
		void encerar();
		void generar();
		void procesarMulti(Matriz<T>&, Matriz<T>&);
		void imprimir();
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
	T **matriz = _matriz.getMatriz();
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
	T **matriz = _matriz.getMatriz();
	
	for(int i=0;i<dim;i++){
		for(int j=0;j< dim;j++){
			if (typeid(T) == typeid(int)) {
				printf("%d\t",*(*(matriz+i)+j));
		    } else {
		        printf("%f\t",*(*(matriz+i)+j));
		    }								
		}
		printf("\n");
	}
}

template <typename T>
void Operaciones<T>::procesarMulti(Matriz<T> &objMatriz1, Matriz<T> &objMatriz2) {
	int dim = _matriz.getDim();
	T **matriz1 = objMatriz1.getMatriz();
	T **matriz2 = objMatriz2.getMatriz();
	T **matrizR = _matriz.getMatriz();
	
	for(int i=0;i<dim;i++) {
		for(int j=0;j<dim;j++) {
			for(int k=0;k<dim;k++) {
				*(*(matrizR + i) + j) = *(*(matrizR + i) + j)
							+ (*(*(matriz1 + i ) + k) * (*(*(matriz2 + k) + j)));
			}
		}
	}
}

int generarAleatoriosEntero(int min, int max) {
	return min + (rand() % (max - min + 1));
}

float generarAleatoriosFloat(int imin, int imax) {
	float fmin = (float)imin;
	float fmax = (float)imax;
	float frango = fmax - fmin;
	float fescala = static_cast<float>(rand()) / RAND_MAX;
	return fmin + fescala * frango;
}

template <typename T>
void Operaciones<T>::generar(){
	T numeroAleatorio;
	int min = 0, max = 10;
	for (int i = 0; i < _matriz.getDim(); i++) {
		for (int j = 0; j < _matriz.getDim(); j++) {
			if (typeid(T) == typeid(int)) {
        		numeroAleatorio = generarAleatoriosEntero(min, max);
		    } else {
		        numeroAleatorio = generarAleatoriosFloat(min, max);
		    }	
		    *(*(_matriz.getMatriz() + i) + j) = numeroAleatorio;		    	
		}
	}
}

#endif