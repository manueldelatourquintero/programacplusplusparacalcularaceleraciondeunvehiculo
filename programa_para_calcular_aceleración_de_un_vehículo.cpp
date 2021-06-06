#include <iostream>

using namespace std;

int main(){
	float a; 
	float velocidadfinal;
	float velocidadinicial; 
	float tiempo;
	
	cout<<"Este es un programa para calcular la aceleracion de un vehiculo"<<endl;
	cout<<"Lo primero que debemos que saber es la formula que seria a = (velocidad final-velocidad inicial)/tiempo"<<endl;
	cout<<"Ingrese el parametro (velocidad final) ";cin>>velocidadfinal;
	cout<<"Ingrese el parametro (velocidad inicial) ";cin>>velocidadinicial;
	cout<<"Ingrese el parametro (tiempo) ";cin>>tiempo;
	cout<<"Su formula quedaria asi: ";cout<<(velocidadfinal-velocidadinicial)/tiempo;

	return 0;
}
