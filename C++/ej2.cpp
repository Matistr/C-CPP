#include <iostream>
#include <cmath>
using namespace std;

float a,b,c,x1,x2,r,d;

int main(){
    cout<<"Introduzca el valor de a:\n";
    cin>>a;
    cout<<"Introduzca el valor de b:\n";
    cin>>b;
    cout<<"Introduzca el valor de c:\n";
    cin>>c;

    r=sqrt(pow(b,2)-4*a*c);
    d=2*a;
    x1=(-b+r)/d;
    x2=(-b-r)/d;
    
    cout<<"Las soluciones son: x1="<<x1<<" y x2="<<x2<<endl;

    return 0;
}