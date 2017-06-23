#include <iostream>
#include <string>
#include <vector>
#include "Personas.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Baraja.h"
#include "Cartas.h"
#include "Jugador.h"
#include "Mesas.h"

using namespace std;

int main(){

     bool salir=false;
     vector<Personas*> personas;
     while(!salir){
       int opcion;
       cout<<"[1]. Registrarse"<<endl;
       cout<<"[2]. Log in"<<endl;
       cout<<"[3]. Salir"<<endl;
       cout<<"Ingrese opcion: "<<endl;
       cin>>opcion;
       switch (opcion) {
         case 1:{//Registrarse
           bool salir=false;
           while (!salir) {
             int opcion;
             cout<<"[1]. Administrador"<<endl;
             cout<<"[2]. Repartidor"<<endl;
             cout<<"[3]. Jugador"<<endl;
             cout<<"[4]. Salir"<<endl;
             cout<<"Ingrese opcion: "<<endl;
             cin>>opcion;
             switch (opcion) {
               case 1:{//agregar Administradores
                 string nombre,identidad,experiencia,rango,sueldo;
                 int edad;
                 cout<<"Ingrese su nombre: "<<endl;
                 cin>>nombre;
                 cout<<"Ingrese su Edad: "<<endl;
                 cin>>edad;
                 cout<<"Ingrese su Numero de Identidad: "<<endl;
                 cin>>identidad;
                 cout<<"Ingrese su Experiencia Laboral(Años de trabajo en otros casinos): "<<endl;
                 cin>>experiencia;
                 cout<<"Ingrese su Rango de Administrador propuesto a trabajar: Tiempo(Completo,MedioTiempo,General"<<endl;
                 cin>>rango;
                 cout<<"Ingrese su sueldo propuesto a ganar: "<<endl;
                 cin>>sueldo;
                 if (identidad.size()>4){
               		cout<<"La identidad solo puede ser de 4 digitos"<<endl;
                  cout<<"Vuelva a intentarlo, de nuevo"<<endl;
               	}else{
                  Personas* admin=new Administrador(nombre,identidad,edad,experiencia,rango,sueldo);
                  personas.push_back(admin);
                  cout<<"Agregado correctamente"<<endl;
               	}
                 break;
               }//fin agregar Administradores
               case 2:{//agregar Repartidor
                 string nombre,identidad,dificultad,dinero;
                 int edad;
                 Baraja* baraja;
                 cout<<"Ingrese su nombre: "<<endl;
                 cin>>nombre;
                 cout<<"Ingrese su Edad: "<<endl;
                 cin>>edad;
                 cout<<"Ingrese su Numero de Identidad: "<<endl;
                 cin>>identidad;
                 cout<<"Ingrese su Dificultad como repartidor(Dificil,Intermedio,Facil): "<<endl;
                 cin>>dificultad;
                 cout<<"Ingrese el  dinero que le dio el casino para defender apuesta: "<<endl;
                 cin>>dinero;

                 break;
               }//fin Repartidor
               case 3:{//agregar jugador
                 string nombre,identidad,experiencia,lugar,apodo,dinero;
                 int edad;
                 cout<<"Ingrese su nombre: "<<endl;
                 cin>>nombre;
                 cout<<"Ingrese su Edad: "<<endl;
                 cin>>edad;
                 cout<<"Ingrese su Numero de Identidad: "<<endl;
                 cin>>identidad;
                 cout<<"Ingrese su lugar de procedencia: "<<endl;
                 cin>>lugar:
                 cout<<"Ingrese su apodo en el casino: "<<endl;
                 cin>>apodo:
                 cout<<"Ingrese su monto total de dinero que lleva: "<<endl;
                 cin>>dinero;
                 Personas* jugador=new Jugador(nombre,identidad,edad,lugar,apodo,dinero);
                 personas.push_back(jugador);
                 cout<<"Agregado correctamente"<<endl;
                 break;
               }//fin agregar jugador
               case 4:{//salir
                 cout<<"Ha salido de Registrarse"<<endl;
                 salir=true;
                 break;
               }//fin salir
             }//fin switch
           }//fin while
           break;
         }//fin Registrarse
         case 2:{//login
           
           cout<<"Ingrese su Nombre: "<<endl;
           break;
         }//fin login
         case 3:{//salir
           cout<<"Gracias por entrar al Sistema"<<endl;
           salir=true;
           break;
         }//fin salir
       }//fin switch principal
     }//fin while principal

     return 0;
}
