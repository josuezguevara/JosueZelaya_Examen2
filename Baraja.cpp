#include "Baraja.h"

Baraja::Baraja(vector<Cartas*> cartas){
	this->cartas=cartas;
}
Baraja::Baraja(){
	for (int i = 0; i < 52; i++) {
		cartas.push_back(new Cartas());
	}
}
void Baraja::setCartas(Cartas* cartas){
   this-> cartas.push_back(cartas);
}
vector<Cartas*> Baraja::getCartas(){
   return cartas;
}
