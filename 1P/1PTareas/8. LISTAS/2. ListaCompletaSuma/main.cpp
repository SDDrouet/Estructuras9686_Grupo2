/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
 *******************************************************************************/ 
#include <iostream>
#include "Lista.h"
#include "Dato.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int op,suma,iValor,iValor2;
	Lista lst;
	do{
		system("cls");
		std::cout<<"------------Lista Simple(Prueba)-------------" << std::endl;
		std::cout<<"1.- Insertar un nuevo elemento por la cabeza" << std::endl;
		std::cout<<"2.- Insertar un nuevo elemento por la cola" << std::endl;
		std::cout<<"3.- Eliminar un elemento por la cabeza" << std::endl;
		std::cout<<"4.- Eliminar un elemento por la cola" << std::endl;
		std::cout<<"5.- Buscar un elemento en la lista" << std::endl;
		std::cout<<"6.- Modificar la primera ocurrecia de la lista" << std::endl;
		std::cout<<"7.- Imprimir lista" << std::endl;
		std::cout<<"8.- Sumar lista" << std::endl;
		std::cout<<"9.- Salir" << std::endl;
		std::cout<<"Ingrese una opcion [1-9]: ";
		op=Dato::ingresarMenuOpcion('1', '9'); 
		switch(op){
			case 1:
				system("cls");
				std::cout << "Ingrese el numero entero a insertar:" << std::endl;
				iValor=Dato::ingresarEntero(); 
				lst.insertarPorCabeza(iValor);
				std::cout<<"Dato ingresado correctamente" << std::endl;
				system("PAUSE");
			break;
			case 2:
				system("cls");
				std::cout << "Ingrese el numero entero a insertar:" << std::endl;
				iValor=Dato::ingresarEntero(); 
				lst.insertarPorCola(iValor);
				std::cout<<"Dato ingresado correctamente" << std::endl;
				system("PAUSE");
			break;
			
			case 3:
				system("cls");
				lst.eliminarPorCabeza();
				std::cout<<"Dato eliminado" << std::endl;
				system("PAUSE");
			break;
			
			case 4:
				system("cls");
				lst.eliminarPorCola();
				std::cout<<"Dato eliminado" << std::endl;
				system("PAUSE");
			break;
			
			case 5:
				system("cls");
				if (!lst.estaVacia()) {
				    std::cout << "Ingrese el numero entero a buscar:" << std::endl;
					iValor=Dato::ingresarEntero(); 
					lst.buscarElemento(iValor);
				}else{
					std::cout << "Lista vacia, no hay elemento a buscar" << std::endl;
				}
				
				system("PAUSE");
			break;
			
			case 6:
				system("cls");
				if (!lst.estaVacia()) {
				    std::cout << "Ingrese el numero entero a modificar:" << std::endl;
					iValor=Dato::ingresarEntero(); 
					std::cout << "Ingrese el nuevo numero entero (modificar):" << std::endl;
					iValor2=Dato::ingresarEntero();
					lst.modificarPrimeraOcurrencia(iValor,iValor2);
				}else{
					std::cout << "Lista vacia, no hay elemento a modificar" << std::endl;
				}
				
				system("PAUSE");
			break;
			
			case 7:
				system("cls");
				lst.mostrarLista();
				system("PAUSE");
			break;
			
			case 8:
				system("cls");
				suma = lst.sumarLista();
				if (!lst.estaVacia()) {
				    suma = lst.sumarLista();
				    std::cout << "La suma de los elementos de la lista es: " << suma << std::endl;
				} 
				system("PAUSE");
			break;
			
			case 9:
				system("cls");
				std::cout << "Saliendo, gracias....." << std::endl;
				exit(0);
			break;
		}
	}while(op != 9);
	system("pause");
	return 0;
}
