#include<iostream>
using namespace std;

int main(){
	int horas=0;
	int importe=0;
	
	cout<<"Ingrese el numero de horas: "; cin>>horas; cout<<endl;
	
	if(horas>0){
		if(horas<=4){
			importe=6;
		}
		if(horas>4){
			importe=(2*(horas-4))+6;
		}
	} 
	if(horas<0){
		cout<<"No ingresaste una cantidad de horas positivas";
	}
	if(horas=0){
		importe=0;
	}
	
	cout<<"El importe a pagar para el estacionamiento Mi cochera es: "; cout<<importe;
	
	return 0;
}