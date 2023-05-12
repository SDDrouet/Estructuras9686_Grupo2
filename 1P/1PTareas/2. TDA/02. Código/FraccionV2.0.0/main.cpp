/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 09/05/23 16:54
 * Fecha de modificacion: 11/05/23 19:54
 * Enunciado:
 * Ejemplo de sobrecarga de metodos e interfaces
 * 
 *******************************************************************************/ 
  
#include <iostream>
#include <stdio.h>
#include "Fraccion.h"
#include "Dato.h"
#include "FraccionesResultado.h"


using namespace std;

int main() {
    int opcion = 0;
    float fnum;
    float fnum2;
    float fresultado;
    FraccionesResultado frR;
    Fraccion fraccion1, fraccion2, fraccion3;
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
                
                fnum = frR.proceso(fraccion1, fraccion2, true);
                
                cout << frR.mostrar(fraccion1) << " + "<< frR.mostrar(fraccion2) << " = " << fnum << endl; 
				
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
                
                fraccion3 = frR.proceso(fraccion1, fraccion2);
				
				cout << frR.mostrar(fraccion1) << " + " << frR.mostrar(fraccion2)
					 << " = "<< frR.mostrar(fraccion3)<< endl; 
				break;
                
            case 3:
            	cout << "\nSuma 2 float y retorna fraccion" << endl;
            	cout << "Ingrese el primer float: ";
				fnum = datos.ingresarFloat();
				cout << "Ingrese el segundo float: ";
			    fnum2 = datos.ingresarFloat();
			    
			    fraccion1 = frR.proceso(fnum, fnum2);
                cout << fnum << " + " << fnum2 << " = " << frR.mostrar(fraccion1) << endl; 
                break;
                
            case 4:
                cout << "\nSuma 2 float y retorna float" << endl;
            	cout << "Ingrese el primer float: ";
				fnum = datos.ingresarFloat();
				cout << "Ingrese el segundo float: ";
			    fnum2 = datos.ingresarFloat();
			    fresultado = frR.proceso(fnum, fnum2, true);
			    cout << fnum << " + " << fnum2 << " = " << fresultado << endl;
                break;
                
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
                
            default:
                cout << "Opcion no valida. Seleccione una opcion valida del 1 al 5." << endl;
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}

