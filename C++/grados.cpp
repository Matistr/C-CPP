#include <iostream>
using namespace std;

float c, f;

int main(){
    cout<<"Ingrese temperatura en gradoss Celcius: ";
    cin>>c;
    f=(9/5)*c+32;
    cout<<"Temperatura en grados Fahrenheit: "<<f<<endl;
    system("PAUSE");
    return 0;
}