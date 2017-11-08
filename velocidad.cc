//Adriana Tapia Ramìrez
//Calcular la velocidad
#include <iostream>
 using namespace std;
 int main (){
 	float v=0, d=0, t=0;
 	
 	cout<<"Escriba la distancia recorrida en metros: "<<endl; cin>>d;
 	cout<<"Escriba el tiempo que se tardo en recorre esa distancia (en seg): "; cin>>t;
 		 	
 	v= d/t;
 	 	
 	cout<<"\nLa velocidad  es: "<< v<< "m/s";
 	
  	
 	return 0;
 	
}
