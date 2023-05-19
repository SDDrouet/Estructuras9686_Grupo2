/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 18/05/23 19:32
 * Fecha de modificacion: 18/05/23 19:32
 * Enunciado:
 * Ejemplo de operadores sobrecargados
 * 
 *******************************************************************************/ 

#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include <iostream>
#include "imprimible.h"

template <typename T>
class ImpDato : public Imprimible {
private:
    std::string nombre;
    T dato;

public:
    ImpDato(const std::string& nombre, const T& valor);

    T obtenerDato() const;
    void imprimir(std::ostream& os) const;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const ImpDato<T>& objeto);

#endif  // IMPRIMIR_H