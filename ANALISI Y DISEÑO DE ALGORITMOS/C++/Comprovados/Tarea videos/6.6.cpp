//Elmer David Cortez Ruiz
//202510050037

/* realise un programa que lea de la estandat los siguientes datos
de ina persona */


#include<iostream>
using namespace std;

int mail()
{
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Diga su edad: "; cin>>edad;
	cout<<"Diga su sexo: "; cin>>sexo;
	cout<<"Diga su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"sexo: "<<sexo<<endl;
	cout<<"altura en metros: " <<altura<<endl;
	
 	return 0;
}