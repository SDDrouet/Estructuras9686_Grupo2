/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Nahir Carrera
 * Fecha de creacion: 22/05/23 09:20
 * Fecha de modificacion: 22/05/23 18:20
 * Enunciado:
 * SUumar recursivamente los elementos de una matriz y cifrar a valor de un dígito
 * 
 *******************************************************************************/ 

#include <iostream>
#include "Matriz.h"
#include "Operaciones.h"
#include "Dato.h"

void iniciar(int);

void iniciar(int dim){
	Matriz<int> matriz(dim);
	int resultado = 0;		
	
	Operaciones<int> operaciones1(matriz);			
	operaciones1.encerar();
	operaciones1.generar();
	operaciones1.imprimir();
	
	Operaciones<int> operaciones2(resultado);			
	operaciones2.procesarSuma(matriz);
	std::cout<<"\nResultado: "<<operaciones2.getResultado()<<std::endl;;	                       						
}
	
int main() {                         
	int dim;
	std::cout << "Ingrese la dimension de la matriz: (dimension maxima 9)" << std::endl;
	dim = Dato::ingresarDimension('2', '9');
	
	iniciar(dim);
	
	return 0;
}