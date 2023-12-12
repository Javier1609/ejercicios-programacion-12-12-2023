using namespace std;
#include <iostream>
#include <stdio.h>

#include <string.h>


union Datos {
    int entero;
    float flotante;
    char cadena[50];
};

int main() {
    union Datos datos;
    datos.entero = 10;
    printf("Entero: %d\n", datos.entero);

    datos.flotante = 3.14;
    printf("Flotante: %.2f\n", datos.flotante);

    strcpy(datos.cadena, "Hola");
    printf("Cadena: %s\n", datos.cadena);

    return 0;
}
