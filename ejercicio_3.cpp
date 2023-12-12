#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


struct Estudiante copiarEstudiante(struct Estudiante original) {
    struct Estudiante copia;
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    strcpy(copia.nombre, original.nombre);
    return copia;
}

int main() {

    struct Estudiante estudiante1;
    estudiante1.edad = 20;
    estudiante1.promedio = 85.5;
    strcpy(estudiante1.nombre, "Juan");


    struct Estudiante estudianteCopia = copiarEstudiante(estudiante1);

    printf("Estudiante original:\n");
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);
    printf("\n");

    printf("Estudiante copia:\n");
    printf("Nombre: %s\n", estudianteCopia.nombre);
    printf("Edad: %d\n", estudianteCopia.edad);
    printf("Promedio: %.2f\n", estudianteCopia.promedio);
    printf("\n");

    return 0;
}
