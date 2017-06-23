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
#include <typeinfo>

using namespace std;

int main(){

     bool salir=false;
     vector<Personas*> personas;
     vector<Mesas*> mesas;
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
                 cin>>lugar;
                 cout<<"Ingrese su apodo en el casino: "<<endl;
                 cin>>apodo;
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
           string nombre, identidad;
           cout<<"Ingrese su Nombre: "<<endl;
           cin>>nombre;
           cout<<"Ingrese su identidad: "<<endl;
           cin>>identidad;
           for (int i = 0; i < personas.size(); i++) {
             if (nombre==personas[i]->getNombre()&& identidad==personas[i]->getIdentidad()){
               cout<<"Bienvenido"<<endl;
               if (dynamic_cast<Administrador*>(personas[i])){
                 bool libre=false;
                 while (!libre){
                   int opcion;
                   cout<<"Administrador"<<endl;
                   cout<<"[1]. Crear"<<endl;
                   cout<<"[2]. Modificar"<<endl;
                   cout<<"[3]. Eliminar"<<endl;
                   cout<<"[4]. Listar Jugador y Repartidor"<<endl;
                   cout<<"[5]. Salir"<<endl;
                   cout<<"Ingrese opcion: "<<endl;
                   cin>>opcion;
                   switch (opcion) {
                     case 1:{
                       string num_mesa, tipo_mesa;
                       Repartidor* repartidor;
                       Jugador* jugador;
                       int pos1,pos2;
                       cout<<"Ingrese Numero de Mesa: "<<endl;
                       cin>>num_mesa;
                       cout<<"Ingrese el Tipo de Mesa(VIP,Clasica,Viajero): "<<endl;
                       cin>>tipo_mesa;
                       cout<<"Ingrese posicion del Repartidor que quiere agregar a la mesa: "<<endl;
                       cin>>pos1;
                       for (int i = 0; i < personas.size(); i++) {
                          if (dynamic_cast<Repartidor*>(personas[i])){
                            if (personas[i]==personas[pos1]){
                              repartidor=static_cast<Repartidor*>(personas[i]);
                              cout<<"El Repartidor fue agregado "<<endl;
                            }
                          }
                       }
                       cout<<"Ingrese posicion del Jugador que quiere agregar a la mesa: "<<endl;
                       cin>>pos2;
                       for (int i = 0; i < personas.size(); i++) {
                          if (dynamic_cast<Jugador*>(personas[i])){
                            if (personas[i]==personas[pos2]){
                              jugador=static_cast<Jugador*>(personas[i]);
                              cout<<"El Jugador fue agregado "<<endl;
                            }
                          }
                       }
                       Mesas* mesa=new Mesas(num_mesa,tipo_mesa,repartidor,jugador);
                       mesas.push_back(mesa);
                       break;
                     }
                     case 2:{
                       int pos,pos1,pos2;
                       string num_mesa;
                       string tipo_mesa;
                       Repartidor* repartidor;
                       Jugador* jugador;
                       cout<<"Ingrese posicion a Modificar: "<<endl;
                       cin>>pos;
                       for (int i = 0; i < mesas.size(); i++) {
                         if (mesas[i]==mesas[pos]){
                           cout<<"Ingrese la nueva posicion a Modificar: "<<endl;
                           cin>>pos;
                           cout<<"Ingrese el nuevo numero de mesa: "<<endl;
                           cin>>num_mesa;
                           cout<<"Ingrese el nuevo Tipo de Mesa(VIP,Clasica,Viajero): "<<endl;
                           cin>>tipo_mesa;
                           cout<<"Ingrese nueva posicion del Repartidor que quiere agrega a la mesa: "<<endl;
                           cin>>pos1;
                           for (int i = 0; i < personas.size(); i++) {
                              if (dynamic_cast<Repartidor*>(personas[i])){
                                if (personas[i]==personas[pos1]){
                                  repartidor=static_cast<Repartidor*>(personas[i]);
                                  cout<<"El Repartidor fue agregado "<<endl;
                                }
                              }
                           }
                           cout<<"Ingrese nueva posicion del Jugador que quiere agregar a la mesa: "<<endl;
                           cin>>pos2;
                           for (int i = 0; i < personas.size(); i++) {
                              if (dynamic_cast<Jugador*>(personas[i])){
                                if (personas[i]==personas[pos2]){
                                  jugador=static_cast<Jugador*>(personas[i]);
                                  cout<<"El Jugador fue agregado "<<endl;
                                }
                              }
                           }
                           mesas[pos]->setNum_mesa(num_mesa);
                           mesas[pos]->setTipo_mesa(tipo_mesa);
                           mesas[pos]->setRepartidor(repartidor);
                           mesas[pos]->setJugador(jugador);
                           cout<<"Se ha modificado correctamente"<<endl;
                         }//fin if
                       }
                       break;
                     }
                     case 3:{
                       break;
                     }
                     case 4:{
                       for (int i = 0; i < personas.size(); i++) {
                         if (dynamic_cast<Repartidor*>(personas[i])){
                           cout<<"Repartidor"<<endl;
                           cout<<" [ " <<i<<" ] ";
                          cout<<" Nombre: "<<personas[i]->getNombre()<< " Identidad:  "
                          <<personas[i]->getIdentidad()<<endl;
                        }else if (dynamic_cast<Jugador*>(personas[i])){
                          cout<<"Jugador"<<endl;
                          cout<<" [ " <<i<<" ] ";
                         cout<<" Nombre: "<<personas[i]->getNombre()<< " Identidad:  "
                         <<personas[i]->getIdentidad()<<endl;
                        }
                       }
                       break;
                     }
                     case 5:{
                       cout<<"Ha salido el Administrador"<<endl;
                       libre=true;
                       break;
                     }
                   }
                }


               }
               break;
             }else{
               cout<<"Nombre y Identidad Incorrectos"<<endl;
             }
           }
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
