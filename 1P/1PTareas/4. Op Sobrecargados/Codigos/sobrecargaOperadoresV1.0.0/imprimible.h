#ifndef IMPRIMIBLE_H
#define IMPRIMIBLE_H

#include <iostream>

class Imprimible {
public:
    virtual void imprimir(std::ostream& os) const = 0;
    virtual ~Imprimible() {}
};

#endif  // IMPRIMIBLE_H