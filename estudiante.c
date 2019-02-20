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

//Agregue esta funcion para calcular el promedio de cada estudiante.
float Calcular_promedio(Estudiante * e){
        int i = 0;
        float prom = 0;
        for(i = 0; i < e->actividadesevaluar;i++) {
                //Quiero sacar el promedio dependiendo la actividad, pero no se como y donde ponderar el porcentaje de cada actividad.
        prom = (e->actividadesevaluar[i].calificacion) * (e -> evaluacion[i].actividad.porcentaje);
        }
        e->promedio = prom;
        return prom;
}
                                                    44,1        Final

