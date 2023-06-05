/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include <iostream>
#include <string>
#include "Dato.h"
#include "Fecha.h"
#include "Vehiculo.h"
#include "Persona.h"
int main(int argc, char** argv) {
	Fecha fechaActual;
	std::cout<<"Ingrese la placa del Vehiculo: ";
	std::string placa1 = Dato::ingresarPlacaEcuador();
	std::cout<<"Ingrese la cedula del propietario: ";
	std::string cedula1 = Dato::ingresarCedulaEcuador();
	Persona persona1("Nahir", "Carrera", cedula1, fechaActual);
	std::cout<<persona1<<std::endl;
	Vehiculo vehiculo1(persona1, placa1, "Negro", "DBX", "Aston Martin");
	std::cout<<vehiculo1<<std::endl;
	
    return 0;
}                                        