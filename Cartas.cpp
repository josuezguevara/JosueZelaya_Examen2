#include "Cartas.h"

Cartas::Cartas(string valor,string simbolo,string Color){
	this->valor=valor;
	this->simbolo=simbolo;
	this->Color=Color;
}
Cartas::Cartas(){

}void Cartas::setValor(string valor){
   this-> valor=valor;
}
string Cartas::getValor(){
   return valor;
}
void Cartas::setSimbolo(string simbolo){
   this-> simbolo=simbolo;
}
string Cartas::getSimbolo(){
   return simbolo;
}
void Cartas::setColor(string Color){
   this-> Color=Color;
}
string Cartas::getColor(){
   return Color;
}
