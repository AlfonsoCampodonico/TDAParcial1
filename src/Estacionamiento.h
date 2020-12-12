#pragma once
#ifndef ESTACIONAMIENTO_H_
#define ESTACIONAMIENTO_H_

class Estacionamiento {

private:
	unsigned int cantidadLugaresDisponibles;
	bool* lugar;
	float porcentaje;

public:

	/*
	 * pre : 'cantidadLugaresDisponibles' debe ser un valor mayor a 0.
	 * post: el Estacionamiento tiene tantos lugares como los indicadas por
	 * 		 'cantidadLugaresDisponibles'  libres.
	 */
	Estacionamiento(unsigned int cantidadLugaresDisponibles);

	/*
	 * pre : 
	 *       'posicionLugar' identifica una lugar por su n�mero, debe estar en el
	 *       rango [1..contarLugares()]
	 * post: ocupa un lugar en el estacionamiento
	 */
	void ocuparLugar(unsigned int posicionLugar);

	/*
	 * post: devuelve la cantidad de lugares que tiene el estacionamiento.
	 */
	unsigned int contarLugares();

	/*
	 * pre : 'posicionLugar' identifica un lugar por su n�mero, debe estar en el
	 *       rango [1..contarLugares()].
	 * 		 
	 * post: marca como false el lugar
	 */
	void desocuparLugar(unsigned int posicionLugar);

	/*
	 * post: devuelve la cantidad de lugares que en el estacionamiento que
	 * 		 estan ocupados.
	 */
	unsigned int contarLugaresOcupados();

	/*
	 *
	 * post: devuelve el porcentaje de lugares ocupados
	 */

	float porcentajeOcupados();

	/*
	 * post: retorna el primer lugar desocupado de la lista
	 */

	unsigned int primerLugarDesocupado();

	/*
	 * post: libera los recursos pedidos por la instancia.
	 */
	~Estacionamiento();

	/*post: devuelve el primer lugar ocupado de la lista*/
	unsigned int primerLugarOcupado();
	
private:
	unsigned int posicionar(unsigned int lugar);
};


#endif /* ESTACIONAMIENTO_H_ */