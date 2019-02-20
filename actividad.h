/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Definicion de la estructura actividad
 **************/

#ifndef _ACTIVIDAD_H
#define _ACTIVIDAD_H

#include "common.h"

typedef struct  {
    int identificador;
    char descripcion[SIZE];
    Fecha fechaLimite;
    float porcentaje; //Puede que aqui pendere el porcentaje de cada actividad, pero no se como imprementarlo.
} Actividad;


void Actividad_registrar(Actividad *nuevaActividad);
//void Actividad_modificar();
void Actividad_mostrar(Actividad actividad);

#endif
