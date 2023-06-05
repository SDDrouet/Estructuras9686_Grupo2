/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#ifndef FECHA_H
#define FECHA_H
#include <iostream>
class Fecha
{
	public:
		Fecha();
		~Fecha();
		friend std::ostream& operator<<(std::ostream&, const Fecha&);
	private:
		int dia;
		int mes;
		int anio;
		int hora;
		int minuto;
		int segundo; 
};

#endif