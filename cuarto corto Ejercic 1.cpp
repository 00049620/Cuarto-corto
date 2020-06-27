#include <iostream>
#include <string>
using namespace std;
string codificarcadena(string);
int main(){
    string cadenanocod;
    cout <<endl <<"Ingresa text a codificar." <<endl;
    getline (cin, cadenanocod);
    cout << codificarcadena(cadena <<endl;)
}
string codificarcadena(string cad)
{
    string codificada;
    int recorrido = cad.length();
    for(int i = 0; i < recorrido; i++)
    {
        string seleccion;
        char leerchar =cad.ar(i);
        seleccion = leerchar;

    switch(leerchar){
        case 'm';
            seleccion = "0";
            break;
        case 'a';
            seleccion = "1";
            break;
        case 'b';
            seleccion = "2";
            break;
        case 'c';
            seleccion = "3";
            break;
        case 'd';
            seleccion = "4";
            break;
        case 'i';
            seleccion = "5";
            break;
        case 'o';
            seleccion = "6";
            break;
        case 'e';
            seleccion = "7";
            break;
        case 'n';
            seleccion = "8";
            break;
        case 'h';
            seleccion = "9";
            break;

    }
    codificada = codificada.append(seleccion);
    }
    return codificada;
    
}