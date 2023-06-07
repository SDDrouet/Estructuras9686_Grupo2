/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include "../Modelo/Vehiculo.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm> 
#include "../Modelo/Fecha.h"
#include <sstream>
#include <string>

Vehiculo::Vehiculo(){
}

Vehiculo::~Vehiculo(){
}

Vehiculo::Vehiculo(Persona propietario, std::string placa, std::string color, std::string modelo, std::string marca, int anio){
   this->propietario = propietario;
   this->placa = placa;
   this ->color = color;
   this->modelo = modelo;
   this->marca = marca;
   this->anioFabricacion = anio;
}

Vehiculo::Vehiculo(std::string placa){
   this->placa = placa;
}

Persona Vehiculo::getPropietario(){
   return propietario;
}

std::string Vehiculo::getPlaca(){
   return placa;
}
std::string Vehiculo::getColor(){
   return color;
}
std::string Vehiculo::getModelo(){
   return modelo;
}
std::string Vehiculo::getMarca(){
   return marca;
}

int Vehiculo::getAnioFabricacion(){
	return anioFabricacion;
}
void Vehiculo::setPropietario(Persona nuevoPropietario){
   this->propietario = nuevoPropietario;
}
void Vehiculo::setPlaca(std::string nuevaPlaca){
   this->placa = nuevaPlaca;
}
void Vehiculo::setColor(std::string nuevoColor){
   this->color = nuevoColor;
}
void Vehiculo::setModelo(std::string nuevoModelo){
   this->modelo = nuevoModelo;
}
void Vehiculo::setMarca(std::string nuevaMarca){
   this->marca = nuevaMarca;
}

void Vehiculo::setAnioFabricacion(int nuevoAnioFabricacion){
	this->anioFabricacion = nuevoAnioFabricacion;
}

std::ostream& operator <<(std::ostream& os, const Vehiculo& vehiculo){
	os<< "Datos de Vehiculo con placa: " + vehiculo.placa 
		+ "\nColor: " + vehiculo.color
		+ "\nMarca: " + vehiculo.marca 
		+ "\nModelo: " + vehiculo.modelo		
		+ "\nAnio de fabricacion: " << vehiculo.anioFabricacion
		<< "\nPropietario: " << vehiculo.propietario << std::endl;
	return os;
}



void Vehiculo::guardarVehiculoEnArchivo() {
    std::ofstream archivo;
    archivo.open("vehiculos.txt", std::ios::app); // Abre el archivo en modo append para no sobrescribir los datos existentes

    if (archivo.fail()) {
        std::cout << "No se pudo abrir el archivo" << std::endl;
        return;
    }
	
    // Escribe los datos del vehículo en el archivo
    archivo << "PLACA: " << placa << std::endl;
    archivo << "MARCA: " << marca << std::endl;
    archivo << "MODELO: " << modelo << std::endl;
    archivo << "COLOR: " << color << std::endl;
    archivo << "ANIO DE FABRICACION: " << anioFabricacion << std::endl;
    archivo << "NOMBRE: " << propietario.getNombre() << std::endl;
    archivo << "APELLIDO: " << propietario.getApellido() << std::endl;
    archivo << "CEDULA DE PROPIETARIO: " << propietario.getCedula() << std::endl;
    archivo << "FECHA REGISTRO: " << fechaRegistro.getDia() << "/" << fechaRegistro.getMes() << "/" << fechaRegistro.getAnio() << std::endl;
    archivo << "HORA: " << fechaRegistro.getHora() << ":" << fechaRegistro.getMinuto() << ":" << fechaRegistro.getSegundo() << std::endl;
    archivo << "---------------------------------" << std::endl;

    archivo.close(); // Cierra el archivo
}

