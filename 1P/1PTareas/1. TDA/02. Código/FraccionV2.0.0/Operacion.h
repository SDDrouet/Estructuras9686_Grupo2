/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/  

#if !defined(__Fraccion_Operacion_h)
#define __Fraccion_Operacion_h

#include "Fraccion.h"

class Operacion
{
public:
   virtual float proceso(Fraccion obj1, Fraccion obj2, bool esFloat)=0;
   virtual Fraccion proceso(float dato1, float dato2)=0;
   virtual float proceso(float dato1, float dato2, bool esFloat)=0;
   virtual Fraccion proceso(Fraccion obj1, Fraccion obj2)=0;

protected:
private:

};

#endif