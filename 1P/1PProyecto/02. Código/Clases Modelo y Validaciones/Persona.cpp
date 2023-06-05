/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include "Persona.h"
#include <iostream>
Persona::Persona(){
}

Persona::~Persona(){
}

Persona::Persona(std::string nombre, std::string apellido, std::string cedula, Fecha fechaIngreso){
    this->nombre = nombre;
    this->apellido = apellido;
    this->cedula = cedula;
    this->fechaIngreso = fechaIngreso;
}

std::string Persona::getNombre(){
    return nombre;
}
std::string Persona::getApellido(){
    return apellido;
}
std::string Persona::getCedula(){
    return cedula;
}
Fecha Persona::getFechaIngreso(){
    return fechaIngreso;
}
void Persona::setNombre (std::string nuevoNombre){
    this->nombre = nuevoNombre;
}
void Persona::setApellido(std::string nuevoApellido){
    this->apellido = nuevoApellido;
}
void Persona::setCedula(std::string nuevaCedula){
    this ->cedula = nuevaCedula;
}
void Persona::setFechaIngreso(Fecha nuevaFecha){
    this->fechaIngreso = nuevaFecha;
}

std::ostream& operator <<(std::ostream& os, const Persona& persona){
  os<<"[Persona -> nombre: "+persona.nombre+ " , apellido: "+persona.apellido+", cedula: "+
  persona.cedula + ", fecha de Ingreso: "<<persona.fechaIngreso<< " ]"<<std::endl;
  return os;
}
