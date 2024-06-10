#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int edad;
    int *apuntador = &edad;
    cout<<"Ingrese su edad: ";
    cin>>*apuntador;

    if(edad>0 && edad<18){
        cout<<"Es menor de edad \n"
            <<"Su edad es: "<<edad<<"\n"
            <<"El espacio de memoria es: "<<&apuntador<<"\n"; 
    } else if (edad>=18){
        cout<<"Es mayor de edad\n"
            <<"Su edad es: "<<edad<<"\n"
            <<"El espacio de memoria es: "<<&apuntador<<"\n"; 
    } else {
        cout<<"Ingrese una edad valida\n";
    }

    delete[]apuntador;
    apuntador=NULL;
                                  
    return 0;
}