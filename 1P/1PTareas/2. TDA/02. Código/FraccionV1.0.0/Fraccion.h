/***********************************************************************
 * Module:  Fraccion.h
 * Author:  HP
 * Modified: lunes, 8 de mayo de 2023 18:00:00
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h

class Fraccion
{
public:
   Fraccion(float num, float den);
   ~Fraccion();
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion proceso(Fraccion obj1, Fraccion obj2);
   float proceso4(float numerador, float denominador);
   

protected:
private:
   float numerador;
   float denominador;


};

#endif