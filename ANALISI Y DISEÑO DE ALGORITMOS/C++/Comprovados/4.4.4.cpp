//Elmer David Cortez Ruiz
//202510050037

/*escriba un programa que lea la entrada estandar dos numeros y muestra en la salida
estandar su suma, resta, multiplicacion y divicion */

#include<iostream>
using namespace std;

int mail()
{
	int n1,n2,suma = 0, resta = 0, multiplicacion = 0, divicion = 0 ;
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite un numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	divicion = (n1 / n2);
	
	cout<<"\nLa suma es:"<<suma<<endl;
	cout<<"la resta es :"<<resta<<endl;
	cout<<"la Multiplicacion :"<<multiplicacion<<endl;
	cout<<"La divicion es :"<<divicion<<endl;
	
	return 1;
	
	
}