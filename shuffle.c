#include <stdio.h>
#include <stdlib.h>

void shuffle(cellule_t** listeD, cellule_t** listeS){
    cellule_t* temp;
    while (*listeD != NULL && *listeS != NULL)
    {
        listeD = &(*listeD)->suiv;
        temp = listeD;
        *listeD = *listeS;
        *listeS = &(*listeS)->suiv;
        *(listeD)->suiv = temp;
        (*listeD) = &(*listeD)->suiv;
        *listeD = *listeS;
    }
    
}