#include <string>
#include "Estacionamiento.h"

using namespace std;

/*  � crearlo a partir de la cantidad de lugares disponibles.
	� ocupar el lugar indicado por su n�mero.
	� desocupar el lugar indicado por su n�mero.
	� calcular porcentaje de lugares que est�n ocupados.
	� devolver el primer lugar desocupado.*/



Estacionamiento::Estacionamiento(unsigned int cantidadLugaresDisponibles) {

	if (cantidadLugaresDisponibles < 1) {
		throw string("La cantidad de lugares desocupados tiene que ser mayor a 0");
	}

	this->cantidadLugaresDisponibles = cantidadLugaresDisponibles;
	this->lugar = new bool[this->cantidadLugaresDisponibles];
	for (unsigned int i = 0; i < this->cantidadLugaresDisponibles; i++) {
		this->lugar[i] = false;
	}
}

Estacionamiento::~Estacionamiento() {

	delete[] this->lugar;
}

void Estacionamiento::ocuparLugar(unsigned int posicion) {


	this->lugar[posicionar(posicion)] = true;
}

unsigned int Estacionamiento::contarLugares() {

	return this->cantidadLugaresDisponibles;
}

void Estacionamiento::desocuparLugar(unsigned int posicion) {

	this->lugar[posicionar(posicion)] = false;
}

unsigned int Estacionamiento::posicionar(unsigned int posicion) {

	if ((posicion < 1) || (posicion > this->cantidadLugaresDisponibles)) {

		throw string("No existe el lugar en el estacionamiento");
	}

	return posicion - 1;
}

unsigned int Estacionamiento::contarLugaresOcupados() {

	unsigned int ocupados = 0;

	for (unsigned int i = 0; i < this->cantidadLugaresDisponibles; i++) {

		if (this->lugar[i]) {
			ocupados++;
		}
	}

	return ocupados;
}


float Estacionamiento::porcentajeOcupados() {


	unsigned int lugaresOcupados = Estacionamiento::contarLugaresOcupados();
	if (lugaresOcupados == 0) {
		throw string("No hay lugares ocupados, el procentaje es 0%");
	}
	else
	{
		float porcentaje = lugaresOcupados / this->cantidadLugaresDisponibles * 100;
		return porcentaje;
	}
}

unsigned int Estacionamiento::primerLugarDesocupado()
{
	unsigned int a{};
	for (unsigned int i = this->cantidadLugaresDisponibles - 1; i >= 0; i--) {
		
		
		if (!this->lugar[i]) {
			a = i + 1;
		}

	}
	return a;

}

unsigned int Estacionamiento::primerLugarOcupado()
{
	unsigned int a{};
	for (unsigned int i = this->cantidadLugaresDisponibles - 1; i >= 0; i--) {
		

		if (!this->lugar[i]) {
			a = i + 1;
		}

	}

	return a;

}

