/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 09/05/23 16:54
 * Enunciado:
 * Realizar las distintas implementaciones de funciones con parametros y
 * retornos abstractos y primitivos
 *******************************************************************************/ 

#include "Fraccion.h"
#include <iostream>
#include <string>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(float num, float den)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - num
// - den
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(float num, float den)
{
   this->numerador = num;
   this->denominador = den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(float num, float den)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - num
// - den
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(float newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(float newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::mostrar()
// Purpose:    Implementation of Fraccion::mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////

string Fraccion::mostrar(void)
{
	if(this->getDenominador() == 0){
		return "nan";
	}else{
		return (to_string(this->getNumerador()) + "/" + to_string(this->getDenominador())); 
	}
  
}
