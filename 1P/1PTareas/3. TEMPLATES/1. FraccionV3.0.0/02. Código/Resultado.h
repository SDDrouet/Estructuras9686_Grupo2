/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
 * 
 *******************************************************************************/ 

#if !defined(__Fraccion_Resultado_h)
#define __Fraccion_Resultado_h

#include "Fraccion.h"
#include <string>

class Resultado
{
public:
   virtual std::string mostrar(Fraccion fraccion)=0;

protected:
private:

};

#endif