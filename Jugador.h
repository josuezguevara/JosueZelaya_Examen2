#include "Personas.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador:public Personas{
	protected:
		string lugar;
		string apodo;
		string dinero;
	public:
		Jugador(string,string,int,string,string,string);
		Jugador();
		string getLugar();
		void setLugar(string);

		string getApodo();
		void setApodo(string);

		string getDinero();
		void setDinero(string);

		virtual void metodo();

};
#endif
