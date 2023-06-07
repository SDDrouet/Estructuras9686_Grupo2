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
		std::cout<<"1.- BLANCO" << std::endl;
		std::cout<<"2.- NEGRO" << std::endl;
		std::cout<<"3.- ROJO" << std::endl;
		std::cout<<"4.- AZUL" << std::endl;
		std::cout<<"5.- VERDE" << std::endl;				
		std::cout<<"6.- AMARILLO" << std::endl;
		std::cout<<"7.- CAFE" << std::endl;
		std::cout<<"8.- GRIS" << std::endl;
		std::cout<<"\nIngrese una opcion [1 - 8]: ";
		
		op=Dato::ingresarMenuOpcion('1', '8');
		 
		switch(op){
			case 1:
				color = "BLANCO";
				break;
			case 2:
				color = "NEGRO";
				break;
			case 3:
				color = "ROJO";
				break;
			case 4:
				color = "AZUL";
				break;
			case 5:
				color = "VERDE";
				break;
			case 6:
				color = "AMARILLO";
				break;
			case 7:
				color = "CAFE";
				break;
			case 8:
				color = "GRIS";
				break;
		}
	}while(op <1 || op >8);
	return color;
}