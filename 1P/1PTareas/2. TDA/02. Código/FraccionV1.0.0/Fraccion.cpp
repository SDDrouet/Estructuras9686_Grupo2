/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  HP
 * Modified: lunes, 8 de mayo de 2023 18:00:00
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

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
// Name:       Fraccion::proceso(Fraccion obj1, Fraccion obj2)
// Purpose:    Implementation of Fraccion::proceso()
// Parameters:
// - obj1
// - obj2
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Fraccion::proceso(Fraccion obj1, Fraccion obj2)
{
   Fraccion fr((obj1.getNumerador()*obj2.getDenominador() + obj2.getNumerador()*obj1.getDenominador()), (obj1.getDenominador()*obj2.getDenominador()));
   return fr;
}