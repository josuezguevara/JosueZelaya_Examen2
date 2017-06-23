#include "Baraja.h"

Baraja::Baraja(vector<Cartas*> cartas){
	this->cartas=cartas;
}
Baraja::Baraja(){

}void Baraja::setCartas(Cartas* Ccartas){
   this-> cartas.push_back(Ccartas);
}
vector<Cartas*> Baraja::getCartas(){
   return cartas;
}
