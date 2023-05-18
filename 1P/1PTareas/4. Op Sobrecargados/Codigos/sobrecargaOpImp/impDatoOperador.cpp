#include "imprimir.h"

template <typename T>
ImpDato<T>::ImpDato(const T& valor) : dato(valor) {}

template <typename T>
T ImpDato<T>::obtenerDato() const {
    return dato;
}

template <typename T>
void ImpDato<T>::imprimir(std::ostream& os) const {
    os << dato;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const ImpDato<T>& objeto) {
    os << objeto.obtenerDato();
    return os;
}

// Es necesario agregar estas líneas para instanciar las plantillas utilizadas
template class ImpDato<int>;
template class ImpDato<double>;

template std::ostream& operator<<(std::ostream& os, const ImpDato<int>& objeto);
template std::ostream& operator<<(std::ostream& os, const ImpDato<double>& objeto);