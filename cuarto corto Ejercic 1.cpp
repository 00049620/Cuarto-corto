#include "iostream"
#include <string>
using namespace std;

string codificarcadena(string);

int main()
{
    string cadenanocod;

    cout << endl
         << "BIENVENIDO AL CODIFICADOR DE CLAVE MURCIELAGO." << endl;
    cout << "Porfavor ingresa la cadena de texto que quieras codificar." << endl;

    getline(cin, cadenanocod);

    cout << codificarcadena(cadenanocod) << endl;
}
string codificarcadena(string cad)
{
    string codificada;
    int recorrido = cad.length();
    for (int i = 0; i < recorrido; i++)
    {
        string seleccion;
        char leerchar = cad.at(i);
        seleccion = leerchar;
        switch (leerchar)
        {
        case 'm':
            seleccion = "0";
            break;
        case 'u':
            seleccion = "1";
            break;
        case 'r':
            seleccion = "2";
            break;
        case 'c':
            seleccion = "3";
            break;
        case 'i':
            seleccion = "4";
            break;
        case 'e':
            seleccion = "5";
            break;
        case 'l':
            seleccion = "6";
            break;
        case 'a':
            seleccion = "7";
            break;
        case 'g':
            seleccion = "8";
            break;
        case 'o':
            seleccion = "9";
            break;
        default:
            break;
        }

      
        codificada = codificada.append(seleccion);
    }

    return codificada;
}