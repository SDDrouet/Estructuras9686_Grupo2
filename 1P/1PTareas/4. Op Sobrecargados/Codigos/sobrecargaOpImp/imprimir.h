#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include <iostream>
#include "imprimible.h"

template <typename T>
class ImpDato : public Imprimible {
private:
    T dato;

public:
    ImpDato(const T& valor) : dato(valor) {}
    T obtenerDato() const { return dato; }
    void imprimir(std::ostream& os) const {
        os << dato;
    }
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const ImpDato<T>& objeto) {
    os << objeto.obtenerDato();
    return os;
}

#endif  // IMPRIMIR_H