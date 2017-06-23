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
                 
                 break;
               }//fin agregar Administradores
               case 2:{//agregar Repartidor
                 break;
               }//fin Repartidor
               case 3:{//agregar jugador
                 break;
               }//fin agregar jugador
               case 4:{//salir
                 cout<<"Ha salido de Registrarse"
                 salir=true;
                 break;
               }//fin salir
             }//fin switch
           }//fin while
           break;
         }//fin Registrarse
         case 2:{//login
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
