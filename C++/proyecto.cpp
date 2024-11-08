//librerias
#include <locale>
#include <string>
#include <fstream>
#include <iostream>
#include <cctype>
using namespace std;

//declarar variables
int max_meses=12,max_sucursales=15;
bool val_meses=false, val_suc=false;

bool validar(int x, int max_x){//x es lo que hay que validar, ya sea mes o sucursal
    if(isalpha(x)){
        return false;
    }
    if(x<1){
        return false;
    }
    if(x>max_x){
        return false;
    }
    return true;
}

//incluir clases atributos metodos y objetos; arreglos y archivos para almacenar datos

class Operador{
private:
    string rut,nombre,clave;
    int n,m;
public:
    Operador(){
        nombre="";
        clave="";
        rut="";
        n=0;
        m=0;
    }
    ~Operador(){
    };

    void CapturarDatos(){
        while(val_suc==false){
            cout<<"Ingrese el número de sucursales (máximo 15): ";
            cin>>n;
            val_suc=validar(n,max_sucursales);
            if(val_suc==false){
                cout<<"El número de sucursales debe estar entre 1 y 15!!!"<<endl;
            }
        }
        while(val_meses==false){
            cout<<"Ingrese el número de meses (máximo 12): ";
            cin>>m;
            val_meses=validar(m,max_meses);
            if(val_meses==false){
                cout<<"El número de meses debe estar entre 1 y 12!!!"<<endl<<endl;
            }
        }
    }

    void ventas(){
        int i,j;
        float montos[12][15],ventas;
        cout<<"Ingrese datos de ventas:";
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                cout<<"\nIngrese ventas de la sucursal "<<j<<" en el mes "<<i<<" : ";
                cin>>ventas;
                while(isdigit(ventas)==0){
                    cout<<"El dato ingresado no es numérico..."<<endl;
                    cout<<"\nIngrese ventas de la sucursal "<<j<<" en el mes "<<i<<" : ";
                    cin>>ventas;
                }
                montos[i][j]=ventas;
            }
        }

        cout<<endl<<endl;


        cout<<"Montos de ventas de "<<n<<" sucursales en "<<m<<" meses"<<endl;
        cout<<"                     Sucursales"<<endl;
        cout<<"         Meses     ";
        for(int s=1;s<=n;s++){
            cout<<s<<"             ";
        }
        cout<<endl;
        for(int i=1;i<=m;i++){
            cout<<"     "<<i<<"        ";
            for(int j=1;j<=n;j++){
                cout<<montos[i][j]<<"            ";
            }
            cout<<endl;
        }
    }

    void respaldar_datos(){
        char op='s';
        cout<<"Respaldar datos S/N?: ";
        while(op=='s' || op=='S'){
            FILE *archivo = fopen("ventas.txt","w");
            if(archivo==NULL){
                cout<<"Error al abrir archivo."<<endl;
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    fprintf()
                    //fprintf()
                }
            }
        }

    }
};

class Directivo{
private:
    string nombre,rut,clave;
public:
    Directivo(){
    nombre="";
    rut="";
    clave="";
    }
    ~Directivo(){
    };
};

//funciones auxiliares
int mostrar_matriz(int matriz[12][15], int filas,int columnas){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}






//funcion principal
int main(){
    setlocale(LC_ALL,"");
    cout<<"Cosméticos ACME: Sistema de gestión de ventas"<<endl;

    Operador o;
    o.CapturarDatos();
    o.ventas();
    o.respaldar_datos();
    return 0;
}
