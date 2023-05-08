#include "Persona.h"
#include "Validador.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
	string nombre, apellido;	
	int edad;
	Validador v;
	
	cout << "Ingresa nombre: " << endl;
	nombre = v.pedirNombre();
	cout << "Ingresa apellido: " << endl;
	apellido = v.pedirNombre();
	edad = v.pedirEdad(0, 120);
	
    Persona persona(nombre, apellido, edad);
    
    cout << persona.toString() << endl;    
    
    return 0;
}
