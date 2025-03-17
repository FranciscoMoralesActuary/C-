// Programa hecho por Morales Ramirez Angel Francisco
//Programa para determinar si el alumno esta reprobado o aprobado
#include<iostream>
using std:: endl;
using std:: cout;
using std:: cin;
char nombre[80];
float calif ;
int main()
{
cout<< "Ingrese su nombre por favor " << endl;
cin>>nombre;
cout<< "Ingrese su calificacion por favor " << endl;
cin>>calif;
while (calif<0 || calif>10 )
	{
	cout<<"Has ingresado una calificacion invalida, por favor intenta de nuevo"<< endl;	
	cout<< "Ingrese su calificacion por favor " << endl;
	cin>>calif;
	}
	if (calif>=6.1 && calif<=10)
	{
	cout<<"Felicidades " << nombre<< " estas aprobado " << endl;	
	}
	else 
		if (calif>0 && calif<=6)
		{
		cout<< nombre << " estas reprobado " << endl;	
		}
		else 
		{
		cout<<"Has ingresado una calificacion invalida, por favor intenta de nuevo"<< endl;
		}
return 0;
	} 
