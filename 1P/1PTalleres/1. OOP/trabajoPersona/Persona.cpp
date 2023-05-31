#include "Persona.h"

using namespace std;

Persona::Persona(string& nombre, string& apellido, int edad)
    : nombre(nombre), apellido(apellido), edad(edad) {
}

Persona::~Persona() {
	
}

void Persona::setNombre(string& nombre) {
    this->nombre = nombre;
}

void Persona::setApellido(string& apellido) {
    this->apellido = apellido;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApellido() {
    return apellido;
}

int Persona::getEdad() {
    return edad;
}

string Persona::toString() {
	string persona = "Persona: {Nombre: " + getNombre() + ", Apellido: " + getApellido() + ", Edad: " + to_string(getEdad()) + "}";
	return persona;
}

