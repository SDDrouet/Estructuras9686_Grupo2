/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 27/05/23 19:28
 * Fecha de modificacion: 29/05/23 10:16
 * Enunciado:
 * Ejemplo de lista simple con uso de template e interfaz
 * 
 *******************************************************************************/ 
#ifndef OPERACIONLISTAS_H
#define OPERACIONLISTAS_H
template <typename T>
class OperacionListas{
	public:
		virtual void insertarCabeza(T)=0;
		virtual void insertarCola(T)=0;
		virtual void buscar(T)=0;
		virtual void eliminar(T)=0;
		virtual void mostrar()=0;
};
#endif