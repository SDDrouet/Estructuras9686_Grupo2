#include "operadordos.h"

OperadorDos::OperadorDos(int valor) : valor(valor) {}

bool OperadorDos::operator>=(const OperadorDos& otro) const {
    return valor >= otro.valor;
}