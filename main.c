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
Estudiante e1 = {373494, "Alberto", "Flores", "Ruiz"};
Estudiante e2;
Grupo g1, g2;

void registrarAlumnos();
void registrarGrupos();
void registrarActividades();
void asociarAlumnoGrupo();

int main(){
    
    registrarAlumnos();
    getchar();
    registrarGrupos();
    getchar();
    registrarActividades();
    getchar();
    asociarAlumnoGrupo();
    getchar();
    return 0;
}


void registrarAlumnos(){
    // Registro Estudiantes
    e2.matricula = 28498934;
    strcpy(e2.nombre, "Rosa Maria");
    strcpy(e2.apPaterno, "Sosa");
    strcpy(e2.apMaterno, "Gutierrez");
    
    Estudiante_mostrar(e1);
    Estudiante_mostrar(e2);
    
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
    
    Grupo_mostar(g1);
    Grupo_mostar(g2);
    
}


void registrarActividades(){
    int i;
    Actividad a3CV1[] = {{1, "practica1", {"Lunes 5 de febrero", "10:00 am"}}, {2, "practica2",{"Martes 26 de febrero", "10:00 pm"}}, {3, "Examen", "Viernes 1 Marzo", "15:00"}, {4, "proyecto", {"Junio", "12:00"}}};
   
    for(i = 0; i < 4; i++){
        Actividad_mostrar(a3CV1[i]);
    }
}


void asociarAlumnoGrupo(){
    printf("Asociando alumnos\n");
    
    Grupo_registrarEstudiante(&g1, &e1);
    Grupo_registrarEstudiante(&g1, &e2);

    Grupo_registrarEstudiante(&g2, &e1);
    
    printf("============> Grupo: %s\n", g1.identificador);
    Grupo_mostarEstudiantes(g1);
    
    printf("============> Grupo: %s\n", g2.identificador);
    Grupo_mostarEstudiantes(g2);
}

