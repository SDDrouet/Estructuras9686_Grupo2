/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Arias Sebastián , Bazurto Christopher, Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 31/05/23 19:28
 * Fecha de modificacion: 31/05/23 21:48
 * Enunciado:
 * Ejemplo de lista simple con menu y suma lambda 
 *******************************************************************************/ 
#include "Lista.h"
#include <functional>
Lista::Lista(){
	this->primero=NULL;
	this->actual=NULL;
}

void Lista::setPrimero(Nodo* otroPrimero){
	primero=otroPrimero;
}

void Lista::setActual(Nodo* otroActual){
	actual=otroActual;
}

Nodo* Lista::getPrimero(){
	return this->primero;	
}

Nodo* Lista::getActual(){
	return this->actual;
}

void Lista::insertarPorCola(int val){
	Nodo *nuevo=new Nodo(val);
		if(listaVacia()){
			this->primero=nuevo;
		}
		else{
			//this->nuevo->
			nuevo->setSiguiente(NULL);
			this->actual->setSiguiente(nuevo);
		}
		this->actual=nuevo;
}

void Lista::insertarPorCabeza(int val){
	Nodo* nuevo = new Nodo(val);
	//nuevo->siguiente=NULL;
		if(listaVacia()){
			this->primero=nuevo;
		}
		else{
			nuevo->siguiente=primero;	
			this->primero=nuevo;
		}	
		this->actual=nuevo;
}

void Lista::eliminarPorCabeza(){
	if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elemento para eliminar\n";
        return;
    }
	if(primero){
	Nodo* aux=this->primero;
	primero = primero->siguiente;
	aux->siguiente=NULL;
	delete aux;	
	}else{
		std::cout<<"\nLa lista esta vacia\n"<<std::endl;	
	}
}

void Lista::eliminarPorCola(){
	if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elemento para eliminar\n";
        return;
    }
	if(primero){
		Nodo* aux= this->primero;
		Nodo* pre= NULL;
		while(aux->getSiguiente()){
			pre=aux;
			aux=aux->siguiente;
		}
		if(aux==primero){
		primero=primero->siguiente;
		delete aux;
		}else{
		pre->siguiente=NULL;
		delete aux;
		}
	}else{
		std::cout<<"\nLa lista esta vacia\n"<<std::endl;	
	}
}

bool Lista::estaVacia() {
    return primero == nullptr;
}

void Lista::buscarElemento(int val){
    // Verificar si la lista está vacía
    if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elemento que buscar\n";
        return;
    }

    int cont=0,cont2=1;
    Nodo* num = new Nodo(val);
    Nodo* tmp = this->primero;
    while(tmp){
        if(tmp->getValor() == num->getValor()){
            cont++;
        }
    tmp=tmp->siguiente;
    }
    if(cont == 0){
        std::cout<<"\nEl elemento no existe\n"<<std::endl;
    }else{
        Nodo* aux= primero;
        while(aux != NULL && aux->getValor()!=val){
            aux=aux->siguiente;
            cont2++;
        }
        std::cout <<"\nExiste el elemento: "<<aux->getValor()<<"\n";
        std::cout <<"\nLa ubicacion del elemento: "<<cont2<<"\n";
        //cout << "\nLa direccion del elemento buscado: " << &aux << " \n";    
    }    
}


void Lista::modificarPrimeraOcurrencia(int val,int valmod){
	if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elemento para modificar\n";
        return;
    }
	int cont=0,cont2=1;
	Nodo* num = new Nodo(val);
	Nodo* tmp = this->primero;
	while(tmp){
		if(tmp->getValor() == num->getValor()){
			cont++;
		}
	tmp=tmp->siguiente;
	}
	if(cont == 0){
		std::cout<<"\nEl elemento a modificar no existe en la lista\n"<<std::endl;
	}else{
		Nodo* aux= primero;
		while(aux != NULL && aux->getValor()!=val){
			aux=aux->siguiente;
			cont2++;
		}
		if(aux->getValor()==val){
			aux->setValor(valmod);	
		}
	std::cout <<"\nLa primera ocurrencia ubicado en la posicion: "<<cont2<<" de la lista ha sido modificado por: "<<valmod<<"\n";	
	}  
}

void Lista::mostrarLista(){
	if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elementos para mostrar\n";
        return;
    }
	Nodo *ptr =this->primero;
		while(ptr){
			std::cout<<ptr->valor<<" --> ";			
			ptr=ptr->siguiente;
		}
	std::cout<<"NULL\n";
}

int Lista::sumarLista() {
	if (this->primero == NULL) {
        std::cout << "Lista vacia, no hay elemento para sumar\n";
        return 0;
    }
    std::function<int(Nodo*, int)> sumaRecursiva = [&](Nodo* nodo, int suma) {
        if (nodo == NULL) {
            return suma;
        } else {
            return sumaRecursiva(nodo->siguiente, suma + nodo->getValor());
        }
    };

    return sumaRecursiva(this->primero, 0);
}