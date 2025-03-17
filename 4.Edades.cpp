// Programa hecho por Morales Ramirez Angel Francisco
//Programa para solicitar la edad de una persona y segun sea el caso de su edad imprimir algo 
#include<iostream>

using std:: endl;
using std:: cout;
using std:: cin;
int intervaloedad;
int main()
{
cout<< "Ingrese el numero del caso, en el que se encuntra su edad " << endl;
cout<< "1. Su edad se encuentra entre mas de 40 y los 50 a\244os " << endl;
cout<< "2. Su edad se encuentre entre mas de 50 y los 60 a\244os " << endl;
cout<< "3. Su edad se encuentre entre mas de 60 y los 70 a\244os " << endl;
cout<< "4. Su edad se encuentre entre mas de 70 y los 80 a\244os " << endl;
cin>> intervaloedad;

	switch(intervaloedad)
	{
	  
	case 1: cout<< "Usted es un Joven Adulto" << endl; 
	break;
	case 2: cout<< "Usted es un Adulto" << endl; 
	break;
	case 3: cout<< "Usted es un Adulto mayor" << endl; 
	break;
	case 4: cout<< "Usted es una persona mayor" << endl; 
	break;
	default: cout<< "Su edad no se encuentra en ninguno de los intervalos mencionados" << endl;
	break;
	}
return 0 ;
	} 
