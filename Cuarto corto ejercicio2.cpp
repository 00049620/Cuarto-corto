#include <iostream>
using namespace std;
float contaralturas(double);
float medidas(int);
float estaturas[25];
int main();
{
    cout <<"Bienvenido  ingrese las estaturas de los alumnos." <<endl;
    contaralturas(medidas(25));
}
float mediass(int  numerodealumnos){
    float mediadeestaturas = 0;
    for(int alumno = 0; alumno < numerodealumnos; alumno++){
        cout <<"La estatura de el alumno" << alumno +1 <<endl;
        float estaturalumno = 0;
        cin >> estaturalumno;

        mediadeestaturas = mediadeestaturas/25;
        cout <<"La media de estatura es:" <<mediadeestaturas <<endl;
        return mediadeestaturas;
    }
    float contaralturas(double media)
    {
        int arriba, abajo;
        arriba = 0;
        abajo = 0;
        for ( int alumno = 0; alumno <25; alumno++)
        {
            if(estaturas[alumno] >= media)
        {
            arriba + =1;
        }
        else
        {
            abajo +=1;
        }
        }
        cout <<arriba <<"Estos alumnos etan arriba de la media" <<endl;
        cout <<abajo <<"Estos alumnos  estan abajo de la media" <<endl;
        }