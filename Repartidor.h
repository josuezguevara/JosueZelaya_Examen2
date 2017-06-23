#include "Personas.h"
#include "Baraja.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor:public Personas{
	protected:
		string dificultad;
		string dinero;
		Baraja* baraja;
	public:
		Repartidor(string,string,int,string,string,Baraja*);
		Repartidor();
		string getDificultad();
		void setDificultad(string);

		string getDinero();
		void setDinero(string);

		Baraja* getBaraja();
		void setBaraja(Baraja*);

		virtual void metodo();

};
#endif
