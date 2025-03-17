// Programa hecho por Morales Ramirez Angel Francisco
//Programa para calcular 1 de las 3 areas eligida por el usuario  
#include<iostream>
using std:: endl;
using std:: cout;
using std:: cin;
float radio, area, lado, base, altura;
int opcion;
int main ()
{
cout<< " Seleccion la opcion del area que quiera calcular " << endl;
cout<< " Opcion 1 Area del Circulo " << endl;
cout<< " Opcion 2 Area del Cuadrado " << endl;
cout<< " Opcion 3 Area del triangulo " << endl;
cin>> opcion;
while (opcion!=1 and opcion!=2 and opcion!=3)
		{
		cout<< " Ha ingresado una opcion invalida " << endl;
		cout<< " Por favor ingrese una opcion de las 3 validas " << endl;	
		cin>> opcion;
		}
		
switch (opcion)
	{
		case 1: cout<< "Selecciono calcular el area del Circulo " << endl;
				cout<< "Ingrese el valor del radio del Circulo " << endl;
				cin>> radio;
				while (radio<=0)
					{
					cout<< "Ha ingresado un radio invalido. Recuerde que no existen areas de nuremos negativos o del 0" << endl;
					cout<< "Por favor ingrese valor valido para el radio" << endl;	
					cin>> radio;
					}
				area=radio*radio*3.1416;
				cout<< "El area del Circulo es "<< area << endl;
		break;
		case 2: cout<< "Selecciono calcular el area del Cuadrado " << endl;
				cout<< "Ingrese el valor lado del cuadrado " << endl;
				cin>> lado;
				while (lado<=0)
					{
					cout<< "Ha ingresado un lado invalido. Recuerde que no existen areas de nuremos negativos o del 0" << endl;
					cout<< "Por favor ingrese valor valido para el lado" << endl;	
					cin>> lado;
					}
				area=lado*lado;
				cout<< "El area del Cuadrado es "<< area << endl;
		break;
		case 3: cout<< "Selecciono calcular el area del Triangulo " << endl;
				cout<< "Ingrese el valor de la base del triangulo " << endl;
				cin>> base;
				while (base<=0)
					{
					cout<< "Ha ingresado una base invalida. Recuerde que no existen areas de nuremos negativos o del 0" << endl;
					cout<< "Por favor ingrese valor valido para la base" << endl;	
					cin>> base;
					}
				cout<< "Ingrese el valor de la altura del triangulo " << endl;
				cin>> altura;
				while (altura<=0)
					{
					cout<< "Ha ingresado una altura invalida. Recuerde que no existen areas de nuremos negativos o del 0" << endl;
					cout<< "Por favor ingrese valor valido para la altura" << endl;	
					cin>> altura;
					}
				area=0.5*base*altura;
				cout<< "El area del Triangulo es "<< area << endl;
		break;
	}

return 0;
}


