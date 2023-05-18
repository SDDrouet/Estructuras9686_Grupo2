#include <iostream>
#include "Operacion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Operacion op1(5,4);
	Operacion op2(6,11);
	std::cout<<op1.getA() << "+"<<op1.getB()<<"+"<< op2.getA()<<"+"<<op2.getB()<<"="<<op1+op2<<std::endl; 
	return 0;
}