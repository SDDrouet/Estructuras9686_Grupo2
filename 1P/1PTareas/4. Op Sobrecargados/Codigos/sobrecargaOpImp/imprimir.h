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