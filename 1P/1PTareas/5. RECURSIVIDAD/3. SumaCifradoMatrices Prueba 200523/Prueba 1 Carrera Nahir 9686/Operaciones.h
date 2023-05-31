/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Nahir Carrera
 * Fecha de creacion: 22/05/23 09:20
 * Fecha de modificacion: 22/05/23 18:20
 * Enunciado:
 * SUumar recursivamente los elementos de una matriz y cifrar a valor de un dígito
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
		Operaciones(int);
		~Operaciones();	
		void encerar();
		void generar();
		void procesarSuma(Matriz<T>&);
		void sumaRecursiva(T**, int, int, int);
		T reducirCifra(T);
		T getResultado(void);
		void imprimir();
		
	private:
		Matriz<T> _matriz;
		T resultado;
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
Operaciones<T>::Operaciones(int res){
	this->resultado = res;
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
void Operaciones<T>::procesarSuma(Matriz<T>& objMatriz) {
    int dim = objMatriz.getDim();
    T** matriz1 = objMatriz.getMatriz();
    sumaRecursiva(matriz1, dim - 1, dim - 1, dim); // Llamada a la función sumaRecursivaMatrices
}

template <typename T>
T Operaciones<T>::reducirCifra(T valor){
	if (valor >= 10 && valor <= 99) {
        int digito1 = valor / 10;
        int digito2 = valor % 10;
        return digito1 + digito2;
    } else {
        return valor; // Valor no es de dos cifras
    }
}

template <typename T>
void Operaciones<T>::sumaRecursiva(T** matrizSuma, int fila, int columna, int dim) {
    // caso base para salir de la función recursiva
	if (fila >= 0 && columna >= 0) {
        std::cout << resultado << "+" << *(*(matrizSuma + fila) + columna) << std::endl;
        resultado += *(*(matrizSuma + fila) + columna);
        std::cout << "= " << resultado << std::endl;;
        resultado = reducirCifra(resultado);
        std::cout << "cifrado = " << resultado << std::endl;
        sumaRecursiva(matrizSuma, fila, columna-1, dim);
        if(columna==dim-1){
        	sumaRecursiva(matrizSuma, fila-1, columna, dim);
		}
	}
}	


template <typename T>
T Operaciones<T>::getResultado(){
	return resultado;
}

template <typename T>
void Operaciones<T>::generar(){
	srand(time(NULL));
	for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			*(*(_matriz.getMatriz()+i)+j)=rand()%10;
		}
	}	
}

#endif