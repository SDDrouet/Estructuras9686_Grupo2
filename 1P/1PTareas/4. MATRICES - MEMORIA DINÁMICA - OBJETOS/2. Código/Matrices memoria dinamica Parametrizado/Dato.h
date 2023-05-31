/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 20/05/23 23:09
 * Enunciado:
 * Ejemplo de punteros, matrices, multiplicacion y templates
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