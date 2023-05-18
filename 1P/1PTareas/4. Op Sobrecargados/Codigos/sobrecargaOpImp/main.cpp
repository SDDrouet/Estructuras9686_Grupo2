#include <iostream>
#include "imprimir.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ImpDato<int> objeto1(42);
    ImpDato<double> objeto2(3.14);

    std::cout << "Objeto 1: " << objeto1 << std::endl;
    std::cout << "Objeto 2: " << objeto2 << std::endl;
	return 0;
}