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
#include "../Modelo/Dato.h"
#include "../Controlador/Nodo.cpp"
#include "../Controlador/ListaDoble.cpp"
#include "../Modelo/Fecha.h"
#include "../Modelo/Vehiculo.h"
#include "../Modelo/Persona.h"
#include "../Modelo/Color.h"
#include "../Modelo/AyudaUsuario.h"
#include <fstream>
#include <sstream>

Vehiculo ingresarDatosVehiculo(std::string placa) {
	Persona persona;
	Vehiculo vehiculo;
	
	std::string cedula, nombre, apellido, color, modelo, marca;	
	int anioFabricacion;
	
	std::cout << "Ingrese la marca del vehiculo: ";
	marca = Dato::ingresarNombreCompleto();
	
	std::cout << "Ingrese el modelo del vehiculo: ";
	modelo = Dato::ingresarModelo();
	
	std::cout << "Ingrese el nombre del propietario: ";
	nombre = Dato::ingresarNombreSimple();
	
	std::cout << "Ingrese el apellido del propietario: ";
	apellido = Dato::ingresarNombreSimple();
	
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


void subMenuModificarVehiculo(Nodo<Vehiculo>* nodo, ListaDoble<Vehiculo>* vehiculosRegistrados) {
	int opcion;
	
	Persona persona;
	Fecha fechaActual;
	
	std::string cedula, nombre, apellido, color, modelo, marca;	
	
	Vehiculo vehiculo = nodo->getDato();
	persona = vehiculo.getPropietario();	

    do {
        std::cout << "----- Menu de Modificacion del Vehiculo -----" << std::endl;
        std::cout << vehiculo << std::endl;
                       
        std::cout << "1. Modificar color del vehiculo" << std::endl;
        std::cout << "2. Cambiar de propietario" << std::endl;
        std::cout << "3. Atras" << std::endl;
        std::cout << "Ingrese una opcion: ";
        opcion = Dato::ingresarMenuOpcion('1', '3');
		fechaActual = Fecha();
        switch (opcion) {

            case 1:
                std::cout << "Seleccione el nuevo color del vehiculo: " << std::endl;
				color = Color::seleccionarColor();
				
				persona.setFechaIngreso(fechaActual);
				vehiculo.setPropietario(persona);  
				vehiculo.setColor(color);
		
                std::cout << "Color del vehiculo modificado exitosamente." << std::endl;
                break;

            case 2:
                std::cout << "Ingrese los datos del nuevo propietario: " << std::endl;
                						
				std::cout << "Ingrese el nombre del propietario: ";
				nombre = Dato::ingresarNombreSimple();
				
				std::cout << "Ingrese el apellido del propietario: ";
				apellido = Dato::ingresarNombreSimple();
				
				std::cout << "Ingrese la cedula del propietario: ";
				cedula = Dato::ingresarCedulaEcuador();
                                                
				persona.setNombre(nombre);
                persona.setApellido(apellido);
                persona.setCedula(cedula);          
				persona.setFechaIngreso(fechaActual);
				vehiculo.setPropietario(persona);  
				
				std::cout << "Propietario modificado exitosamente." << std::endl;
                break;

            case 3:
                std::cout << "Saliendo del programa..." << std::endl;
                break;

            default:
                std::cout << "Opcion invalida. Por favor, ingrese una opcion valida." << std::endl;
        }					
		system("cls");
        std::cout << std::endl;

		
    } while (opcion != 3);
    
    vehiculosRegistrados->modificar(vehiculo, vehiculo);
	vehiculo.modificarVehiculoEnArchivo(vehiculo, vehiculo);
}

int main() {
	int op,suma,iValor,iValor2;
	std::string placa1, cedula1; 
	Persona persona1;
	Vehiculo vehiculo1, vehiculo2;
	Nodo<Vehiculo>* nodo;

	ListaDoble<int>* nuevaLista = new ListaDoble<int>();
	ListaDoble<Vehiculo>* vehiculosRegistrados = new ListaDoble<Vehiculo>();

	vehiculo1.leerArchivo(vehiculosRegistrados);

	do{
		system("cls");
		std::cout<<"------------Control Vehicular-------------" << std::endl;
		std::cout<<"1.- Registrar vehiculo" << std::endl;
		std::cout<<"2.- Mostrar registro" << std::endl;
		std::cout<<"3.- Modificar vehiculo del registro" << std::endl;
		std::cout<<"4.- Eliminar vehiculo del registro" << std::endl;
		std::cout<<"5.- Buscar vehiculo" << std::endl;				
		std::cout<<"6.- Help User!" << std::endl;				
		std::cout<<"7.- Salir" << std::endl;
		std::cout<<"\nIngrese una opcion [1 - 7]: ";
		
		op=Dato::ingresarMenuOpcion('1', '7');
		 
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
				
			break;
			
			
			case 3:
				system("cls");
				
			    std::cout<<"Ingrese la placa del Vehiculo que quiere modificar: ";
				placa1 = Dato::ingresarPlacaEcuador();
				
				nodo = vehiculosRegistrados->buscar(Vehiculo(placa1));
				
				if (nodo != nullptr) {
					subMenuModificarVehiculo(nodo, vehiculosRegistrados);
					std::cout << "Dato actualizado correctamente" << std::endl;									
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

				if (nodo != nullptr) {
					std::cout << "Dato encontrado:\n\n" << nodo->getDato() << std::endl;	
				} else {
					std::cout << "Dato no encontrado" << std::endl;					
				}
			break;		
		
			
			case 6:
    			system("cls");
    			AyudaUsuario::imprimirMensajePersonalizado();
   			break;

			case 7:
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