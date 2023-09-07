#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int queue; // place de la queue de la file (la dernière valeur enfilée)
int tete; // place de la tête de file (la plus ancienne valeur contenue)
noeud_t** tab; // tableau d'adresse d'arbre de taille tMax (il y a bien 2 étoiles)
int tMax; // capacité maximum de la file
} fileA_t;

cellule_t* construireSuffixe(int* tab){
    fileA_t* file = (fileA_t*)malloc(sizeof(file));
    
}



int main(void){
    int T[]={-1,-1,2,-1,-1,3,4,-1,-1,5,-1,6,7,-2,-1,412,44};
    cellule_t a=construireSuffixe(T);
    printf("%d\n",a.tMax);
    return 0;
}