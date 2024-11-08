#include <iostream>
#include <cmath>
using namespace std;

int i,op;
float n,k,s;

int main(){
    cout<<"Sumatorias"<<endl;
    cout<<"1. Sumatoria 1 = 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n"<<endl;
    cout<<"2. Sumatoria 2 = 1/2^2 + 2/3^2 + 3/4^2 + . . . + n/(n+1)^2"<<endl;
    cout<<"3. Sumatoria 3 = 1/K + 2/K^2 + 3/k^3 + . . . + n/K^n"<<endl;
    cout<<"4. Salir del programa"<<endl;
    cout<<"Indique la opcion: ";
    cin>>op;
    switch(op){
        case 1:
            cout<<"Indique el valor de 'n':";
            cin>>n;
            for(i=1;i<=n;i++){
                s+=1.0/i;
            }
            cout<<"Sumatoria 1: "<<s<<endl;
            break;
        case 2:
            cout<<"Indique el valor de 'n':";
            cin>>n;
            for(i=1;i<=n;i++){
                s+=i/pow(i + 1.0, 2);
            }
            cout<<"Sumatoria 2: "<<s<<endl;
            break;

        case 3:
            cout<<"Indique el valor de 'n':";
            cin>>n;
            cout<<"Indique el valor de K: "<<endl;
            cin>>k;
            for(i=1;i<=n;i++){
                s+=i/pow(k,i);
            }
            cout<<"Sumatoria 3: "<<s<<endl;
            break;

        case 4:
            break;
    }
    return 0;
}

