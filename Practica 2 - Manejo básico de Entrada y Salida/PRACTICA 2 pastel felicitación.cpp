/*Jocellyn Sugey Rivera Mendoza
Practica 2- Manejo b�sico de Entrada y Salida*/

#include<iostream>
#include<locale.h>

using namespace std;

 main(){
 	int f,rInt;
 	string n;
 	
 setlocale(LC_ALL, "spanish");	
system("color 56");

	cout<<"Dime tu a�o de nacimiento: ";   cin>>f;	
	cout<<"Dime tu nombre: ";   cin>>n;
	rInt=2024-f;
	
    cout<<"       ```````" << endl;
    cout<<"       |||||||" << endl;
    cout<<"    @@@@@@@@@@@@@" << endl;
    cout<<"   {  ~@~ @ ~@~  }" << endl;
    cout<<"  @@@@@@@@@@@@@@@@@"<< endl;
    cout<<" {~@~@~ Feliz ~@~@~}" << endl;
    cout<<" {  Cumplea�os  " <<rInt<<" }" << endl;
    cout<<" {    "<<n<<"     }" << endl;
    cout<<"@@@@@@@@@@@@@@@@@@@@@"<< endl;
    cout<<"    ___)     (___"<<endl;
    cout<<"   /_____________\\adj"<<endl;
    
        }

