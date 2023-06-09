/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/06/23 10::00
 * Fecha de modificacion: 09/06/23 10:36
 * Enunciado:
 * Implementación de plantillas, interfaces y contador de pares en pilas
 *
 *******************************************************************************/ 
#pragma once
#include "Nodo.h"
#include "OperacionPilas.h"
template <typename T>
class Pila: public OperacionPilas<T>
{
private:
	Nodo<T>* tope;
	int contadorPares;
	int contadorElementos;
public:
	Pila();
	~Pila();
	int getContadorPares(void);
	int getContadorElementos(void);
	
	void push(T)override;
	T pop()override;
	T peek()override;
	bool isEmpty()override;
	void contarPares();
};

