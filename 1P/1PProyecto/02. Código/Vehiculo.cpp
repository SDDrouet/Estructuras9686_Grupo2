/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include "Vehiculo.h"
#include <iostream>
Vehiculo::Vehiculo(){
}

Vehiculo::~Vehiculo(){
}

Vehiculo::Vehiculo(Persona propietario, std::string placa, std::string color, std::string modelo, std::string marca, int anio){
   this->propietario = propietario;
   this->placa = placa;
   this ->color = color;
   this->modelo = modelo;
   this->marca = marca;
   this->anioFabricacion = anio;
}

Vehiculo::Vehiculo(std::string placa){
   this->placa = placa;
}

Persona Vehiculo::getPropietario(){
   return propietario;
}

std::string Vehiculo::getPlaca(){
   return placa;
}
std::string Vehiculo::getColor(){
   return color;
}
std::string Vehiculo::getModelo(){
   return modelo;
}
std::string Vehiculo::getMarca(){
   return marca;
}

int Vehiculo::getAnioFabricacion(){
	return anioFabricacion;
}
void Vehiculo::setPropietario(Persona nuevoPropietario){
   this->propietario = nuevoPropietario;
}
void Vehiculo::setPlaca(std::string nuevaPlaca){
   this->placa = nuevaPlaca;
}
void Vehiculo::setColor(std::string nuevoColor){
   this->color = nuevoColor;
}
void Vehiculo::setModelo(std::string nuevoModelo){
   this->modelo = nuevoModelo;
}
void Vehiculo::setMarca(std::string nuevaMarca){
   this->marca = nuevaMarca;
}

void Vehiculo::setAnioFabricacion(int nuevoAnioFabricacion){
	this->anioFabricacion = nuevoAnioFabricacion;
}

std::ostream& operator <<(std::ostream& os, const Vehiculo& vehiculo){
	os<<"{ Vehiculo -> propietario: "<< vehiculo.propietario<< " ,placa:" 
	+vehiculo.placa+" , color: "+vehiculo.color+" , modelo: "+vehiculo.modelo
	+ " , marca: "+vehiculo.marca+ ", anio de fabricacion: "<< vehiculo.anioFabricacion<<"}"<<std::endl;
	return os;
}

bool Vehiculo::operator ==(const Vehiculo& vehiculo) const {
	return placa == vehiculo.placa;
}
