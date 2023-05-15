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