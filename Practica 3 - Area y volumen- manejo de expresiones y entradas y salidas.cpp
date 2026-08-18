/*Jocellyn Sugey Rivera Mendoza
Práctica 3- Área y Volumen - Manejo de Expresiones y Entradas y Salidas

Obtener el área y el volumen de un cono, capturando los valores de sus medidas iniciales.*/

#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

main(){
setlocale(LC_ALL, "spanish");	
float radio, altura, volumen, area, triz;

cout<<"===Calcula el área y el volumen de un cono==="<<endl;
cout<<"Dime la altura del cono: "; cin>>altura;
cout<<"Dime el radio del cono: "; cin>>radio;
cout<<"\n---------------------------------------------"<<endl;
triz= sqrt(pow(radio,2)+ pow(altura,2));
cout<<"Para continuar, necesitamos un dato más:"<<endl;
cout<<"\nLa generatriz del cono es: "<<triz<<" "<< endl;
cout<<"\n==============================================="<<endl;
	volumen=(M_PI * pow(radio,2)*altura)/3;
	area=M_PI * radio*(radio+triz);
	cout<<"El volumen del cono es: " <<volumen<<endl;
	cout<<"El área de la superficie del cono es: " <<area<<endl;


}
