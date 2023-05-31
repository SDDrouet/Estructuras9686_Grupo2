/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
 * 
 *******************************************************************************/ 

#include "FraccionOperacion.h"
#include "string.h"
#include <typeinfo>

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion::getDato1()
// Purpose:    Implementation of FraccionOperacion::getDato1()
// Return:     T
////////////////////////////////////////////////////////////////////////
template <typename T>
T FraccionOperacion<T>::getDato1(void)
{
   return dato1;
}

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion::setDato1(T newDato1)
// Purpose:    Implementation of FraccionOperacion::setDato1()
// Parameters:
// - newDato1
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void FraccionOperacion<T>::setDato1(T newDato1)
{
   dato1 = newDato1;
}

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion<T>::getDato2()
// Purpose:    Implementation of FraccionOperacion<T>::getDato2()
// Return:     T
////////////////////////////////////////////////////////////////////////
template <typename T>
T FraccionOperacion<T>::getDato2(void)
{
   return dato2;
}

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion<T>::setDato2(T newDato2)
// Purpose:    Implementation of FraccionOperacion<T>::setDato2()
// Parameters:
// - newDato2
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void FraccionOperacion<T>::setDato2(T newDato2)
{
   dato2 = newDato2;
}

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion<T>::FraccionOperacion<T>(T nuevoDato1, T nuevoDato2)
// Purpose:    Implementation of FraccionOperacion<T>::FraccionOperacion<T>()
// Parameters:
// - nuevoDato1
// - nuevoDato2
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T>
FraccionOperacion<T>::FraccionOperacion(T nuevoDato1, T nuevoDato2)
 : dato1(nuevoDato1), dato2(nuevoDato2) {};

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion<T>::~FraccionOperacion<T>()
// Purpose:    Implementation of FraccionOperacion<T>::~FraccionOperacion<T>()
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T>
FraccionOperacion<T>::~FraccionOperacion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion::procesoFloat()
// Purpose:    Implementation of FraccionOperacion::procesoFloat()
// Return:     float
////////////////////////////////////////////////////////////////////////
template <typename T>
float FraccionOperacion<T>::procesoFloat1(void)
{	
	return (dato1.getNumerador()*dato2.getDenominador() + dato2.getNumerador()*dato1.getDenominador())
   					/ (dato1.getDenominador()*dato2.getDenominador());
}

template <typename T>
float FraccionOperacion<T>::procesoFloat2(void)
{	
	return dato1 + dato2;
}




////////////////////////////////////////////////////////////////////////
// Name:       FraccionOperacion<T>::procesoFraccion()
// Purpose:    Implementation of FraccionOperacion<T>::procesoFraccion()
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////
template <typename T>
Fraccion FraccionOperacion<T>::proceso1(void){
	Fraccion frac;
	frac.setNumerador(this->dato1.getNumerador()*this->dato2.getDenominador() + this->dato2.getNumerador()*this->dato1.getDenominador());
	frac.setDenominador(this->dato1.getDenominador()*this->dato2.getDenominador());
	return frac;
}

template <typename T>
Fraccion FraccionOperacion<T>::proceso2(void){
	
	Fraccion fr;
    const int precision = 100000;  // precision of 5 decimal places
    int numerator = (dato1 + dato2) * precision;
    int denominator = precision;
     
    fr.setNumerador(numerator);
	fr.setDenominador(denominator);
    
    return fr; 
}