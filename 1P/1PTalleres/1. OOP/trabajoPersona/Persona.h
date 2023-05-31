#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;
class Persona{
	public:
		Persona(string&, string&, int);
		~Persona();
		void setNombre(string&);
		void setApellido(string&);
		void setEdad(int);
		string getNombre();
		string getApellido();
		int getEdad();
		string toString();
		
	private:
		string nombre;
		string apellido;
		int edad;
};

#endif
