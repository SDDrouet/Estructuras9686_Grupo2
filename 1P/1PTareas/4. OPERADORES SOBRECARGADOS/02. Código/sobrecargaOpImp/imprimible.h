/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 18/05/23 19:32
 * Fecha de modificacion: 18/05/23 19:32
 * Enunciado:
 * Ejemplo de operadores sobrecargados
 * 
 *******************************************************************************/ 

#ifndef IMPRIMIBLE_H
#define IMPRIMIBLE_H

#include <iostream>

class Imprimible {
public:
    virtual void imprimir(std::ostream& os) const = 0;
    virtual ~Imprimible() {}
};

#endif  // IMPRIMIBLE_H