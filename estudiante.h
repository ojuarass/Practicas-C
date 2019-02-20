/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Definicion de la estructura estudiante
**************/

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#define SIZE 100

typedef struct  {
    int matricula;
    char nombre[SIZE];
    char apPaterno[SIZE];
    char apMaterno[SIZE];
    evaluacion actividadesevaluar[4]; //Son las 4 actividades que debeevaluar.
    float promedio; //tenra el promedio de cada alumno
} Estudiante;

//Defini la estructura para poder evaluar las actividades.
typedef struct  {
     actividad nombredeactividad;
     float calificacion;
     char observaciones[TAM];
}evaluacion;


void Estudiante_registrar(Estudiante *alumno);
void Estudiante_mostrar(Estudiante alumno);
float Calcular_promedio(Estudiante * e); // Esta funcion servira para calcular el promedio total del alumno.

#endif
