#include<iostream>
using namespace std;

void donacion(int limitIni, int limitFinal,float i,float g);

int main(){
    float ganancia;
    
    cout<<"Ingrese la ganancia de Pablito: ";
    cin>>ganancia;
    
    donacion(0,1000,0.05,ganancia);
    donacion(1000,1500,0.07,ganancia);
    donacion(1500,2000,0.08,ganancia);
    donacion(2000,5000,0.10,ganancia);
    if(ganancia>5000) cout<<"La donacion de Pablito es de "<<0.15*ganancia<<" soles";

    return 0;
}

void donacion(int limitIni, int limitFinal,float i,float g){
    if((g>limitIni) && (g<=limitFinal)){
        cout<<"La donacion de Pablito es de "<<i*g<<" soles";
    }
}