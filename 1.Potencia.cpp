// Programa hecho por Morales Ramirez Angel Francisco
//Programa para calcular un numero a cualquier potencia
#include<iostream>
#include <math.h>

using std:: endl;
using std:: cout;
using std:: cin;
float base, res;
int pot; //base=base, pot=potencia, res=resultado
main()
{
cout<< "Ingrese el numero"<< endl; 
cin >> base;
cout<< "Ingrese la potencia que quiere para ese numero" << endl;
cin >> pot;
res= pow(base,pot);
cout<<"El resultado de elevar " << base << " a la potencia "<< pot<< " es "<< res <<endl;
return 0 ;
	} 
