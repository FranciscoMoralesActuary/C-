//Programa para pedir la edad y el nombre del usuario para mostrarlos en pantalla 
#include<iostream>

using std:: endl;
using std:: cout;
using std:: cin;

int edad;
char nom[20];
main()
{
cout<< "Ingrese su nombre"<< endl; 
cin >> nom;
cout<< "Ingrese su edad" << endl;
cin >> edad;
cout<< nom <<" su edad es " << edad << " a\244os"<<endl;
return 0 ;
	}
