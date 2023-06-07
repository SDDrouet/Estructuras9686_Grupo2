/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 03/06/23 23:19
 * Fecha de modificacion: 03/06/23 23:19
 * Enunciado:
 * Proyecto para el registro vehicular con operaciones CRUD, archivos y listas
 * dobles
 *
 *******************************************************************************/ 
#ifndef AYUDAUSUARIO_H
#define AYUDAUSUARIO_H

#include <iostream>
#include <string>

class AyudaUsuario {
public:
    static void imprimirTexto(const std::string& texto) {
        std::cout << texto << std::endl;
    }

    static void imprimirMensajePersonalizado() {
        std::cout << "-----------------------------------------------------------" << std::endl;
        std::cout << "                   AYUDA DE USUARIO" << std::endl;
        std::cout << "-----------------------------------------------------------" << std::endl << std::endl;
        std::cout << "Estimado usuario," << std::endl;
        std::cout << "Me complace proporcionarle informacion sobre un sistema de registro \n de vehiculos que cumple con los requisitos establecidos. Este sistema permite realizar diversas operaciones\n, como registrar vehiculos, mostrar todos los registros, modificar la informacion de un vehículo\n, eliminar y buscar vehiculos.El sistema de registro de vehiculos esta diseñado para garantizar la\n integridad de los datos ingresados y se implementan ciertas validaciones para garantizar la precision \n de la informacion. A continuacion, se detallan los requisitos especificos para cada \n campo: \n\nModelo y marca: Estos campos son obligatorios y deben ser completados. \n No se permiten valores vacios en estos campos.Color: Este campo tambien es obligatorio \ny se debe ingresar un color existente. \n Se realizara una validacion para verificar que el color ingresado se encuentre en la lista de colores permitidos. \n Propietario: El propietario de un vehiculo se representa mediante una clase denominada -Persona-. Para registrar el propietario, \n se requiere la siguiente informacion: \n\na) Cedula: Se aplicara una validacion especifica para cumplir con el estandar de cedulas establecido en Ecuador. Esto garantizara que el número de cedula ingresado sea valido. \n\nb) Nombre y apellido: Estos campos no pueden estar vacios y deben contener información valida. \n\nFecha de registro: La fecha de registro se obtiene automaticamente del \n sistema en el momento en que se realiza el registro. Esta informacion se captura de manera precisa\n y se almacena junto con los demas datos del vehiculo. \n\nCon este sistema de registro de vehiculos, podra administrar y mantener \n \n un seguimiento de los vehiculos registrados de manera eficiente y precisa" << std::endl;
    }
};

#endif // AYUDAUSUARIO_H