#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "LanzarDado.h"

int LanzarDado::LanzaDado()
{
	int CaraDado;
	/* initialize random seed: */
	srand (time(NULL));
	/* generate secret number between 1 and 6: */
	CaraDado = rand() % 6 + 1;
	
	return CaraDado;
}