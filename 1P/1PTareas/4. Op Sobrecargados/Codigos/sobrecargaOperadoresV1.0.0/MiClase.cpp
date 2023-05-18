
#ifndef MICLASE_H
#define MICLASE_H

class MiClase {
private:
    bool valor;

public:
    MiClase(bool v);

    bool operator||(const MiClase& otro) const;
};

#endif // MICLASE_H
