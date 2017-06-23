#include "Personas.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador:public Personas{
	protected:
		string experiencia;
		string rango;
		string sueldo;
	public:
		Administrador(string,string,int,string,string,string);
		Administrador();
		string getExperiencia();
		void setExperiencia(string);

		string getRango();
		void setRango(string);

		string getSueldo();
		void setSueldo(string);

		virtual void metodo();
};
#endif
