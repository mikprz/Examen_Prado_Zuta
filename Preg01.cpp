#include<iostream>
using namespace std;
 
 int main () {
 	int x,a,b;
 	
 	cout<<"-> Ingrese el primer numero: "; 
	cin>>a;
 	cout<<"-> Ingrese el segundo numero: "; 
	cin>>b; 
	
	x=a;
	a=b;
	b=x;
	
	cout<<"Los valores cambiados son: \n";
	cout<<"primer numero= "<<a<<endl;
	cout<<"segundo numero= "<<b;
 
 }
 
