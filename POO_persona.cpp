//Clases en c++

#include<iostream>
#include<stdlib.h>
using namespace std;

class persona{
	private: //Atributos son normalmente privados
		int edad;
		string nombre;
		
	public:  //Metodos 
		persona(int,string);//constructor
		void leer();
		void correr();
		
};

//Constructor, sirve para inicializar los atributos  
persona::persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
	
}

void persona::leer(){
	cout << "soy"<<" "<< nombre <<" " << "y estoy leyendo un libro" << endl;
}

void persona::correr(){
	cout <<  "soy" <<" "<< nombre <<" "<< "y estoy corriend una maraton" << endl;
	
}
	
int main(){
	persona p1 = persona(20,"Jorge");
	persona p2(19,"maria");
	persona p3(21,"juan");
	 
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.leer();
	
	system("pause");
	return 0;
}
