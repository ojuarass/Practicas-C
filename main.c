/***********************
Materia: Estructuras de datos
Profesora: Miriam Pescador Rojas
Descripcion: Creacion y registro de los tipos de datos
**************/
#include "estudiante.h"
#include "grupo.h"
#include "common.h"
#include "actividad.h"
#include <stdio.h>
#include <string.h>

/*variables globales*/
Estudiante e1 = {373491, "Alberto", "Flores", "Perez"};
Estudiante e2 = {373492, "Blanca", "Gomez", "Quiroz"};
Estudiante e3 = {373493, "Carlos", "Hernandez", "Ruiz"};
Estudiante e4 = {373494, "Diego", "Islas", "Soto"};
Estudiante e5 = {373495, "Ernesto", "Juarez", "Trujillo"};
Estudiante e6 = {373496, "Fabiola", "Lopez", "Valencia"};

Grupo g1, g2;

void registrarAlumnos();
void registrarGrupos();
void registrarActividades();
void asociarAlumnoGrupo();
void obtenerEstadisticaGrupo();

int main(){
    
    registrarAlumnos();
    //getchar();
    registrarGrupos();
    //getchar();
    registrarActividades();
    //getchar();
    asociarAlumnoGrupo();
    getchar();
    obtenerEstadisticaGrupo();
    //getchar();
    return 0;
}


void registrarAlumnos(){
    
    Registrar_Evaluacion(&e1);
    Registrar_Evaluacion(&e2);
    /*Registrar_Evaluacion(&e3);
    Registrar_Evaluacion(&e4);
    Registrar_Evaluacion(&e5);
    Registrar_Evaluacion(&e6);*/
    
    Calcular_promedio(&e1);
    Calcular_promedio(&e2);
    /*Calcular_promedio(&e3);
    Calcular_promedio(&e4);
    Calcular_promedio(&e5);
    Calcular_promedio(&e6);*/
    
    Estudiante_mostrar(e1);
    Estudiante_mostrar(e2);
    /*Estudiante_mostrar(e3);
    Estudiante_mostrar(e4);
    Estudiante_mostrar(e5);
    Estudiante_mostrar(e6);*/
    
}


void registrarGrupos(){
    
    //Registro grupos
    strcpy(g1.identificador, "3CV1");
    strcpy(g1.materia, "Analisis de algoritmos");
    
    
    strcpy(g1.horarioGrupo[0].tipo, tipoHorario[0]);
    strcpy(g1.horarioGrupo[0].dia, dias[1]);
    strcpy(g1.horarioGrupo[0].hora, horarios[5]);
    
    strcpy(g1.horarioGrupo[1].tipo, tipoHorario[1]);
    strcpy(g1.horarioGrupo[1].dia, dias[2]);
    strcpy(g1.horarioGrupo[1].hora, horarios[5]);
    
    strcpy(g1.horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(g1.horarioGrupo[2].dia, dias[4]);
    strcpy(g1.horarioGrupo[2].hora, horarios[5]);
    
    strcpy(g1.horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(g1.horarioGrupo[3].dia, dias[3]);
    strcpy(g1.horarioGrupo[3].hora, horarios[3]);
    
    
    
    /*Horario tmpH = {"teoria", "lunes", "15:00"};
     g1.horarioGrupo[0] = tmpH;*/
    
    
    strcpy(g2.identificador, "1CV6");
    strcpy(g2.materia, "Estructuras de datos");
    /*Horario horario2[] = {{tipoHorario[1], dias[0], horarios[5]},
     {tipoHorario[0], dias[3], horarios[5]},
     {tipoHorario[0], dias[4], horarios[6]},
     {tipoHorario[2], dias[2], horarios[3]}};*/
    strcpy(g2.horarioGrupo[0].tipo, tipoHorario[1]);
    strcpy(g2.horarioGrupo[0].dia, dias[0]);
    strcpy(g2.horarioGrupo[0].hora, horarios[5]);
    
    strcpy(g2.horarioGrupo[1].tipo, tipoHorario[0]);
    strcpy(g2.horarioGrupo[1].dia, dias[3]);
    strcpy(g2.horarioGrupo[1].hora, horarios[5]);
    
    strcpy(g2.horarioGrupo[2].tipo, tipoHorario[0]);
    strcpy(g2.horarioGrupo[2].dia, dias[4]);
    strcpy(g2.horarioGrupo[2].hora, horarios[6]);
    
    strcpy(g2.horarioGrupo[3].tipo, tipoHorario[2]);
    strcpy(g2.horarioGrupo[3].dia, dias[2]);
    strcpy(g2.horarioGrupo[3].hora, horarios[3]);
    
    //Grupo_mostar(g1);
    //Grupo_mostar(g2);
    
}


void registrarActividades(){
    int i;
    Actividad a3CV1[] = {{1, "practica1", {"Lunes 5 de febrero", "10:00 am"}}, {2, "practica2",{"Martes 26 de febrero", "10:00 pm"}}, {3, "Examen", "Viernes 1 Marzo", "15:00"}, {4, "proyecto", {"Junio", "12:00"}}};
   /*
    for(i = 0; i < 4; i++){
        Actividad_mostrar(a3CV1[i]);
    }
    */
}


void asociarAlumnoGrupo(){
    printf("Asociando alumnos\n");
    
    Grupo_registrarEstudiante(&g1, &e1);
    Grupo_registrarEstudiante(&g1, &e2);

    //Grupo_registrarEstudiante(&g2, &e1);
    
    //printf("============> Grupo: %s\n", g1.identificador);
    //Grupo_mostarEstudiantes(g1);
    
    //printf("============> Grupo: %s\n", g2.identificador);
    //Grupo_mostarEstudiantes(g2);
}

void obtenerEstadisticaGrupo(){
    g1.promediogeneral = Estadistica_general(&g1);
    Grupo_mostar(g1);
}

