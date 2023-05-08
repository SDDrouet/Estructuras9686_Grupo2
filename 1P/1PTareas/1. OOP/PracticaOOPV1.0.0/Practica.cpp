#include <iostream>
#include "PersonaController.cpp"
#include "Validacion.h"
#include <string>
using namespace std;

int main(){
    string nombre;
    string apellido;
    int edad;

    nombre = "Nahir";
    apellido = "Carrera";
    edad = 20;

    Persona estudiante = Persona(nombre, apellido, edad);
    cout << estudiante.toString() <<endl;

    estudiante.setNombre(Validacion::validarAlfabeticamente("Ingrese el nuevo nombre: "));
    estudiante.setApellido(Validacion::validarAlfabeticamente("Ingrese el nuevo apellido: "));
    estudiante.setEdad(Validacion::validarNumericamente("Ingrese la nueva edad: "));

    cout << estudiante.toString() <<endl;
    return 0;
}