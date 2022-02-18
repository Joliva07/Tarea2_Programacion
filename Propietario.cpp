//#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario{
	protected : string nit;
			double cui;
	
	protected : 
		Propietario(string n, double c){
			nit=n;
			cui=c;
		}
	void mostrar();
			
};