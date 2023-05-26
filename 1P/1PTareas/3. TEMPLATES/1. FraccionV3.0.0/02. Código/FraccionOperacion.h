/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
 * 
 *******************************************************************************/ 

#ifndef FRACCIONOPERACION_H
#define FRACCIONOPERACION_H

#include "Fraccion.h"

template <typename T>
class FraccionOperacion
{
public:
   T getDato1(void);
   void setDato1(T newDato1);
   T getDato2(void);
   void setDato2(T newDato2);
   FraccionOperacion(T nuevoDato1, T nuevoDato2);
   ~FraccionOperacion();
   
   float procesoFloat1(void);
   float procesoFloat2(void);
   Fraccion proceso1(void);
   Fraccion proceso2(void);

private:
   T dato1;
   T dato2;


};

#endif