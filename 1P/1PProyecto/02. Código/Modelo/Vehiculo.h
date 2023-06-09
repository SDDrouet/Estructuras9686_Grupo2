/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include "Persona.h"
#include "Fecha.h"
#include "ListaDoble.h"

class Vehiculo
{
	public:
		Vehiculo();
		~Vehiculo();
		Vehiculo(Persona, std::string, std::string, std::string, std::string, int);
		Vehiculo(std::string);
        Persona getPropietario(void);
        std::string getPlaca(void);
        std::string getColor(void);
        std::string getModelo(void);
        std::string getMarca(void);
        int getAnioFabricacion(void);
        
        void setPropietario(Persona);
        void setPlaca(std::string);
        void setColor(std::string);
        void setModelo(std::string);
        void setMarca(std::string);
        void setAnioFabricacion(int);
        void guardarVehiculoEnArchivo( ); 	
        friend std::ostream& operator<<(std::ostream&, const Vehiculo&);
        std::string convertirAMayusculas(const std::string& texto);
		bool operator ==(const Vehiculo&) const;
		void modificarVehiculoEnArchivo(Vehiculo& ,  Vehiculo& ) ;
		void eliminarVehiculoEnArchivo(const std::string& );
		void buscarVehiculoEnArchivo(const std::string& placa1);
		void imprimirArchivo();
		void leerArchivo(ListaDoble<Vehiculo>*);
		void guardarVehiculos(ListaDoble<Vehiculo>*);

	private:
		Persona propietario;
        std::string placa;
        std::string color;
        std::string modelo;
        std::string marca;
        int anioFabricacion;
        Fecha fechaRegistro;
};

#endif