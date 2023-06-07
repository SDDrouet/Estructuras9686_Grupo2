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

std::string Vehiculo::convertirAMayusculas(const std::string& texto) {
    std::string textoMayusculas = texto;
    for (char& c : textoMayusculas) {
        c = std::toupper(c);
    }
    return textoMayusculas;
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
    archivo << "PLACA: " << convertirAMayusculas(placa) << std::endl;
    archivo << "MARCA: " << convertirAMayusculas(marca) << std::endl;
    archivo << "MODELO: " << convertirAMayusculas(modelo) << std::endl;
    archivo << "COLOR: " << convertirAMayusculas(color) << std::endl;
    archivo << "ANIO DE FABRICACION: " << anioFabricacion << std::endl;
    archivo << "PROPIETARIO: " << convertirAMayusculas(propietario.getNombre()) << " " << convertirAMayusculas(propietario.getApellido()) << std::endl;
    archivo << "CEDULA DE PROPIETARIO: " << convertirAMayusculas(propietario.getCedula()) << std::endl;
    archivo << "FECHA DE REGISTRO DEL VEHICULO: " << fechaRegistro.getDia() << "/" << fechaRegistro.getMes() << "/" << fechaRegistro.getAnio();
    archivo << " - HORA: " << fechaRegistro.getHora() << ":" << fechaRegistro.getMinuto() << ":" << fechaRegistro.getSegundo() << std::endl;
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
            // Sobrescribe los datos del vehículo con los del segundo vehículo
            archivoSalida << "PLACA: " << vehiculo2.placa << std::endl;
            archivoSalida << "MARCA: " << convertirAMayusculas(vehiculo2.marca) << std::endl;
            archivoSalida << "MODELO: " << convertirAMayusculas(vehiculo2.modelo) << std::endl;
            archivoSalida << "COLOR: " << convertirAMayusculas(vehiculo2.color) << std::endl;
            archivoSalida << "ANIO DE FABRICACION: " << vehiculo2.anioFabricacion << std::endl;
            archivoSalida << "PROPIETARIO: " << convertirAMayusculas(vehiculo2.propietario.getNombre()) << " " << convertirAMayusculas(vehiculo2.propietario.getApellido()) << std::endl;
            archivoSalida << "CEDULA DE PROPIETARIO: " << convertirAMayusculas(vehiculo2.propietario.getCedula()) << std::endl;
            archivoSalida << "FECHA DE REGISTRO DEL VEHICULO: " << vehiculo2.fechaRegistro.getDia() << "/" << vehiculo2.fechaRegistro.getMes() << "/" << vehiculo2.fechaRegistro.getAnio();
            archivoSalida << " - HORA: " << vehiculo2.fechaRegistro.getHora() << ":" << vehiculo2.fechaRegistro.getMinuto() << ":" << vehiculo2.fechaRegistro.getSegundo() << std::endl;
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




bool Vehiculo::operator ==(const Vehiculo& vehiculo) const {
	return placa == vehiculo.placa;
}
