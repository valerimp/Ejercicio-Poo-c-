#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{
 // atributos
 private : string nit;
 // constructor
 public:
 Cliente(){
 }
 Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){ 
 nit = n;
 }
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};
