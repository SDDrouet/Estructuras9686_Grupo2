#ifndef OPERADOR_H
#define OPERADOR_H

class Operacion;

class Operador{
	public:
		virtual float operator +(const Operacion&) const = 0;
		
};

#endif