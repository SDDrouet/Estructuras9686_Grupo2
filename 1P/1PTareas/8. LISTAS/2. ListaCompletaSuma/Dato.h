/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
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