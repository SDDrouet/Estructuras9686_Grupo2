/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 20/05/23 23:09
 * Fecha de modificacion: 20/05/23 23:09
 * Enunciado:
 * Ejemplo de punteros, matrices, Suma y templates
 * 
 *******************************************************************************/ 
#include <iostream>
#include "Matriz.h"
#include "Operaciones.h"
#include "Dato.h"

void iniciar(int);

void iniciar(int dim){
	Matriz<int> matriz1(dim), matriz2(dim), matrizR(dim);		
	
	Operaciones<int> operaciones1(matriz1);			
	operaciones1.encerar();
	operaciones1.generar();
	operaciones1.imprimir();
	
	Operaciones<int> operaciones2(matriz2);			
	operaciones2.encerar();         
	operaciones2.generar();
	operaciones2.imprimir();
	
	Operaciones<int> operaciones3(matrizR);			
	operaciones3.encerar();
	operaciones3.procesarSuma(matriz1, matriz2);
	operaciones3.imprimir();	                       						
}
	
int main() {                         
	int dim;
	std::cout << "Ingrese la dimension de la matriz: (dimension maxima 9)" << std::endl;
	dim = Dato::ingresarDimension('2', '9');
	
	iniciar(dim);
	
	return 0;
}