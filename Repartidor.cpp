#include "Repartidor.h"

Repartidor::Repartidor(string nombre,string identidad,int edad,string dificultad,string dinero, Baraja* baraja):Personas(nombre,identidad,edad){
	this->dificultad=dificultad;
	this->dinero=dinero;
	this->baraja=baraja;
}
Repartidor::Repartidor(){

}void Repartidor::setDificultad(string dificultad){
   this-> dificultad=dificultad;
}
string Repartidor::getDificultad(){
   return dificultad;
}
void Repartidor::setDinero(string dinero){
   this-> dinero=dinero;
}
string Repartidor::getDinero(){
   return dinero;
}
void Repartidor::setBaraja(Baraja* baraja){
   this-> baraja=baraja;
}
Baraja* Repartidor::getBaraja(){
   return baraja;
}
void Repartidor::metodo(){

}
