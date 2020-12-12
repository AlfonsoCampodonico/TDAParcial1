#include "Estacionamiento.h"


int main() {

	Estacionamiento miEstacionamiento(55);


	miEstacionamiento.ocuparLugar(5);

	miEstacionamiento.ocuparLugar(7);

	miEstacionamiento.desocuparLugar(5);

	miEstacionamiento.porcentajeOcupados();

	miEstacionamiento.ocuparLugar(1);

	miEstacionamiento.primerLugarDesocupado();

	

	return 0;

}

