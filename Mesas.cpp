#include "Mesas.h"

Mesas::Mesas(string num_mesa,string tipo_mesa,Repartidor* repartidor,Jugador* jugador){
	this->num_mesa=num_mesa;
	this->tipo_mesa=tipo_mesa;
	this->repartidor=repartidor;
	this->jugador=jugador;
}
Mesas::Mesas(){

}void Mesas::setNum_mesa(string num_mesa){
   this-> num_mesa=num_mesa;
}
string Mesas::getNum_mesa(){
   return num_mesa;
}
void Mesas::setTipo_mesa(string tipo_mesa){
   this-> tipo_mesa=tipo_mesa;
}
string Mesas::getTipo_mesa(){
   return tipo_mesa;
}
/*void Mesas::setAdministrador(Administrador* administrador){
   this-> administrador=administrador;
}
Administrador* Mesas::getAdministrador(){
   return administrador;
}*/
void Mesas::setRepartidor(Repartidor* repartidor){
   this-> repartidor=repartidor;
}
Repartidor* Mesas::getRepartidor(){
   return repartidor;
}
void Mesas::setJugador(Jugador* jugador){
   this-> jugador=jugador;
}
Jugador* Mesas::getJugador(){
   return jugador;
}
