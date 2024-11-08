#include <iostream>
using namespace std;

int personas, pizzas, trozos, sobras, porpersona;

int main(){
    cout<<"Indique el numero de personas:\n";
    cin>>personas;
    cout<<"Indique el numero de pizzas encargadas:\n";
    cin>>pizzas;
    trozos=(pizzas*8);
    porpersona=trozos/personas;
    sobras=trozos-porpersona*personas;
    cout<<porpersona<<" Trozos por persona"<<endl;
    cout<<"Sobran "<<sobras<<" trozos de pizza";
    return 0;
}
