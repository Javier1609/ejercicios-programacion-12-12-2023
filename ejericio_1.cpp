#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/////////////////////////////
// ejercicio a
struct Estudiante {
    int edad;
    char nombre[20];
    float promedio;
    };

int main() {
    int num;
    ///////////////////////////////
    // ejercicio b
     Estudiante estudiante1;
    estudiante1.edad= 18;
    estudiante1.promedio = 8.5;
    strcpy(estudiante1.nombre, "javier");
     cout << "Edad: " << estudiante1.edad << endl;
     cout << "Promedio: " << estudiante1.promedio << endl;
     cout << "Nombre: " << estudiante1.nombre << endl;
///////////////////////////////////////////
// ejercicio c y d

   Estudiante *estudiante2 = (Estudiante *)malloc(sizeof(Estudiante));
     if (estudiante2 != NULL) {
         estudiante2->
                 edad = 18;
         estudiante2->
                 promedio = 6.2;
         strcpy(estudiante2->nombre, "Juan");
         cout << "Edad: " << estudiante2->edad << endl;
            cout << "Promedio: " << estudiante2->promedio << endl;
            cout << "Nombre: " << estudiante2->nombre << endl;
         free(estudiante2);
     }
     //////////////////////////////////////////
     // ejercicio e
     for(int i=0; i<num; i++){
         cout <<"Dime el nombre del estudiante " << (i+1)<< ": ";
            cin >> estudiante2->nombre;
            cout <<"Dime la edad del estudiante " << (i+1)<< ": ";
            cin >> estudiante2->edad;
            cout <<"Dime el promedio del estudiante " << (i+1)<< ":" ;
            cin >> estudiante2->promedio;
            cout << endl;

     }





}
