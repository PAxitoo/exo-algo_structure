#include <stdio.h>
#include <stdlib.h>

typedef struct s_noeud_t
{
int v; // étiquette du noeud (v pour valeur)
struct s_noeud_t* g; // pointeur vers la racine du sous-arbre gauche
struct s_noeud_t* d; // pointeur vers la racine du sous-arbre droit
} noeud_t;


void parcoursPrefixe(cellule_t* a){
    if(a ==NULL)
        return;

    
}

int main(void){
    noeud_t* a = (noeud_t*)malloc(sizeof(noeud_t));

    a->v = 0;
    a->g = NULL;
    a->d = NULL;

    parcoursPrefixe(a);
    printf("%d\n",a->v);

    return 0;
}