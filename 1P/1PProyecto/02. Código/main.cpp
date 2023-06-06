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
#include "Fecha.h"
#include "Vehiculo.h"
#include "Persona.h"
#include "Color.h"

Vehiculo ingresarDatosVehiculo(std::string placa) {
	Persona persona;
	Vehiculo vehiculo;
	
	std::string cedula, nombre, apellido, color, modelo, marca;	
	int anioFabricacion;
	
	std::cout << "Ingrese la marca del vehiculo: ";
	std::getline(std::cin, marca);
	
	std::cout << "Ingrese el modelo del vehiculo: ";
	std::getline(std::cin, modelo);
	
	std::cout << "Ingrese el nombre del propietario: ";
	std::getline(std::cin, nombre);
	
	std::cout << "Ingrese el apellido del propietario: ";
	std::getline(std::cin, apellido);
	
	std::cout << "Ingrese la cedula del propietario: ";
	cedula = Dato::ingresarCedulaEcuador();
					
	std::cout << "Ingrese el anio de fabricacion del vehiculo: ";
	anioFabricacion = Dato::ingresarAnio();
	
	std::cout << "Seleccione el color del vehiculo: " << std::endl;
	color = Color::seleccionarColor();
	
	persona = Persona(nombre, apellido, cedula);
	vehiculo = Vehiculo(persona, placa, color, modelo, marca, anioFabricacion);
	
	return vehiculo;
}

int main() {
	int op,suma,iValor,iValor2;
	std::string placa1, cedula1; 
	Persona persona1;
	Vehiculo vehiculo1, vehiculo2;
	Nodo<Vehiculo>* nodo;

	ListaDoble<int>* nuevaLista = new ListaDoble<int>();
	ListaDoble<Vehiculo>* vehiculosRegistrados = new ListaDoble<Vehiculo>();
	
	do{
		system("cls");
		std::cout<<"------------Lista Simple(Prueba)-------------" << std::endl;
		std::cout<<"1.- Insertar un nuevo elemento" << std::endl;
		std::cout<<"2.- Imprimir lista" << std::endl;
		std::cout<<"3.- Modificar la primera ocurrecia de la lista" << std::endl;
		std::cout<<"4.- Eliminar un elemento" << std::endl;
		std::cout<<"5.- Buscar un elemento en la lista" << std::endl;				
		std::cout<<"6.- Salir" << std::endl;
		std::cout<<"\nIngrese una opcion [1 - 6]: ";
		
		op=Dato::ingresarMenuOpcion('1', '6');
		 
		switch(op){
			case 1:
				system("cls");

				std::cout<<"Ingrese la placa del Vehiculo: ";
				placa1 = Dato::ingresarPlacaEcuador();
				
				nodo = vehiculosRegistrados->buscar(Vehiculo(placa1));
				
				
				if (nodo == nullptr) {
					
					vehiculo1 = ingresarDatosVehiculo(placa1);
						
					vehiculosRegistrados->insertar(vehiculo1);
					vehiculo1.guardarVehiculoEnArchivo();
					std::cout << "Dato ingresado correctamente" << std::endl;				
				} else {
					std::cout << "Placa ya registrada..." << std::endl;				
				}
			break;
			
			
			case 2:
				system("cls");
				vehiculosRegistrados->mostrar();
				vehiculo1.imprimirArchivo();
				
			break;
			
			
			case 3:
				system("cls");
				
			    std::cout<<"Ingrese la placa del Vehiculo que quiere modificar: ";
				placa1 = Dato::ingresarPlacaEcuador();
				
				nodo = vehiculosRegistrados->buscar(Vehiculo(placa1));
				
				if (nodo != nullptr) {
					std::cout<<"Ingrese los nueva placa del Vehiculo: ";
					placa1 = Dato::ingresarPlacaEcuador();
					
					nodo = vehiculosRegistrados->buscar(Vehiculo(placa1));
					
					if (nodo == nullptr) {

						vehiculo2 = ingresarDatosVehiculo(placa1);
							
						vehiculosRegistrados->modificar(vehiculo1,vehiculo2);
						vehiculo2.modificarVehiculoEnArchivo(vehiculo1,vehiculo2);
						std::cout << "Dato actualizado correctamente" << std::endl;				
					} else {
						std::cout << "Placa ya registrada..." << std::endl;				
					}

				} else {
					std::cout << "Dato no encontrado" << std::endl;					
				}	
					
			break;			
			
			
			case 4:
				system("cls");
				std::cout<<"Ingrese la placa del Vehiculo que quiere eliminar: ";
				placa1 = Dato::ingresarPlacaEcuador();
				vehiculo1 = Vehiculo(persona1, placa1, "", "", "", 0);
				
				vehiculosRegistrados->eliminar(vehiculo1);
				vehiculo1.eliminarVehiculoEnArchivo(placa1);
			break;
			
			
			case 5:
				system("cls");
				std::cout << "Ingrese la placa del Vehiculo que quiere buscar: ";
				placa1 = Dato::ingresarPlacaEcuador();
				vehiculo1 = Vehiculo(persona1, placa1, "", "", "", 0);	
		 
				nodo = vehiculosRegistrados->buscar(vehiculo1);
				vehiculo1.buscarVehiculoEnArchivo(placa1);
				if (nodo != nullptr) {
					std::cout << "dato ingresado: " << placa1 << " - Dato encontrado: " << nodo->getDato() << std::endl;	
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