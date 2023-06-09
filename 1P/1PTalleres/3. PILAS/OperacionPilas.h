/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/06/23 10::00
 * Fecha de modificacion: 09/06/23 10:36
 * Enunciado:
 * Implementación de plantillas, interfaces y contador de pares en pilas
 *
 *******************************************************************************/ 
#ifndef OPERACIONPILAS_H
#define OPERACIONPILAS_H

#include "Nodo.h"

template <typename T>
class OperacionPilas{
	public:
		virtual void push(T)=0;
		virtual T pop()=0;
		virtual T peek()=0;
		virtual bool isEmpty()=0;
};

#endif