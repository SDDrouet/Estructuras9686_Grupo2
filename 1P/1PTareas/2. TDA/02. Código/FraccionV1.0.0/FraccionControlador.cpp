/***************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 09/05/23 16:54
 * Enunciado:
 * Realizar las distintas implementaciones de funciones con parametros y
 * retornos abstractos y primitivos
 ***************************/

#include "FraccionControlador.h"
#include "Fraccion.h"

float FraccionControlador::proceso1(Fraccion fraccion1, Fraccion fraccion2){
	return (fraccion1.getNumerador()*fraccion2.getDenominador() + fraccion2.getNumerador()*fraccion1.getDenominador())
   			/ (fraccion1.getDenominador()*fraccion2.getDenominador());
}

Fraccion FraccionControlador::proceso2(Fraccion fraccion1, Fraccion fraccion2){
	Fraccion fr((fraccion1.getNumerador()*fraccion2.getDenominador() + fraccion2.getNumerador()*fraccion1.getDenominador()),
	(fraccion1.getDenominador()*fraccion2.getDenominador()) );
	return fr;
}

Fraccion FraccionControlador::proceso3(float fnumero1, float fnumero2){
	Fraccion fr(1,2);
	return fr;
}

float FraccionControlador::proceso4(float fnumero1, float fnumero2){
	return fnumero1 + fnumero2;
}
