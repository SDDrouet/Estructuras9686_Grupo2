#ifndef VALIDADOR_H
#define VALIDADOR_H

#include <string>

using namespace std;

class Validador {
	public:
		Validador();
		string pedirNombre();
		int pedirEntero();
		int pedirEdad(int, int);
	private:
};

#endif