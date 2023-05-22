/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 21/05/23 19:57
 * Fecha de modificacion: 21/05/23 19:57
 * Enunciado:
 * Ejemplo de multiplicación de 2 matrices utliza (punteros, matrices y templates)
 * 
 *******************************************************************************/ 

#ifndef DATO_H
#define DATO_H

class Dato
{
	public:
		static int ingresarMenuOpcion(char, char);
		static int ingresarEntero(void);
   		static float ingresarFloat(void);
   		static int ingresarDimension(char cnum1, char cnum2);
	protected:
};

#endif