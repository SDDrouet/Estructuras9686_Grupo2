/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/ 

#ifndef FRACCIONESRESULTADO_H
#define FRACCIONESRESULTADO_H

#include "Operacion.h"
#include "Resultado.h"

class FraccionesResultado : public Operacion, public Resultado
{
	public:
		float proceso(Fraccion obj1, Fraccion obj2, bool esFloat) override;
   		Fraccion proceso(float dato1, float dato2) override;
   		float proceso(float dato1, float dato2, bool esFloat) override;
   		Fraccion proceso(Fraccion obj1, Fraccion obj2) override;
   		std::string mostrar(Fraccion fraccion) override;
   		
	protected:
};

#endif