/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 09/05/23 16:54
 * Enunciado:
 * Realizar las distintas implementaciones de funciones con parametros y
 * retornos abstractos y primitivos
 *******************************************************************************/ 
#include <iostream>
#include "Fraccion.h"
#include "FraccionControlador.h"
#include "Dato.h"


using namespace std;

int main() {
    int opcion = 0;
    float fnum;
    Fraccion fraccion1;
    Fraccion fraccion2;
    Fraccion resultado;
    Dato datos;

    while (opcion != 5) {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Suma 2 fracciones y retorna float" << endl;
        cout << "2. Suma 2 fracciones y retorna fraccion" << endl;
        cout << "3. Suma 2 float y retorna fraccion" << endl;
        cout << "4. Suma 2 float y retorna float" << endl;
        cout << "5. Salir" << endl;
        
        cout << "Ingrese el numero de su eleccion: " << endl;
        opcion = datos.ingresarEntero();

        switch(opcion) {
            case 1:
                cout << "\nSuma 2 fracciones y retorna float" << endl;
                cout << "Ingreso de datos" << endl;                
                cout << "valor fraccion 1, numerador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion1.setNumerador(fnum);
                
                cout << "valor fraccion 1, denominador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion1.setDenominador(fnum);
                
                cout << "valor fraccion 2, numerador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion2.setNumerador(fnum);
                
                cout << "valor fraccion 2, denominador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion2.setDenominador(fnum);
                
                fnum = FraccionControlador::proceso1(fraccion1, fraccion2);
                
                cout<<fraccion1.mostrar();
				cout << " + ";
				cout<<fraccion2.mostrar();
				cout << " = " << fnum << endl; 
				
                break;
                
            case 2:
                cout << "\nSuma 2 fracciones y retorna fraccion" << endl;
                cout << "Ingreso de datos" << endl;                
                cout << "valor fraccion 1, numerador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion1.setNumerador(fnum);
                
                cout << "valor fraccion 1, denominador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion1.setDenominador(fnum);
                
                cout << "valor fraccion 2, numerador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion2.setNumerador(fnum);
                
                cout << "valor fraccion 2, denominador: " << endl;
                fnum = datos.ingresarFloat();
                fraccion2.setDenominador(fnum);
				
				resultado = FraccionControlador::proceso2(fraccion1, fraccion2);
				cout<< fraccion1.mostrar();
				cout << " + ";
				cout<< fraccion2.mostrar();
				cout << " = "<< resultado.mostrar()<< endl; 
				
                break;
                
            case 3:
                
                break;
                
            case 4:
                
                break;
                
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
                
            default:
                cout << "Opcion no valida. Seleccione una opcion valida del 1 al 5." << endl;
                break;
        }
    }

    return 0;
}

