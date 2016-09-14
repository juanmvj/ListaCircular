/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase listaC, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/
#include "Nodo.h" 

class ListaC
{
public:
	Nodo *H;
	Nodo *T;
	//constructores
	ListaC();
	ListaC(int Dato);
	//metodos
	bool ListaVacia();
	void AddInicio(int Dato);
	void AddFinal(int Dato);
	int RemoveInicio();
	int RemoveFinal();
	void AddRef(int Dato,int Ref);
	int RemoveRef(int Ref);
	Nodo *BuscarElemento(int Dato);
	void VaciarLista();
	void Show();
};