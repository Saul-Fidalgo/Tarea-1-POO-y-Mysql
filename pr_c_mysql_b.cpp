
#include <iostream>
#include "cliente.h"
using namespace std;
int main() {
    int telefono;
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    cout<<"Ingrese Nit:";
    getline(cin, nit);
    cout <<"Ingrese Nombres:";
    gletline(cin, nombres);
    cout <<"Ingrese Apellidos:";
    gletline(cin, apellidos);
    cout <<"Ingrese Direccion:";
    gletline(cin, direccion);
     cout <<"Ingrese Telefono:";
     cin>> telefono);
     cin.ignore();

     
cout <<"Ingrese fecha_nacimiento:";
cin>> fecha_nacimiento;
cliente c= cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
c.crear();
c.leer();
systen("pause");
return 0;
}
   