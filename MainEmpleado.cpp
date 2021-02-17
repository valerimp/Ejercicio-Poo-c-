#include "Empleado.cpp"
#include <iostream>

using namespace std;

int main(){
	
	string nombres,apellidos,direccion,puesto;
	int telefono, codem;
	float sueldo;
	cout<<"Ingrese Codigo: ";
	cin>>codem;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	// instanciar un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codem,puesto,sueldo);
	obj.mostrar();
		
}
