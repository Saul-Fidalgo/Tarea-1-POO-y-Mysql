// pr_c_mysqul_b.cpp: Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi.//

#include <iostream>
#include "cliente.h"
using namespace std;
int main(){





    /*string puesto;
    cout <<"Ingrese puesto:";

    cin>> puesto;
    }
    string inset * "insert into puestos(puesto) values(`" + puesto + "`)";
    const char*i- insert. c_str();
    q_estado= mysql_query(conectar, i);
    if (‼q_estado){
        
        cout <<"Ingreso Exitoso..." << endl;
    }
        
    else {
        cout <<"... Error al ingresar la informacion ..."<< endl;

    }*/
    cliente c = cliente();
    c.leer();
    
    system("pause");
    return 0;
    }
        

        #pragma once
        #include <mysql.h>
        #include <iostream>
        #include <string>
                <include "persona.h"
        #include "ConexionBD.h"
    
        using namespace std;
        class Cliente : persona{
            // atributos 
        }
            private: string nit;
            //constructor
            public:
            cliente() {

            }
            cliente(string nom, string ape,string dir, int tel,string fn, string h) : Persona(nom; ape,dir, tel, fn){
                nit = n;
            }

            //METODOS
            //set (modificar)
            void setNit(string n) {nit * n; }
            void setNombre(string nom) {nombres * nom; }
            void setApellidos(string ape) {apellidos * ape; }
            void setDireccion(string dir) {direccion * dir; }
            void setTelefono(string tel) {telefono * tel; }
           //get metodo
             string getNit() {return nit; }
             string getNombre() {return nombres; }
             string getApellidos() {return apellidos; }
             string getDireccion() {return direccion; }
             int getTelefono() {return telefono; }

             //metodo
             coid crear(){
           int o_estado;
           conexionBD cn = conexionBD()
           cn.abrir_conexion();
             void crear(){
        if (cn.getConectar()){
            string insert ="INSERT INTO clientes)nit, nombres, apellidos, direccion,telefono,fecha_nacimiento)VALUES ('|');";
            cost char * i = insert.c_str();
        }}
            if (!q_estado) {
            }

                cout << "Ingreso Exitoso..." << endl: 
             }
                
             }