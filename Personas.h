#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONAS_H
#define PERSONAS_H
class Personas{
	protected:
		string nombre;
		string identidad;
		int edad;
	public:
		Personas(string,string,int);
		Personas();
		string getNombre();
		void setNombre(string);

		string getIdentidad();
		void setIdentidad(string);

		int getEdad();
		void setEdad(int);

};
#endif