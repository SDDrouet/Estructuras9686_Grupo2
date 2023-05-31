#include "Validador.h"

#include <iostream>
#include <conio.h>
#include <cctype>
#include <string>

using namespace std;

Validador::Validador() {

}

string Validador::pedirNombre() {
	string nombre;
    char c;

    while ((c = getch()) != '\r') {
        if (c == 8 && !nombre.empty()) { // Si se presiona la tecla de retroceso y hay texto ingresado
            nombre.pop_back(); // Eliminar el último carácter ingresado
            cout << "\b \b"; // Mover el cursor hacia atrás y sobrescribir con un espacio
        } else if (isalpha(c) || isspace(c)) { // Si el carácter es alfabético o un espacio en blanco
            nombre += c; // Agregar el carácter a la cadena de texto
            cout << c; // Mostrar el carácter en la consola
        }
    }
    
    cout << endl;
		    
    return nombre;		    
}

int Validador::pedirEntero() {	
	int entero;
	string input;
    char c;
    bool signo_ingresado, enteroValido;
    
    do {    	
    	enteroValido = true;
    	while ((c = getch()) != '\r') {
	        if (c == 8 && !input.empty()) { // Si se presiona la tecla de retroceso y hay texto ingresado
	            input.pop_back(); // Eliminar el último carácter ingresado
	            if (input.empty() || input[0] != '-') { // Si no hay caracteres ingresados o el primer carácter no es el signo "-"
	                signo_ingresado = false; // Reiniciar la variable booleana
	            }
	            cout << "\b \b"; // Mover el cursor hacia atrás y sobrescribir con un espacio
	        } else if (isdigit(c) || c == '-' && !signo_ingresado && input.empty()) { // Si el carácter es un dígito o el signo menos y no hay caracteres ingresados todavía
	            input += c; // Agregar el carácter a la cadena de texto
	            if (c == '-') { // Si se ingresó el signo "-"
	                signo_ingresado = true; // Indicar que se ingresó el signo "-"
	            }
	            cout << c; // Mostrar el carácter en la consola
	        }
	    }
	    cout << endl;
	    
	    try {
	    	entero = stoi(input); //Transforma de string a int
		} catch (std::invalid_argument &e) {
			cout << "Numero no valido, intete de nuevo" << endl;
			enteroValido = false;
			signo_ingresado = false;
			if (!input.empty()) {
				input.pop_back();
			}
		}
	} while (!enteroValido);

    return entero;
}

bool validarEdad(int edad, int min, int max) {
	return edad >= min && edad <= max;
}

int Validador::pedirEdad(int min, int max) {
	int edad;
	cout << "Ingresa edad: " << endl;
	edad = pedirEntero();
	
	while (!validarEdad(edad, min, max)) {
        cout << "Edad invalida. Ingresa solo numeros entre "<< min << " y " << max << "." << endl;
        cout << "Ingresa edad: ";
        edad = pedirEntero();
    }
	
	return edad;
}

