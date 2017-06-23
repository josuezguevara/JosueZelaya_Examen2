#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H
class Cartas{
	protected:
		int valor;
		string simbolo;
		string Color;
	public:
		Cartas(int,string,string);
		Cartas();
		int getValor();
		void setValor(int);

		string getSimbolo();
		void setSimbolo(string);

		string getColor();
		void setColor(string);

		int valor_aleatorio();

		string simbolo_aleatorio();

		string color_aleatorio();


};
#endif
