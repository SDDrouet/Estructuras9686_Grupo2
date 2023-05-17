/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
 * 
 *******************************************************************************/ 

#include "FraccionesResultado.h"
#include "Fraccion.h"
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

FraccionesResultado::FraccionesResultado() {
	
}


std::string FraccionesResultado::mostrar(Fraccion fraccion) {
	if(fraccion.getDenominador() <= 0){
		return "nan";
		
	}else{
		std::string resultado = std::to_string(fraccion.getNumerador()) + "/" + std::to_string(fraccion.getDenominador());
		return resultado;
	}
}