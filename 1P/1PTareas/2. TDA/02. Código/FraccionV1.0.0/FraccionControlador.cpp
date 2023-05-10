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
#include <cmath>


float FraccionControlador::proceso1(Fraccion fraccion1, Fraccion fraccion2){
	return (fraccion1.getNumerador()*fraccion2.getDenominador() + fraccion2.getNumerador()*fraccion1.getDenominador())
   			/ (fraccion1.getDenominador()*fraccion2.getDenominador());
}

Fraccion FraccionControlador::proceso2(Fraccion fraccion1, Fraccion fraccion2){
	Fraccion fr((fraccion1.getNumerador()*fraccion2.getDenominador() + fraccion2.getNumerador()*fraccion1.getDenominador()),
	(fraccion1.getDenominador()*fraccion2.getDenominador()));
	
	return fr;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

Fraccion floatToFraction(float num) {
    const int precision = 100000;  // precision of 5 decimal places
    int numerator = num * precision;
    int denominator = precision;
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor; 
    Fraccion fr(numerator, denominator);
    
    return fr;
}

Fraccion FraccionControlador::proceso3(float fnumero1, float fnumero2){
	float fnum, fden;
	float fx = fnumero1 + fnumero2;
	return floatToFraction(fx);
}

float FraccionControlador::proceso4(float fnumero1, float fnumero2){
	return fnumero1 + fnumero2;
}


