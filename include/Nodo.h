/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase Nodo, con metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/
#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo *Sig;
public:
	//constructores
	Nodo(int Dato, Nodo *Sig);
	Nodo(int Dato);
	//seters y geters
	void setDato(int Dato);
	void setSig(Nodo *Sig);
	int getDato();
	Nodo* getSig();
};

