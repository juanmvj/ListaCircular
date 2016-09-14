/**
Nombre(s): Juan Manuel Vazquez Jimenez
*/
#include "ListaC.h"

int main()
{
	ListaC l = ListaC(3);
	
	l.AddInicio(1);

	l.AddFinal(2);

	l.Show();
	l.VaciarLista();
	l.Show();
	l.AddInicio(1);
	l.AddInicio(2);
	l.AddInicio(3);
	l.AddInicio(4);
	l.RemoveInicio();
	l.RemoveFinal();
	l.BuscarElemento(3);
	l.Show();


	return 0;
}