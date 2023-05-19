#include <iostream>
#include "imprimir.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ImpDato<int> dato1("Dato 1", 10);
    ImpDato<double> dato2("Dato 2", 3.14);

    std::cout << dato1 << std::endl;
    std::cout << dato2 << std::endl;
	return 0;
}