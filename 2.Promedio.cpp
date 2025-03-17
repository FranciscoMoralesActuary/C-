// Programa hecho por Morales Ramirez Angel Francisco
//Programa para calcular el promedio de 3 numeros cualesquiera
#include<iostream>

using std:: endl;
using std:: cout;
using std:: cin;
int num1,num2,num3,pro;
main()
{
cout<< "Ingrese el primer numero"<< endl; 
cin >> num1;
cout<< "Ingrese el segundo numero" << endl;
cin >> num2;
cout<< "Ingrese el tercer numero" << endl;
cin >> num3;
pro=(num1+num2+num3)/3;
cout<<" El promedio de los numeros " << num1 << ", " << num2 <<  " y "<< num3 << " es "<< pro <<endl;
return 0 ;
	} 
