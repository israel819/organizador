#include <iostream>
using namespace std;
class empleados{
	// Atributos
	protected : string nombre,apellido,cargo,sexo;
	int numerodecar;

	protected :
		empleados(){
			
	
		}

	empleados( string nom,string ape,string car,string sex){
		
		
		nombre = nom;
		apellido = ape;
		cargo = car;
		sexo = sex;
	}
	
	void mostrar ();
	
	
	
	
	
	
	
	
	
};
