/*
IMPORTANTE, LA UMG NO SE RESPONSABILIZA POR DANIOS CAUSADOS A SU CARRO, ADIOS.!


 */
#include "Propietario.cpp"
#include <iostream>

using namespace std;

class Persona: Propietario{
	private : string nombres, apellidos, direccion, fn;
			int telefono;
	
	public : 
		Persona(string nom, string ape, string dir, string f, int tel, string n, double c) : Propietario(n,c){
			nombres=nom;
			apellidos=ape;
			direccion=dir;
			fn=f;
			telefono=tel;	
			nit=n;
			cui=c;
		}	
		
	void setNom(string nom){
		nombres=nom;
	}
	void setApe(string ape){
		apellidos=ape;
	}
	void setDir(string dir){
		direccion=dir;
	}	
	void setFn(string f){
		fn=f;
	}
	void setTel(int tel){
		telefono=tel;
	}
	void setNit(string n){
		nit=n;
	}
	void setCui(double c){
		cui=c;
	}
	
	string getnom(){
		return nombres;
	}
	string getape(){
		return apellidos;
	}
	string getdir(){
		return direccion;
	}
	string getfn(){
		return fn;
	}
	int gettel(){
		return telefono;
	}
	string getnit(){
		return nit;
	}
	double getcui(){
		return cui;
	}
	
	void mostrar(){
	cout<<"____________"<<endl;
	cout<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<fn<<", "<<telefono<<", "<<nit<<", "<<cui<<", "<<endl;
	}
};