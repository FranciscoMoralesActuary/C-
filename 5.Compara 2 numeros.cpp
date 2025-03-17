// Programa hecho por Morales Ramirez Angel Francisco
//Programa para determinar que numero es mayor entre 2 numeros
#include<iostream>

using std:: endl;
using std:: cout;
using std:: cin;

float num1, num2;
main()
{
cout<< "Ingrese 2 numeros diferentes entre si"<< endl; 
cin >> num1; 
cin >> num2;
	if(num1>num2)
	{
	cout<< "El numero mayor es " <<num1 << endl;
	}
	else
	{
	cout<< "El numero mayor es " <<num2 << endl;
	}	
return 0 ;
	}
