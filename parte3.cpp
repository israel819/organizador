#include "Parte2.cpp"
#include <iostream>
using namespace std;
main (){
	string nit,nombre,apellido,cargo;
	int telefono;
	cout<<"ingresar numero de nit o CF";
	cin>>nit;
	cout<<"ingresar nombre";
	cin>>nombre;
	cout<<"ingresar cargo";
	cin>>cargo;
	
	Cliente obj = Cliente(nombre,apellido,direccion,nit);
	obj.mostrar();
}

