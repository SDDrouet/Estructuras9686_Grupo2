/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/ 

#include "FraccionesResultado.h"
#include "Fraccion.h"
#include <cmath>
#include <iostream>
#include <string>
#include <string.h>

float FraccionesResultado::proceso(Fraccion obj1, Fraccion obj2, bool esFloat){
	return (obj1.getNumerador()*obj2.getDenominador() + obj2.getNumerador()*obj1.getDenominador())
   			/ (obj1.getDenominador()*obj2.getDenominador());
}

Fraccion FraccionesResultado::proceso(Fraccion obj1, Fraccion obj2){
	Fraccion frac;
	frac.setNumerador(obj1.getNumerador()*obj2.getDenominador() + obj2.getNumerador()*obj1.getDenominador());
	frac.setDenominador(obj1.getDenominador()*obj2.getDenominador());
	
	return frac;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

Fraccion floatToFraction(float num) {
	Fraccion fr;
    const int precision = 100000;  // precision of 5 decimal places
    int numerator = num * precision;
    int denominator = precision;
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor; 
    fr.setNumerador(numerator);
	fr.setDenominador(denominator);
    
    return fr;
}

Fraccion FraccionesResultado::proceso(float dato1, float dato2){
	return floatToFraction(dato1 + dato2);
}

float FraccionesResultado::proceso(float dato1, float dato2, bool esFloat){
	return dato1 + dato2;
}

std::string FraccionesResultado::mostrar(Fraccion fraccion) {
	if(fraccion.getDenominador() <= 0){
		return "nan";
		
	}else{
		std::string resultado = std::to_string(fraccion.getNumerador()) + "/" + std::to_string(fraccion.getDenominador());
		return resultado;
	}
}