/***************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 09/05/23 16:54
 * Enunciado:
 * Realizar las distintas implementaciones de funciones con parametros y
 * retornos abstractos y primitivos
 ***************************/
/***********************************************************************
 * Module:  FraccionControlador.h
 * Author:  HP
 * Modified: martes, 9 de mayo de 2023 19:16:10
 * Purpose: Declaration of the class FraccionControlador
 ***********************************************************************/

#if !defined(__TDA_FraccionControlador_h)
#define __TDA_FraccionControlador_h

#include "Fraccion.h"
class FraccionControlador
{
public:
	static float proceso1(Fraccion fraccion1, Fraccion fraccion2); 
   	static Fraccion proceso2(Fraccion fraccion1, Fraccion fraccion2);
   	static Fraccion proceso3(float fnumero1, float fnumero2);
   	static float proceso4(float fnumero1, float fnumero2);
   
};

#endif