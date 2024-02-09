#ifndef _FILE_PRIORITE_H_
#define _FILE_PRIORITE_H_
#include <stdbool.h>

//max of priority

#define TAILLE_MAX 10000

typedef struct{
    

} FileAPriorite;

void creer_file_vide(FileAPriorite *f);


void ajouter(FileAPriorite *f);

void enlever(FileAPriorite *f, int *e, int *p);

bool est_vide(FileAPriorite *f);

#endif