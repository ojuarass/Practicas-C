/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Implementacion de las funciones asociadas a la estructura estudiante
 **************/


#include "estudiante.h"
#include <stdio.h>

void Estudiante_registrar(Estudiante *alumno){
    printf("Ingrese datos del estudiante: \n");

    printf("Matricula: \n");
    int variable;
    scanf("%d", &variable);
    alumno->matricula = variable;
    printf("Nombre: \n");
    scanf("%s", alumno->nombre);
    printf("Apellido paterno: \n");
    scanf("%s", alumno->apPaterno);
    printf("Apellido materno: \n");
    scanf("%s", alumno->apMaterno);
    
}

void Estudiante_mostrar(Estudiante alumno){
    printf("============== Datos del estudiante  ================\n");
    printf("Matricula: %d \n", alumno.matricula);
    printf("Nombre: %s %s %s \n", alumno.apPaterno, alumno.apMaterno, alumno.nombre);
}

void Registrar_Evaluacion(Estudiante *alumno){
    printf("============== Registrar Evaluaciones ================\n");
    printf("Calificacion examen: \n");
    scanf("%f", &alumno->examen.calificacion);
    printf("Calificacion proyecto: \n");
    scanf("%f", &alumno->proyecto.calificacion);
    for(int i = 0; i < 2; i++){
        printf("Calificacion practica: %d \n", (i+1));
        scanf("%f", &alumno->practicas[i].calificacion);
        if(i == 0){
            int opcion = 0;
            printf("Desea registrar otra practica: \n1.- Si\n2.- No");
            scanf("%d", &opcion);
            if(opcion == 2){
                alumno->practicas[1].calificacion = 0;
                break;
            }
        }
    }
    
}

//Agregue esta funcion para calcular el promedio de cada estudiante.
float Calcular_promedio(Estudiante *estudiante){
    float calificacionExamen;
    float calificacionProyecto;
    float calificacionPracticas;
    
    calificacionExamen = estudiante->examen.calificacion * 0.4;
    calificacionProyecto = estudiante->proyecto.calificacion * 0.3;
    
    if(estudiante->practicas[1].calificacion == 0){
        calificacionPracticas = estudiante->practicas[0].calificacion * 0.3;
    } else {
        calificacionPracticas = (estudiante->practicas[0].calificacion + estudiante->practicas[1].calificacion) * 0.15;
    }
    estudiante->promedio = calificacionExamen + calificacionProyecto + calificacionPracticas;
    return estudiante->promedio;
}

