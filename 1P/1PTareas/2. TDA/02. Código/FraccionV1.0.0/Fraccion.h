/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 09/05/23 16:54
 * Enunciado:
 * Realizar las distintas implementaciones de funciones con parametros y
 * retornos abstractos y primitivos
 *******************************************************************************/ 

#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h
#include <string>
using namespace std;
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
   string mostrar(void);

protected:
private:
   float numerador;
   float denominador;


};

#endif