#include "Administrador.h"


Administrador::Administrador(string nombre,string identidad,int edad,string experiencia,string rango,string sueldo):Personas(nombre,identidad,edad){
	this->experiencia=experiencia;
	this->rango=rango;
	this->sueldo=sueldo;
}
Administrador::Administrador(){

}void Administrador::setExperiencia(string experiencia){
   this-> experiencia=experiencia;
}
string Administrador::getExperiencia(){
   return experiencia;
}
void Administrador::setRango(string rango){
   this-> rango=rango;
}
string Administrador::getRango(){
   return rango;
}
void Administrador::setSueldo(string sueldo){
   this-> sueldo=sueldo;
}
string Administrador::getSueldo(){
   return sueldo;
}
void Administrador::metodo(){

}
