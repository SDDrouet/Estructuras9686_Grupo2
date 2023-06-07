/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Fecha.h"
class Persona
{
	public:
		Persona();
		~Persona();
		Persona(std::string, std::string, std::string);
        Persona(std::string, std::string);
		std::string getNombre(void);
        std::string getApellido(void);
        std::string getCedula(void);
        Fecha getFechaIngreso(void);
        
        
        void setNombre(std::string);
        void setApellido(std::string);
        void setCedula(std::string);
        void setFechaIngreso(Fecha);
        
        friend std::ostream& operator<<(std::ostream&, const Persona&);	
	private:
		std::string nombre;
        std::string apellido;
        std::string cedula;
        Fecha fechaIngreso;	
};

#endif