/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 18:47
 * Fecha de modificacion: 04/06/23 19:40
 * Enunciado:
 * Validaciones y Modelo
 * 
 *******************************************************************************/ 
#include "Fecha.h"
#include <ctime>
#include <locale>
#include<iostream>
Fecha::~Fecha(){
}

Fecha::Fecha(){
	// Establece la configuración regional en español
    setlocale(LC_ALL, "es_ES.UTF-8");

    // Obtiene el tiempo actual del sistema
    std::time_t tiempoActual = std::time(nullptr);

    // Convierte el tiempo en una estructura tm
    std::tm* tiempoLocal = std::localtime(&tiempoActual);

    // Define los nombres de los meses y días en español
    //const char* meses[] = { "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio",
    //                       "agosto", "septiembre", "octubre", "noviembre", "diciembre" };
    //const char* diasSemana[] = { "domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado" };

    // Obtiene los componentes de fecha y hora
	this->dia = tiempoLocal->tm_mday;
	this->mes = tiempoLocal->tm_mon;
    this->anio = tiempoLocal->tm_year + 1900;
    this->hora = tiempoLocal->tm_hour;
    this->minuto = tiempoLocal->tm_min;
    this->segundo = tiempoLocal->tm_sec;
}

std::ostream& operator <<(std::ostream& os, const Fecha& fechaActual){
	os<<std::to_string(fechaActual.dia) + "/"+std::to_string(fechaActual.mes)+"/"+std::to_string(fechaActual.anio)+"-"+
	std::to_string(fechaActual.hora)+":"+std::to_string(fechaActual.minuto)+":"+std::to_string(fechaActual.segundo);
	return os;
}