void Vehiculo::modificarVehiculoEnArchivo(Vehiculo& vehiculo1, Vehiculo& vehiculo2) {
    std::ifstream archivoEntrada("vehiculos.txt");
    std::ofstream archivoSalida("vehiculos_tmp.txt");

    if (!archivoEntrada || !archivoSalida) {
        std::cout << "Error al abrir los archivos" << std::endl;
        return;
    }

    std::string linea;
    bool vehiculoEncontrado = false;

    while (std::getline(archivoEntrada, linea)) {
        // Busca la línea que contiene la placa del vehículo
        if (linea.find("PLACA: " + vehiculo1.placa) != std::string::npos) {
            
			while (std::getline(archivoEntrada, linea) && linea != "---------------------------------") {
                // No escribe ninguna línea para eliminar los datos del vehículo
            }            
            archivoSalida << "PLACA: " << vehiculo2.placa << std::endl;
            archivoSalida << "MARCA: " << vehiculo2.marca << std::endl;
            archivoSalida << "MODELO: " << vehiculo2.modelo << std::endl;
            archivoSalida << "COLOR: " << vehiculo2.color << std::endl;
            archivoSalida << "ANIO DE FABRICACION: " << vehiculo2.anioFabricacion << std::endl;
            archivoSalida << "NOMBRE: " << vehiculo2.propietario.getNombre() << std::endl;
			archivoSalida << "APELLIDO: " << vehiculo2.propietario.getApellido() << std::endl;
            archivoSalida << "CEDULA DE PROPIETARIO: " << vehiculo2.propietario.getCedula() << std::endl;
            archivoSalida << "FECHA REGISTRO: " << vehiculo2.fechaRegistro.getDia() << "/" << vehiculo2.fechaRegistro.getMes() << "/" << vehiculo2.fechaRegistro.getAnio() << std::endl;
            archivoSalida << "HORA: " << vehiculo2.fechaRegistro.getHora() << ":" << vehiculo2.fechaRegistro.getMinuto() << ":" << vehiculo2.fechaRegistro.getSegundo() << std::endl;
            archivoSalida << "---------------------------------" << std::endl;
            vehiculoEncontrado = true;
        } else {
            archivoSalida << linea << std::endl;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    // Elimina el archivo original
    std::remove("vehiculos.txt");
    // Renombra el archivo temporal al nombre original
    std::rename("vehiculos_tmp.txt", "vehiculos.txt");

    if (!vehiculoEncontrado) {
        std::cout << "Vehiculo no encontrado" << std::endl;
    } else {
        std::cout << "Vehiculo modificado exitosamente" << std::endl;
    }
}

void Vehiculo::eliminarVehiculoEnArchivo(const std::string& placa1) {
    std::ifstream archivoEntrada("vehiculos.txt");
    std::ofstream archivoSalida("vehiculos_tmp.txt");

    if (!archivoEntrada || !archivoSalida) {
        std::cout << "Error al abrir los archivos" << std::endl;
        return;
    }

    std::string linea;
    bool vehiculoEncontrado = false;

    while (std::getline(archivoEntrada, linea)) {
        // Busca la línea que contiene la placa del vehículo
        if (linea.find("PLACA: " + placa1) != std::string::npos) {
            // No escribe ninguna línea para eliminar los datos del vehículo
            vehiculoEncontrado = true;
            // Avanza hasta la siguiente línea de separación "---------------------------------"
            while (std::getline(archivoEntrada, linea) && linea != "---------------------------------") {
                // No escribe ninguna línea para eliminar los datos del vehículo
            }
        } else {
            archivoSalida << linea << std::endl;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    // Elimina el archivo original
    std::remove("vehiculos.txt");
    // Renombra el archivo temporal al nombre original
    std::rename("vehiculos_tmp.txt", "vehiculos.txt");

    if (!vehiculoEncontrado) {
        std::cout << "Vehiculo no encontrado" << std::endl;
    } else {
        std::cout << "Vehiculo eliminado exitosamente" << std::endl;
    }
}

void Vehiculo::buscarVehiculoEnArchivo(const std::string& placa1) {
    std::ifstream archivoEntrada("vehiculos.txt");

    if (!archivoEntrada) {
        std::cout << "Error al abrir el archivo" << std::endl;
        return;
    }

    std::string linea;
    bool vehiculoEncontrado = false;

    while (std::getline(archivoEntrada, linea)) {
        // Busca la línea que contiene la placa del vehículo
        if (linea.find("PLACA: " + placa1) != std::string::npos) {
            // Imprime los datos del vehículo
            std::cout << "Datos del Vehiculo con placa: " << placa1 << std::endl;
            std::cout << "---------------------------------" << std::endl;
            std::cout << linea << std::endl; // Imprime la línea de la placa
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de MARCA
            std::cout << linea << std::endl; // Imprime la línea de la marca
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de MODELO
            std::cout << linea << std::endl; // Imprime la línea del modelo
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de COLOR
            std::cout << linea << std::endl; // Imprime la línea del color
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de ANIO DE FABRICACION
            std::cout << linea << std::endl; // Imprime la línea del año de fabricación
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de PROPIETARIO
            std::cout << linea << std::endl; // Imprime la línea del propietario
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de CEDULA DE PROPIETARIO
            std::cout << linea << std::endl; // Imprime la línea de la cédula del propietario
            std::getline(archivoEntrada, linea); // Lee la línea siguiente de FECHA DE REGISTRO DEL VEHICULO
            std::cout << linea << std::endl; // Imprime la línea de la fecha de registro del vehículo
            std::cout << "---------------------------------" << std::endl;

            vehiculoEncontrado = true;
            break;
        }
    }

    archivoEntrada.close();

    if (!vehiculoEncontrado) {
        std::cout << "Vehiculo no encontrado" << std::endl;
    }
}


void Vehiculo::imprimirArchivo() {
    std::ifstream archivoEntrada("vehiculos.txt");

    if (!archivoEntrada) {
        std::cout << "Error al abrir el archivo" << std::endl;
        return;
    }

    std::string linea;

    while (std::getline(archivoEntrada, linea)) {
        std::cout << linea << std::endl;
    }

    archivoEntrada.close();
}

void extraerValores(std::string input, int &valor1, int& valor2, int& valor3) {
	std::stringstream ss(input);
    char delimiter;

    ss >> valor1 >> delimiter >> valor2 >> delimiter >> valor3;
}

void Vehiculo::leerArchivo(ListaDoble<Vehiculo>* vehiculosRegistrados) {
	Persona persona;
	Vehiculo vehiculo;
	Fecha fecha;
	
	std::string line, placa, marca, modelo, color, nombre, apellido, cedula, tiempo;
	int anioFabricacion, anio, mes, dia, hora, minuto, segundo; 
	// Cargar vehículos desde un archivo de texto
    std::ifstream file("vehiculos.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo\n";
    } else {

	    while (std::getline(file, line)) {
	        if (line.find("PLACA:") != std::string::npos) {
	            placa = line.substr(7);  // Extrae la placa del vehículo
	            
				std::getline(file, line);
	            marca = line.substr(7);  // Extrae la marca del vehículo
	            
	            std::getline(file, line);
	            modelo = line.substr(8);  // Extrae el modelo del vehículo
	            
	            std::getline(file, line);
	            color = line.substr(7);  // Extrae el color del vehículo
	            
				std::getline(file, line);	            
				anioFabricacion = std::stoi(line.substr(21));  // Extrae el año de fabricación
				
	            std::getline(file, line);
	            nombre = line.substr(8);  // Extrae el nombre del propietario
	            
	            std::getline(file, line);
	            apellido = line.substr(10);  // Extrae el nombre del propietario
	            
				std::getline(file, line);
	            cedula = line.substr(23);  // Extrae la cédula del propietario
	            
	            std::getline(file, line);
	            tiempo = line.substr(16);  // Extrae la cédula del propietario
	            
	            extraerValores(tiempo, dia, mes, anio);
	            
	            std::getline(file, line);
	            tiempo = line.substr(6);  // Extrae la cédula del propietario
	            
	            extraerValores(tiempo, hora, minuto, segundo);
	
				fecha = Fecha(anio, mes, dia, hora, minuto, segundo);
	            // Crea el objeto Persona y Vehiculo
	            persona = Persona(nombre, apellido, cedula, fecha);
	            vehiculo = Vehiculo(persona, placa, color, modelo, marca, anioFabricacion);
	
	            // Inserta el vehículo en la lista
	            vehiculosRegistrados->insertar(vehiculo);
	        }
	    }
    
    }

    file.close();
}


bool Vehiculo::operator ==(const Vehiculo& vehiculo) const {
	return placa == vehiculo.placa;
}
