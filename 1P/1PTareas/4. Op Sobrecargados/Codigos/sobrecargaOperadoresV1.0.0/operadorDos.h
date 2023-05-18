#ifndef OPERADORDOS_H
#define OPERADORDOS_H

class OperadorDos {
private:
    int valor;

public:
    OperadorDos(int valor);
    bool operator>=(const OperadorDos& otro) const;
};

#endif