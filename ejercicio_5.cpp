#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


union Datos {
    int entero;
    float flotante;
    char cadena[50];
};


struct Estudiante copiarEstudiante(struct Estudiante original) {
     Estudiante copia;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    strcpy(copia.nombre, original.nombre);
    return copia;
}


typedef struct Estudiante EstudianteAlias;




void imprimirEstudiantePorValor(struct Estudiante estudiante) {
    cout <<("Nombre: %s\n", estudiante.nombre);
    cout <<("Edad: %d\n", estudiante.edad);
    cout << ("Promedio: %.2f\n", estudiante.promedio);
    cout << ("\n");
}


void imprimirEstudiantePorReferencia(struct Estudiante *estudiante) {
    cout << ("Nombre: %s\n", estudiante->nombre);
    cout <<("Edad: %d\n", estudiante->edad);
    cout << ("Promedio: %.2f\n", estudiante->promedio);
    cout << ("\n");
}


void imprimirEstudiantePorDireccion(struct Estudiante *estudiante) {
    cout <<("Nombre: %s\n", estudiante->nombre);
    cout <<("Edad: %d\n", estudiante->edad);
    cout << ("Promedio: %.2f\n", estudiante->promedio);
    cout << ("\n");
}

int main() {

    struct Estudiante estudiante1;
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;
    strcpy(estudiante1.nombre, "Juan");


    union Datos datos;
    datos.entero = 10;
    cout << ("Entero: %d\n", datos.entero);

    datos.flotante = 3.14;
    cout <<("Flotante: %.2f\n", datos.flotante);

    strcpy(datos.cadena, "Hola");
    cout << ("Cadena: %s\n", datos.cadena);


    struct Estudiante estudianteCopia = copiarEstudiante(estudiante1);


    EstudianteAlias estudiante2;
    estudiante2.edad = 22;
    estudiante2.promedio = 90.0;
    strcpy(estudiante2.nombre, "Maria");


    cout <<("Imprimir por valor:") << endl;
    imprimirEstudiantePorValor(estudiante1);

    cout << ("Imprimir por referencia:") << endl;
    imprimirEstudiantePorReferencia(&estudiante1);

    cout <<("Imprimir por direccion:") << endl;
    imprimirEstudiantePorDireccion(&estudiante1);


    return 0;
}
