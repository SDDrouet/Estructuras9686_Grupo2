/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 29/05/23 10:16
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#include <iostream>
#include <string>
#include "Nodo.cpp"
#include "ListaSimple.cpp"
int main(int argc, char** argv) {
	//insertar int
	ListaSimple<int>* nuevaLista = new ListaSimple<int>();
	for(int i = 1; i <= 10; i++){
		nuevaLista->insertarCola(i);
		nuevaLista->insertarCabeza(i);
	}
	nuevaLista->mostrar();
	
	//insertar string
	ListaSimple<std::string>* lista = new ListaSimple<std::string>();
	lista->insertarCabeza("Nueva Cabeza");
	lista->insertarCola("Nueva Cola");
	lista->insertarCabeza("Cabeza 1");
	lista->insertarCola("Cola 1");
	lista->mostrar();	
}                                        