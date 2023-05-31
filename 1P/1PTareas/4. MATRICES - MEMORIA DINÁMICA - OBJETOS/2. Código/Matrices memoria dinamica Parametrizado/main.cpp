/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 20/05/23 23:09
 * Fecha de modificacion: 20/05/23 23:09
 * Enunciado:
 * Ejemplo de punteros, matrices, multiplicacion y templates
 * 
 *******************************************************************************/ 

#include <iostream>
#include "Matriz.h"
#include "Operaciones.h"
#include "Dato.h"

template <typename T>
void iniciar(int dim){
	Matriz<T> matriz1(dim), matriz2(dim), matrizR(dim);
		
	Operaciones<T> operaciones1(matriz1);
	operaciones1.encerar();
	operaciones1.generar();
	std::cout << "\nMatriz1: " << std::endl;
	operaciones1.imprimir();
	
	Operaciones<T> operaciones2(matriz2);
	operaciones2.encerar();
	operaciones2.generar();
	std::cout << "\nMatriz2: " << std::endl;
	operaciones2.imprimir();

	Operaciones<T> operaciones3(matrizR);
	operaciones3.encerar();	
	operaciones3.procesarMulti(matriz1, matriz2);
	std::cout << "\nMatriz1 * Matriz2 = " << std::endl;
	operaciones3.imprimir();
}

int main() {
	int dim;
	
	std::cout << "Ingrese la dimension de la matriz: (dimension maxima 9)" << std::endl;
	dim = Dato::ingresarDimension('2', '9');
	
	std::cout << "Seleccione el tipo de dato de los elementos de la matriz:" << std::endl;
	std::cout << "0. Entero (int)" << std::endl;
	std::cout << "1. Decimal (float)" << std::endl;
	int opcion = Dato::ingresarMenuOpcion('0', '1');
	
	if (opcion == 0) {
		iniciar<int>(dim);
	} else if (opcion == 1) {
		iniciar<float>(dim);
	}
	
	return 0;
}
