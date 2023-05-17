/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 14/05/23 23:20
 * Enunciado:
 * Ejemplo de manejo de plantillas
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