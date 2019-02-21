/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Definicion de la estructura estudiante
**************/

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#define SIZE 100

#include "common.h"
#include "actividad.h"

//Defini la estructura para poder evaluar las actividades.
typedef struct  {
    Actividad actividad;
    float calificacion;
    char observaciones[TAM];
} Evaluacion;

typedef struct  {
    int matricula;
    char nombre[SIZE];
    char apPaterno[SIZE];
    char apMaterno[SIZE];
    Evaluacion examen;
    Evaluacion proyecto;
    Evaluacion practicas[2];
    float promedio; //tenra el promedio de cada alumno
} Estudiante;

void Estudiante_registrar(Estudiante *alumno);
void Estudiante_mostrar(Estudiante alumno);
void Registrar_Evaluacion(Estudiante *alumno);
float Calcular_promedio(Estudiante *estudiante); 

#endif
