//Elmer David Cortez Ruiz
//202510050037

/* escribe un programa que lea de la entrada estandar el precio de un producto y muestre en 
la salida estandar el precio del producto al aplicarle el Iva*/


#include<iostream>
usingnamespace std;

int mail()
{
	int costo = 0,iva;
	
	cout<<"ingrese el precio del producto"<<endl;
	cin>>costo;
	iva=costo+(costo * 0.15);
	
	cout<<"el precio total seria de: "<<iva<<endl;
	return 0;
	
}





