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


int main() {
    int opcion = 0;
    float fnum;
    float fnum2;
    float fresultado;
    FraccionesResultado frR;
    Fraccion fraccion1, fraccion2, fraccion3;
    Dato datos;

    while (opcion != 5) {
        std::cout << "Seleccione una opcion:" << std::endl;
        std::cout << "1. Suma 2 fracciones y retorna float" << std::endl;
        std::cout << "2. Suma 2 fracciones y retorna fraccion" << std::endl;
        std::cout << "3. Suma 2 float y retorna fraccion" << std::endl;
        std::cout << "4. Suma 2 float y retorna float" <<std:: endl;
        std::cout << "5. Salir" << std::endl;
        
        std::cout << "Ingrese el numero de su eleccion: " <<std:: endl;
        opcion = datos.ingresarEntero();

        switch(opcion) {
            case 1:
                std::cout << "\nSuma 2 fracciones y retorna float" <<std:: endl;
                std::cout << "Ingreso de datos" << std::endl;                
                std::cout << "valor fraccion 1, numerador: " <<std:: endl;
                fnum = datos.ingresarFloat();
                fraccion1.setNumerador(fnum);
                
                std::cout << "valor fraccion 1, denominador: " <<std:: endl;
                fnum = datos.ingresarFloat();
                fraccion1.setDenominador(fnum);
                
                std::cout << "valor fraccion 2, numerador: " << std::endl;
                fnum = datos.ingresarFloat();
                fraccion2.setNumerador(fnum);
                
                std::cout << "valor fraccion 2, denominador: " <<std:: endl;
                fnum = datos.ingresarFloat();
                fraccion2.setDenominador(fnum);
                
                fnum = frR.proceso(fraccion1, fraccion2, true);
                
                std::cout << frR.mostrar(fraccion1) << " + "<< frR.mostrar(fraccion2) << " = " << fnum << std::endl; 
				
                break;
                
            case 2:
                std::cout << "\nSuma 2 fracciones y retorna fraccion" << std::endl;
                std::cout << "Ingreso de datos" << std::endl;                
                std::cout << "valor fraccion 1, numerador: " << std::endl;
                fnum = datos.ingresarFloat();
                fraccion1.setNumerador(fnum);
                
                std::cout << "valor fraccion 1, denominador: " <<std:: endl;
                fnum = datos.ingresarFloat();
                fraccion1.setDenominador(fnum);
                
                std::cout << "valor fraccion 2, numerador: " << std::endl;
                fnum = datos.ingresarFloat();
                fraccion2.setNumerador(fnum);
                
                std::cout << "valor fraccion 2, denominador: " << std::endl;
                fnum = datos.ingresarFloat();
                fraccion2.setDenominador(fnum);
                
                fraccion3 = frR.proceso(fraccion1, fraccion2);
				
				std::cout << frR.mostrar(fraccion1) << " + " << frR.mostrar(fraccion2)
					 << " = "<< frR.mostrar(fraccion3)<< std::endl; 
				break;
                
            case 3:
            	std::cout << "\nSuma 2 float y retorna fraccion" << std::endl;
            	std::cout << "Ingrese el primer float: ";
				fnum = datos.ingresarFloat();
				std::cout << "Ingrese el segundo float: ";
			    fnum2 = datos.ingresarFloat();
			    
			    fraccion1 = frR.proceso(fnum, fnum2);
                std::cout << fnum << " + " << fnum2 << " = " << frR.mostrar(fraccion1) <<std:: endl; 
                break;
                
            case 4:
                std::cout << "\nSuma 2 float y retorna float" << std::endl;
            	std::cout << "Ingrese el primer float: ";
				fnum = datos.ingresarFloat();
				std::cout << "Ingrese el segundo float: ";
			    fnum2 = datos.ingresarFloat();
			    fresultado = frR.proceso(fnum, fnum2, true);
			    std::cout << fnum << " + " << fnum2 << " = " << fresultado << std::endl;
                break;
                
            case 5:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
                
            default:
                std::cout << "Opcion no valida. Seleccione una opcion valida del 1 al 5." <<std::endl;
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}

