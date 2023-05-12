/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/ 

#if !defined(__Fraccion_Resultado_h)
#define __Fraccion_Resultado_h

#include "Fraccion.h"
#include <string>

class Resultado
{
public:
   virtual string mostrar(Fraccion fraccion)=0;

protected:
private:

};

#endif