#include "Cartas.h"
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

Cartas::Cartas(int valor,string simbolo,string Color){
	this->valor=valor;
	this->simbolo=simbolo;
	this->Color=Color;
}
Cartas::Cartas(){
	valor=valor_aleatorio();
	simbolo=simbolo_aleatorio();
	Color=color_aleatorio();
}

void Cartas::setValor(int valor){
   this-> valor=valor;
}
int Cartas::getValor(){
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

int Cartas::valor_aleatorio(){

	srand(time(0));
	int valor;
	return valor=rand()%13+1;
}

string Cartas::simbolo_aleatorio(){

	srand(time(0));
	int valor;
	string simbolo;
	valor=rand()%4+1;
	if (valor==1){
		return simbolo="♠";
	}else if (valor==2){
		return simbolo="♥";
	}else if (valor==3){
		return simbolo="♦";
	}else if (valor==4){
		return simbolo="♣";
	}
}

string Cartas::color_aleatorio(){
	srand(time(0));
	int valor;
	string color;
	valor=rand()%2+1;
	if (valor==1){
		return color="Negro";
	}else if (valor==2){
		return color="Blanco";
	}
}
