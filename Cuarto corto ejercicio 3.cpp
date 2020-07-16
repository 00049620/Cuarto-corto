#include <iostream>

using namespace std;

double comprobarnotas(double, double, double, double, double);
double rellenarArray(int);
int main()
{

    int numerodealumnos;

    cout << "porfavor dame el numero de alumnos" << endl;
    cin >> numerodealumnos;


    
    rellenarArray(numerodealumnos);
    
}

double rellenarArray(int numerodealumnos)
{
    double notas[numerodealumnos][5];
    for (int alumno = 0; alumno < numerodealumnos; alumno++)
    {
        cout << "Notas del Alumno Numero " << alumno + 1 << endl;

        for (int nota = 0; nota < 5; nota++)
        {

            cout << "Dame la nota numero " << nota + 1 << endl;
            double notaX = 0;
            cin >> notaX;
            notas[alumno][nota] = notaX;
        }
       
    }
    for (int i = 0; i < numerodealumnos; i++)
    {
     
        cout << "Calificacion final de alumno "<< i+1 << " : "<< comprobarnotas(notas[i][0], notas[i][1], notas[i][2], notas[i][3], notas[i][4]) << endl;
       
    }
}

double comprobarnotas(double nota1, double nota2, double nota3, double nota4, double nota5)
{

    double notafinal = nota1 * 0.2 + nota2 * 0.2 + nota3 * 0.2 + nota4 * 0.2 + nota5 * 0.2;
    if (notafinal < 7)
    {
        cout << "Este alumno reprobo.  ";
    }
    else
    {
        cout << "Este alumno Aprobo!!.  ";
    }

    return notafinal;
    
    
}

