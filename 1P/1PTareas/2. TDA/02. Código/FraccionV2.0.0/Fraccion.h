/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/ 

#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h

class Fraccion
{
public:
	Fraccion();
   Fraccion(float num, float den);
   ~Fraccion();
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
	
protected:
private:
   float numerador;
   float denominador;


};

#endif