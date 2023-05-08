#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;
class Persona{
    private:
        string nombre;
        string apellido;
        int edad;
    public:
        Persona(string nombre, string apellido, int edad);
        void setNombre(string nombre);
        void setApellido(string apellido);
        void setEdad(int edad);
        string getNombre();
        string getApellido();
        int getEdad();
        string toString();
};
#endif