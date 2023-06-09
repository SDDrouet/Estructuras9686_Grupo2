/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/06/23 10::00
 * Fecha de modificacion: 09/06/23 10:36
 * Enunciado:
 * Implementación de plantillas, interfaces y contador de pares en pilas
 *
 *******************************************************************************/ 
#include "Dato.h"
#include <iostream>
#include <stack>
#include "Pila.cpp"

// Programa que suma los numeros que se ingresen haciendo un push y al final se hace un pop 
// para mostrar los numeros que se ingresaron en la pila haciendo una comparacion con la clase stack
// propia del c++ solo como comprobacion de una correcta implementacion, tambien usa lamndas

using namespace std;

int main() {
	
	int dato = 0;
	int suma = 0;
	int continuar = 1;	

	// usando clase Pila
	Pila<int>* pila = new Pila<int>();
	// usando stack
	stack<int> pila2;
	
	while (continuar==1)
	{		
		cout << "\n Ingrese un numero: ";
		dato = Dato::ingresarEntero();
		pila->push(dato);
		pila2.push(dato);
		if (continuar==1){
			cout << "\nDesea continuar? (1)Si (0)No: ";
			continuar = Dato::ingresarMenuOpcion('0','1');			
		}
	}
	
	cout << "\nLa Pila ingresada usando una Clase Pila Generada por Nosotros: " << endl;
	
	pila->contarPares();
	
	cout << "\nLa Pila ingresada usando stack propia de C++: " << endl;
	auto mostrarPilaStack = [](stack<int> pila) {
		while (!pila.empty()) {
			cout << "\t---" << endl;
			cout << "\t|" << pila.top() << "|" << endl;
			pila.pop();
		}
	};
	
	mostrarPilaStack(pila2);
	
	system("PAUSE");
	
	
	return 0;
}