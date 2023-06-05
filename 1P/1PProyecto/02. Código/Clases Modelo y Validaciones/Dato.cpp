/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 

#include "Dato.h"
#include <iostream>
#include <cstdlib> //funcion atoi()
#include <conio.h> //getch()

//Ingresar numeros de menu
int Dato::ingresarMenuOpcion(char cnum1, char cnum2) {		
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  std::cout << std::endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			std::cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (tecla >= cnum1 && tecla <= cnum2 && i<1) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  std::cout << tecla; // muestra el caracter ingresado en la consola
		}
	}

	return atoi(entrada); // convierte la entrada a un número int y lo retorna
}

//Ingresar dimensiones para matrices
int Dato::ingresarDimension(char cnum1, char cnum2) {		
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	int dim;
	
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  dim = atoi(entrada);
		  if (dim >= 2) {
			std::cout << std::endl;
		  	break;	
		  } else {
		  	std::cout << "La dimension no puede ser menor a 2" << std::endl;
		  }
		  
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			std::cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (tecla >= cnum1 && tecla <= cnum2 && i<1) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  std::cout << tecla; // muestra el caracter ingresado en la consola
		}
	}

	return dim; // convierte la entrada a un número int y lo retorna
}

//Ingresar numeros enteros
int Dato::ingresarEntero() {		
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  std::cout << std::endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			std::cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (isdigit(tecla) && i<12) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  std::cout << tecla; // muestra el caracter ingresado en la consola
		}
	}

	return atoi(entrada); // convierte la entrada a un número int y lo retorna
}


float Dato::ingresarFloat() {
	char *entrada = new char[30];
	char tecla;
	int i = 0;
	bool punto = false;
	int signoMenosPos = -1;
	while(true){
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r') { // si el usuario presiona Enter
		  std::cout << std::endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			std::cout << "\b \b"; // borra el último caracter de la consola
			if (entrada[i] == '.') { // si se eliminó un punto, reinicia el flag de punto
				punto = false;
			}
			if (i == signoMenosPos) { // si se eliminó el signo menos, reinicia la posición del signo menos
				signoMenosPos = -1;
			}
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (isdigit(tecla) && i < 15) { // si el usuario ingresa un dígito
			  entrada[i++] = tecla;
			  std::cout << tecla; // muestra el caracter ingresado en la consola
		} else if (tecla == '.' && !punto) { // si el usuario ingresa un punto y no se ha ingresado ya uno, o si ya se ingresó uno pero se eliminó
			  entrada[i++] = tecla;
			  punto = true; // marca que se ha ingresado un punto
			  std::cout << tecla;
		} else if (tecla == '-' && i == 0) { // si el usuario ingresa un signo menos al principio
			  entrada[i++] = tecla;
			  signoMenosPos = i - 1; // marca la posición del signo menos
			  std::cout << tecla;
		}
	}

	return atof(entrada); // convierte la entrada a un número float y lo retorna
  
}
bool Dato::validarLetra(char letra, int posicion) {
    const char* letrasPermitidas[] = {
        "ABUCHXOEWGILRVVNQSPYJKTZ",   // Letras permitidas para la primera posición
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ", // Letras permitidas para la segunda posición
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"  // Letras permitidas para la tercera posición
    };

    return strchr(letrasPermitidas[posicion], letra) != nullptr; //Busca la primera aparición del caracter
    															// en la cadena correspondiente a la posición de la letra
}

std::string Dato::ingresarPlacaEcuador(int cantidadNumeros) {
	char *entrada = new char[cantidadNumeros + 3];
	char tecla;
	int i = 0;
	while (true) {
		tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
		
		if (tecla == '\r' && i == cantidadNumeros + 3) { // si el usuario presiona Enter
		  std::cout << std::endl;
		  break;
		} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
			i--;						
			std::cout << "\b \b"; // borra el último caracter de la consola
			entrada[i] = 0; // elimina el último caracter de la entrada
		} else if (i<3 && validarLetra(tecla, i)) { // si el usuario ingresa un caracter (3 primeros caracteres de la placa)
			entrada[i++] = tecla;
			std::cout << tecla; // muestra el caracter ingresado en la consola
		} else if (i>=3 && i<cantidadNumeros+3 && isdigit(tecla)){ //Si el usuario ingresa un dígito (resto de caracteres de la placa)
			entrada[i++] = tecla;
			std::cout << tecla; // muestra el caracter ingresado en la consola
		}
			
	}

	return entrada;
}

std::string Dato::ingresarCedulaEcuador() {
    while (true) {
        char *entrada = new char[10];
		char tecla;
		int i = 0;
		while (true) {
			tecla = getch(); // lee la tecla ingresada por el usuario sin mostrarla en la consola
			
			if (tecla == '\r' && i == 10) { // si el usuario presiona Enter
			  std::cout << std::endl;
			  break;
			} else if (tecla == '\b' && i > 0) { // si el usuario presiona Backspace y hay caracteres en la entrada			
				i--;						
				std::cout << "\b \b"; // borra el último caracter de la consola
				entrada[i] = 0; // elimina el último caracter de la entrada
			} else if (i<10 &&	isdigit(tecla)) { // si el usuario ingresa un caracter (3 primeros caracteres de la placa)
				entrada[i++] = tecla;
				std::cout << tecla; // muestra el caracter ingresado en la consola
			} 
		}
		entrada[i] = '\0';
		
		// Obtener dígitos de la cédula
	    int digitos[10];
	    for (int i = 0; i < 10; i++) {
	        digitos[i] = entrada[i] - '0';
	    }
		
	    // Validar el último dígito
	    int suma = 0;
	    for (int i = 0; i < 9; i += 2) {
	        int producto = digitos[i] * 2;
	        if (producto > 9) {
	            producto -= 9;
	        }
	        suma += producto;
	    }
	    for (int i = 1; i < 8; i += 2) {
	        suma += digitos[i];
	    }
	    int digitoVerificador = 10 - (suma % 10);
	    if (digitoVerificador == 10) {
	        digitoVerificador = 0;
	    }
	
	    // Comparar el último dígito calculado con el de la cédula
	    if(digitos[9] == digitoVerificador) {
	   		return entrada;
	   	};
        
        delete[] entrada;
        std::cout << "Cedula invalida. Intente nuevamente: ";
     
	}
}


