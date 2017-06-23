#include <iostream>
#include <string>
#include <vector>
#include "Cartas.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H
class Baraja{
	protected:
		vector<Cartas*> cartas;
	public:
		Baraja(vector<Cartas*>);
		Baraja();
		vector<Cartas*> getCartas();
		void setCartas(Cartas*);

};
#endif