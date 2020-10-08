#include <stdio.h>
#include <stdlib.h>
int main() {
    char cadena1 [] = "HOLA \n";
    char cadena2 [] = "COMO ESTAN \n";
    char cadena3 [] = "TODOS?? ";
    FILE* fichero;
    fichero = fopen("ARCHIVO.txt", "wt");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    printf("Proceso completado");
    return 0;
}
