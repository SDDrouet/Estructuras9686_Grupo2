/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 23:19
 * Fecha de modificacion: 03/06/23 23:19
 * Enunciado:
 * Proyecto para el registro vehicular con operaciones CRUD, archivos y listas
 * dobles
 *
 *******************************************************************************/ 
#include <iostream>
#include <string>
#include "Dato.h"
#include "Nodo.cpp"
#include "ListaDoble.cpp"

int main() {
	int op,suma,iValor,iValor2;
	Nodo<int>* nodo;

	ListaDoble<int>* nuevaLista = new ListaDoble<int>();
	
	
	do{
		system("cls");
		std::cout<<"------------Lista Simple(Prueba)-------------" << std::endl;
		std::cout<<"1.- Insertar un nuevo elemento" << std::endl;
		std::cout<<"2.- Imprimir lista" << std::endl;
		std::cout<<"3.- Modificar la primera ocurrecia de la lista" << std::endl;
		std::cout<<"4.- Eliminar un elemento" << std::endl;
		std::cout<<"5.- Buscar un elemento en la lista" << std::endl;				
		std::cout<<"6.- Salir" << std::endl;
		std::cout<<"Ingrese una opcion [1 - 6]: ";
		
		op=Dato::ingresarMenuOpcion('1', '6');
		 
		switch(op){
			case 1:
				system("cls");
				std::cout << "Ingrese el numero entero a insertar:" << std::endl;
				iValor=Dato::ingresarEntero();
				
				nuevaLista->insertar(iValor);
				
				std::cout << "Dato ingresado correctamente" << std::endl;
			break;
			
			
			case 2:
				system("cls");
				nuevaLista->mostrar();
				
			break;
			
			
			case 3:
				system("cls");
				
			    std::cout << "Ingrese el numero entero a modificar:" << std::endl;
				iValor = Dato::ingresarEntero(); 
				
				std::cout << "Ingrese el nuevo numero entero (modificar):" << std::endl;
				iValor2 = Dato::ingresarEntero();
				
				nuevaLista->modificar(iValor,iValor2);	
			break;			
			
			
			case 4:
				system("cls");
				std::cout << "Ingrese el numero entero que desea eliminar:" << std::endl;
				iValor = Dato::ingresarEntero();
				nuevaLista->eliminar(iValor);
				
			break;
			
			
			case 5:
				system("cls");				
			    std::cout << "Ingrese el numero entero a buscar:" << std::endl;
				iValor = Dato::ingresarEntero(); 
				nodo = nuevaLista->buscar(iValor);
				if (nodo != nullptr) {
					std::cout << "dato ingresado: " << iValor << " - Dato encontrado: " << nodo->getDato() << std::endl;	
				} else {
					std::cout << "Dato no encontrado" << std::endl;					
				}
			break;		
		
			
			case 6:
				system("cls");
				std::cout << "Saliendo, gracias....." << std::endl;
				exit(0);
			break;
			
			default:
				std::cout << "Porfavor seleccione una opcion..." << std::endl;
			break;
		}
		system("PAUSE");
	}while(op != 9);
		
	return 0;
		
}                                        