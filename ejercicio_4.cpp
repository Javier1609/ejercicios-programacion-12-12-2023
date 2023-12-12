#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


typedef  Estudiante EstudianteAlias;

int main() {

     Estudiante estudiante1;
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;
    strcpy(estudiante1.nombre, "Juan");


    EstudianteAlias estudiante2;
    estudiante2.edad = 22;
    estudiante2.promedio = 90.0;
    strcpy(estudiante2.nombre, "Maria");


    printf("Estudiante 1:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);
    printf("\n");

    printf("Estudiante 2 (con alias):\n");
    printf("Nombre: %s\n", estudiante2.nombre);
    printf("Edad: %d\n", estudiante2.edad);
    printf("Promedio: %.2f\n", estudiante2.promedio);
    printf("\n");

    return 0;
}
