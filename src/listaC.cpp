/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/
#include "ListaC.h"
/**
Constructor con de una lissta vacia
@params void
@result void
*/
ListaC::ListaC()
{
	this->H = NULL;
	this->T = NULL;
}
/**
Constructor con de una lissta con un elemento 
@params Dato
@result void
*/
	ListaC::ListaC(int Dato)
	{
		Nodo *aux = new Nodo(Dato);
		this->H = aux;
		this->T = aux;
		
	}
/**
Comprobamos si una lista esta vacia
@params void
@result bool 
*/
bool ListaC::ListaVacia()
	{
		if ((this->H == NULL) && (this->T == NULL))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
/**
Añadimos un elemento al inicio de la lista
@params Dato
@result void
*/
void ListaC::AddInicio(int Dato)
	{
		Nodo *aux = new Nodo(Dato,this->H);
		if (ListaVacia())
		{
			this->T = aux;
			T->setSig(this->H);
		}
			this->H = aux;
	}
/**
Añadimos un elemento al final de la lista
@params Dato
@result void
*/
void ListaC::AddFinal(int Dato)
	{
		Nodo *aux = new Nodo (Dato);
		if(ListaVacia())
		{
			this->H = aux;
		 	this->T = aux;
		 	T->setSig(this->H);
		}
		else
		{
			this->T->setSig(aux);
			this->T = aux;
			T->setSig(this->H);
		}

	}
/**
Añadimos un elemento respecto a una referencia
@params Dato, Ref
@result void
*/
void ListaC::AddRef(int Dato,int Ref)
	{
		if(ListaVacia())
		{
			Nodo *aux = new Nodo(Dato);
			this->H = aux;
			this->T = this->H;
			std::cout<<"lista vacia, no hay ref"<<std::endl;
			return;
		}
		Nodo *aux = this->H;
		while((aux->getDato() != Ref) && (aux != NULL))
		{
			aux = aux->getSig();
		}
		if(aux != NULL)
		{
				Nodo *aux2 = new Nodo(Dato,aux->getSig());
				aux->setSig(aux2);
		}
		else
		{
				std::cout<<"no hay referencia"<<std::endl;
		}
	}
/**
removemos al inicio de la lista
@params void
@result int
*/
int ListaC::RemoveInicio()
{
	if(ListaVacia())
	{
		std::cout<<"lista vacia"<<std::endl;
		return 0;
	}
	else
	{
		int Dato = H->getDato();
		this->H = H->getSig();
		if(this->H == NULL)
		{
			this->T = NULL;
		}
		else
		{
			return Dato;
		}		
	}
}
/**
removemos el final de la lista
@params void
@result int
*/
 int ListaC::RemoveFinal()
	{
		if(ListaVacia())
		{
			std::cout<<"lista vacia"<<std::endl;
			return 0;
		}
		int Dato = T->getDato();
			if(this->H != this->T)
			{
				Nodo *aux = this->H;
				while(aux->getSig() != this->T)
				{
					aux = aux->getSig();
				}
					aux->setSig(this->H);
					this->T = aux;
					this->T->setSig(NULL);
			}
			else
			{
				this->H = NULL;
				this->T = NULL;
			}
	return Dato;
	}
/**
Removemos un nodo respecto a una referencia y guardamos el dato
@params Ref
@result int
*/
int ListaC::RemoveRef(int Ref)
	{
		if(ListaVacia())
		{
			std::cout<<"lista vacia"<<std::endl;
			return 0;
		}
		else
		{
			Nodo *aux = this->H;
			while((aux->getDato()!= Ref) && (aux != this->T))
			{
					
				aux = aux->getSig();
			}
			Nodo *aux2 = this->H;
			while(aux2->getSig() != aux)
			{
				aux2 = aux2->getSig();
			}
			if(aux != NULL)
			{
				aux2->setSig(aux->getSig());	
			}
			else
			{
				std::cout<<"no hay referencia"<<std::endl;
			}
			return Ref;
		}

	}
/**
eliminamos todos los elementos de la lista 
@params void
@result void
*/
void ListaC::VaciarLista()
  {
		if (ListaVacia())
		{
				std::cout<<"lista vacia"<<std::endl;
				
		}
		else
		{
				this->H = NULL;
				this->T = NULL;
				std::cout<<"ahora vacia"<<std::endl;
		}
		
	}
/**
Buscamos un elemento en la lista
@params Dato
@result Nodo
*/
 Nodo *ListaC::BuscarElemento(int Dato)
	{
		if (ListaVacia())
		{
			std::cout<<"lista vacia"<<std::endl;	
			return NULL;
		}
		else
		{
			Nodo* aux = this->H;
			while((aux->getDato() != Dato) && (aux != this->T))
			{
				aux = aux->getSig();
			}
			if(aux->getDato() == Dato)
			{
				std::cout<<"se encontro: "<<aux->getDato()<<std::endl;
				return aux;
			}
			std::cout<<"NO se encontro elemento"<<std::endl;
		}
			
	}
/**
mostramos todos los elementos de la lista
@params void
@result void
*/
 void ListaC::Show()
{
	Nodo* aux = this->H;
	while(aux != T)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux = aux->getSig();
	}
	if (!ListaVacia())
	{		
		std::cout<<aux->getDato()<<std::endl;
	}
}