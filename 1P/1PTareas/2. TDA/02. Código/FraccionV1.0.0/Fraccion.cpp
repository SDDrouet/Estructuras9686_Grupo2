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
   // TODO : implement
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

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::proceso1(float obj1, float obj2)
// Purpose:    Implementation of Fraccion::proceso1()
// Parameters:
// - obj1
// - obj2
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////

Fraccion Fraccion::proceso(float obj1, float obj2)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::proceso2(Fraccion obj1, Fraccion obj2)
// Purpose:    Implementation of Fraccion::proceso2()
// Parameters:
// - obj1
// - obj2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::proceso2(Fraccion obj1, Fraccion obj2)
{
   return (obj1.getNumerador()*obj2.getDenominador() + obj2.getNumerador()*obj1.getDenominador())
   			/ (obj1.getDenominador()*obj2.getDenominador());
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::mostrar()
// Purpose:    Implementation of Fraccion::mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::mostrar(void)
{
   cout << this->getNumerador() << "/" << this->getDenominador();
}
////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::proceso4(float numerador,float denominador)
// Purpose:    Implementation of Fraccion::proceso()
// Parameters:
// - numerador
// - denominador
// Return:     fr
////////////////////////////////////////////////////////////////////////

float Fraccion::proceso4(float numerador,float denominador)
{
   float fr = numerador+denominador;
   return fr;
}
