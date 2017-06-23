#include "Personas.h"

Personas::Personas(string nombre,string identidad,int edad){
	this->nombre=nombre;
	this->identidad=identidad;
	this->edad=edad;
}
Personas::Personas(){

}void Personas::setNombre(string nombre){
   this-> nombre=nombre;
}
string Personas::getNombre(){
   return nombre;
}
void Personas::setIdentidad(string identidad){
   this-> identidad=identidad;
}
string Personas::getIdentidad(){
   return identidad;
}
void Personas::setEdad(int edad){
   this-> edad=edad;
}
int Personas::getEdad(){
   return edad;
}
