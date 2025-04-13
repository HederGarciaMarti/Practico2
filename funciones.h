#include <stdio.h>
#include <stdlib.h>
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef compu;

void cargarComputadora(compu *computadoras, int cantidad);

void cargarComputadora(compu *commputadoras, int cantidad){
    int aletorio = 0;
    for (int i = 0; i < cantidad; i++)
    {
        commputadoras[i].velocidad = 1 + rand()% 3;
        commputadoras[i].anio = 2015 + rand()% (2024 - 2015 + 1);
        commputadoras[i].cantidad_nucleos = 1 + rand()% 8;
        aletorio = rand()% 6;
        commputadoras[i].tipo_cpu = tipos[aletorio];
    }
    
}