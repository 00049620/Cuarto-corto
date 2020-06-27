#include <iostream>
using namespace std;
void printseparator();
double comprobanotas(double, double, double, double, double);
double rellenArray)(int);
int main(){
    int numerodealumnos;
    cout <<"ingrese el numero de los alumnos" << endl;
    cin >> numerodealumnos;
    printseparator();
    rellenArray(numerodealumnos);
   
 }
 double rellenArray(int numerodealumnos){
     double notas[numerodealumnos][5];
 for (int alumno = 0; alumno < numerodealumnos; alumno++){
     cout << "notas del alumno nuevo" << alumno +1 <<endl;
     for (int nota = 0; nota< 5; nota++){
         cout << "Ingresa el numero de nota" << nota + 1 <<endl;
         double notaX = 0;
         cin >> notaX;
         notas[alumno][nota] = notaX
     }
     printseparator();
 }
    printseparator();
    for (int i = 0; i <numerodealumnos; i++){
        cout <<" la calificacion final de lumno es:" << i+1 <<":" <<comprobanotas(notas[i][0], notas[i][2],notas[i][0],notas[i][3],notas[i][4]) <<endl;
        printseparator();
        }
    }

    double comprobanotas(double nota1,double nota2,double nota3,double nota4,double nota5){
        double notafinal = nota1 *0.2 + nota2 *0.2 + nota3 *0.2 + nota4 *0.2 + nota5 *0.2;
        if (notafinal <7)
        {
            cout <<"El alumno ha reprobado." ;
        }
        else
        {
            cout <<"El alumno aprobo.";
        }
        return notafinal;
    }

    void printseparator();
    {
        cout <<"  ------------ " <<endl;
    }