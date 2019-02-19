###############################################################
#  Makefile     Compilation file.                             #
#                                                             #
#                                                             #
#  Professor:   Miriam Pescador Rojas	                      #
#  Materia:     Estructuras de datos                          #
#                                                             #
#  Febrero 2019	                                              #
###############################################################/
.SUFFIXES: .o .c
.c.o:
	$(CC) -c $(CFLAGS) $<
# Macros
CC = gcc
CFLAGS = -g -Wall -O2
SRC = main.c estudiante.c estudiante.h grupo.c grupo.h common.c common.h actividad.c actividad.h
OBJ = main.o estudiante.o grupo.o common.o actividad.o
# Reglas explícitas
all: $(OBJ)
		$(CC) $(CFLAGS) -o main $(OBJ)
clean:  $(RM) $(OBJ) main
# Reglas implícitas
estudiante.o: estudiante.c estudiante.h
grupo.o: grupo.c grupo.h
common.o: common.c common.h
actividad.o: actividad.c actividad.h
main.o: main.c
