/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
 * 
 *******************************************************************************/ 

#ifndef FRACCIONESRESULTADO_H
#define FRACCIONESRESULTADO_H

#include "Resultado.h"

class FraccionesResultado : public Resultado
{
	public:
		FraccionesResultado();
   		std::string mostrar(Fraccion fraccion) override;

	protected:
};

#endif