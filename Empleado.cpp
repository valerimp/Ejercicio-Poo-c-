#include "Persona.cpp"
#include <iostream>

using namespace std; 

class Empleado: Persona{
	//atributos 
	private: int codempleado;
	private: string puesto;
	private: float sueldo;
	//metodo constructor
	public: Empleado(){
	}
	Empleado(string nom,string ape,string dir,int tel,int codem, string ps, float suel) : Persona(nom,ape,dir,tel){ 
    codempleado=codem;
    puesto=ps;
    sueldo = suel;
 }
 // metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<codempleado<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<puesto<<","<<sueldo<<endl;
}	
};
