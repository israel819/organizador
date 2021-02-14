#include "programer1.cpp"
#include <iostream>

using namespace std;
class Cliente : empleados  {
		private : string nit;
	public :
	Cliente (){
	}
	
	
	Cliente(string  nom,string ape,string car,string sex,string n) : empleados (nom,ape,car,sex){
		nit = n; 
		}
		void mostrar(){
		
		
	
			cout<<"----"<<endl;
			cout<<nit<<","<<nombre<<","<<apellido<<","<<cargo<<","<<sexo<<endl;
}
	
	};
 


	
	
	
	

	
