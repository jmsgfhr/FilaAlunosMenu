#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define TRUE 1
#define FALSE 0

typedef struct aluno {
    char nome[40];
    float nota;
} Aluno;

int init();
int finish();
int entra(Aluno a);
int sai(Aluno *pa);
int cheia();
int vazia();


#endif // FILA_H_INCLUDED
