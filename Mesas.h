#include <iostream>
#include <string>
#include <vector>
#include "Administrador.h"
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

#ifndef MESAS_H
#define MESAS_H
class Mesas{
	protected:
		string num_mesa;
		string tipo_mesa;
		Administrador* administrador;
		Repartidor* repartidor;
		Jugador* jugador;
	public:
		Mesas(string,string,Administrador*,Repartidor*,Jugador*);
		Mesas();
		string getNum_mesa();
		void setNum_mesa(string);

		string getTipo_mesa();
		void setTipo_mesa(string);

		Administrador* getAdministrador();
		void setAdministrador(Administrador*);

		Repartidor* getRepartidor();
		void setRepartidor(Repartidor*);

		Jugador* getJugador();
		void setJugador(Jugador*);

};
#endif
