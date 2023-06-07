/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include "../Modelo/Fecha.h"
#include <ctime>
#include <locale>
#include<iostream>
Fecha::~Fecha(){
}

Fecha::Fecha(int anio, int mes, int dia, int hora, int minuto, int segundo) {
	this->dia = dia;
	this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

Fecha::Fecha(){
	// Establece la configuración regional en español
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Obtiene el tiempo actual del sistema
    std::time_t tiempoActual = std::time(nullptr);

    // Convierte el tiempo en una estructura tm
    std::tm* tiempoLocal = std::localtime(&tiempoActual);

    // Obtiene los componentes de fecha y hora
	this->dia = tiempoLocal->tm_mday;
	this->mes = tiempoLocal->tm_mon+1;
    this->anio = tiempoLocal->tm_year + 1900;
    this->hora = tiempoLocal->tm_hour;
    this->minuto = tiempoLocal->tm_min;
    this->segundo = tiempoLocal->tm_sec;
}

int Fecha::getDia(void){
	return dia;
}
int Fecha::getMes(void){
	return mes;
}
int Fecha::getAnio(void){
	return anio;
}
int Fecha::getHora(void){
	return hora;
}
int Fecha::getMinuto(void){
	return minuto;
}
int Fecha::getSegundo(void){
	return segundo;
}

void Fecha::setDia(int nuevoDia){
	this->dia = nuevoDia;
}
void Fecha::setMes(int nuevoMes){
	this->mes = nuevoMes;
}
void Fecha::setAnio(int nuevoAnio){
	this->anio = nuevoAnio;
}
void Fecha::setHora(int nuevaHora){
	this->hora = nuevaHora;
}
void Fecha::setMinuto(int nuevoMinuto){
	this->minuto = nuevoMinuto;
}
void Fecha::setSegundo(int nuevoSegundo){
	this->segundo = nuevoSegundo;
}


std::ostream& operator <<(std::ostream& os, const Fecha& fechaActual){
	os<<std::to_string(fechaActual.dia) + "/"+std::to_string(fechaActual.mes)+"/"+std::to_string(fechaActual.anio)+" - hora: "+
	std::to_string(fechaActual.hora)+":"+std::to_string(fechaActual.minuto)+":"+std::to_string(fechaActual.segundo);
	return os;
}

