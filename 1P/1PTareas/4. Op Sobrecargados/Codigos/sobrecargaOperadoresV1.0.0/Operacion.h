#ifndef OPERACION_H
#define OPERACION_H
#include "Operador.h"

class Operacion: public Operador
{
	public:
		Operacion();
		Operacion(float, float);
		~Operacion();
		void setA(float);
		float getA(void);
		void setB(float);
		float getB(void);
		float operator +(const Operacion&) const override;

		
	private:
		float a;
		float b;
};

#endif