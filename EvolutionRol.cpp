#include <cstdio>
#include <cstddef>
#include <iostream>
#include "Turns.h"
#include "LanzarDado.h"

int main()
{
	Turns Turn;
	bool HaveTurn = Turn.HaveTurn("a");
	//std::cout << HaveTurn << std::endl;
	LanzarDado LanzaDado;
	int CaraDado = LanzaDado.LanzaDado();
	std::cout << "Se ha lanzado el dado y el resultado es: " << CaraDado << std::endl;
	return 0;
}