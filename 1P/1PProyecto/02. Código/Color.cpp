#include "Color.h"
#include <string>
#include <iostream>
#include "Dato.h"
Color::Color(){
}

Color::~Color(){
}
std::string Color::seleccionarColor(){
	int op;
	std::string color;
	do{
		std::cout<<"------------Colores -------------" << std::endl;
		std::cout<<"1.- Blanco" << std::endl;
		std::cout<<"2.- Negro" << std::endl;
		std::cout<<"3.- Rojo" << std::endl;
		std::cout<<"4.- Azul" << std::endl;
		std::cout<<"5.- Verde" << std::endl;				
		std::cout<<"6.- Amarillo" << std::endl;
		std::cout<<"7.- Cafe" << std::endl;
		std::cout<<"8.- Gris" << std::endl;
		std::cout<<"\nIngrese una opcion [1 - 8]: ";
		
		op=Dato::ingresarMenuOpcion('1', '8');
		 
		switch(op){
			case 1:
				color = "Blanco";
				break;
			case 2:
				color = "Negro";
				break;
			case 3:
				color = "Rojo";
				break;
			case 4:
				color = "Azul";
				break;
			case 5:
				color = "Verde";
				break;
			case 6:
				color = "Amarillo";
				break;
			case 7:
				color = "Cafe";
				break;
			case 8:
				color = "Gris";
				break;
		}
	}while(op <1 || op >8);
	return color;
}