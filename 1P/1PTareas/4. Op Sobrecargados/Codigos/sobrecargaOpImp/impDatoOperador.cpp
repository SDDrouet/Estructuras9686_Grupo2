/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastian, Bazurto Chrisopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 18/05/23 19:32
 * Fecha de modificacion: 18/05/23 19:32
 * Enunciado:
 * Ejemplo de operadores sobrecargados
 * 
 *******************************************************************************/ 

#include "imprimir.h"

template <typename T>
ImpDato<T>::ImpDato(const std::string& nombre, const T& valor)
    : nombre(nombre), dato(valor) {}

template <typename T>
T ImpDato<T>::obtenerDato() const {
    return dato;
}

template <typename T>
void ImpDato<T>::imprimir(std::ostream& os) const {
    os << "Tipo de dato: " << typeid(T).name() << std::endl;
    os << "Nombre del Objeto: " << nombre << std::endl;
    os << "a = " << dato << std::endl;
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const ImpDato<T>& objeto) {
    objeto.imprimir(os);
    return os;
}

template class ImpDato<int>;
template class ImpDato<double>;


template std::ostream& operator<<(std::ostream& os, const ImpDato<int>& objeto);
template std::ostream& operator<<(std::ostream& os, const ImpDato<double>& objeto);

