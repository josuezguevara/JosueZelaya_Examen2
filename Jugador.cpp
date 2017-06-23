#include "Jugador.h"

Jugador::Jugador(string nombre,string identidad,int edad,string lugar,string apodo,string dinero):Personas(nombre,identidad,edad){
	this->lugar=lugar;
	this->apodo=apodo;
	this->dinero=dinero;
}
Jugador::Jugador(){

}void Jugador::setLugar(string lugar){
   this-> lugar=lugar;
}
string Jugador::getLugar(){
   return lugar;
}
void Jugador::setApodo(string apodo){
   this-> apodo=apodo;
}
string Jugador::getApodo(){
   return apodo;
}
void Jugador::setDinero(string dinero){
   this-> dinero=dinero;
}
string Jugador::getDinero(){
   return dinero;
}

void Jugador::metodo(){

}
