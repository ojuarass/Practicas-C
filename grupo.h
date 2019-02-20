/***********************
 Materia: Estructuras de datos
 Profesora: Miriam Pescador Rojas
 Descripcion: Definicion de la estructura grupo
 **************/

#ifndef _GRUPO_H
#define _GRUPO_H

#include "common.h"
#include "estudiante.h"

static const char *tipoHorario[]  = { "teoria  ", "practica", "asesoria"};

typedef struct  {
    char tipo[TAM]; // teoria, practica o asesoria
    char dia[TAM];
    char hora[TAM];
} Horario;

typedef struct P2_Grupo{
    char identificador[TAM];
    int inscritos;
    char materia[SIZE];
    Horario horarioGrupo[4];
    Estudiante listaEstudiantes[30];
    float promediogeneral; // Guardara el promedio general del grupo
    int numReprobados; // Guardara el numero de alumnos reprobados
    int numAprobados; // Guardara el numero de alumnos aprobados

} Grupo;




void Grupo_registrar(Grupo *grupo);
void Grupo_mostar(Grupo grupo);
void Grupo_mostarEstudiantes(Grupo grupo);
void Grupo_registrarEstudiante(Grupo *grupo, Estudiante *alumno);
// Funcion que calculara el promedio general del grupo, estudiantes aprebados y reprobados.
float Estadistica_general(grupo * g);


//void Grupo_modificar();

//void Grupo_buscarEstudiante(Grupo *grupo, int boleta);

#endif
