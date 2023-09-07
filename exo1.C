#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int n; //nombre d'élément actuel de la pile
int* tab; // tableau de taille tMax destiné à contenir des int
int tMax; // capacité actuelle maximum de la pile (taille de tab)
} pileI_t;


pileI_t* initialiserPI(void){
    pileI_t* pile = (pileI_t*)malloc(sizeof(pile))
    pile->n = 0;
    pile->tab = NULL;
    pile->tMax = 0;
    return pile;
}

void emPilerI(pileI_t* p, int a){
    
  
}

int dePilerI(pileI_t* p){
 
}

int estVidePI(pileI_t* p){
}

void detruirePI(pileI_t* pile){

}

int main(void){

}


