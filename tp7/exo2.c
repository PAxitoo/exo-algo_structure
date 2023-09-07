#include <stdio.h>
#include <stdlib.h>

typedef struct s_noeud_t
{
int v; // étiquette du noeud (v pour valeur)
struct s_noeud_t* g; // pointeur vers la racine du sous-arbre gauche
struct s_noeud_t* d; // pointeur vers la racine du sous-arbre droit
} noeud_t;

void parcoursLargeur(noeud_t* a){

    if(a->v==0)
        return;
    printf("%d\n",a->v);
    parcoursLargeur(a->g);
    parcoursLargeur(a->d);
    printf("%d\n",a->v);
    return;
}

int main()
{
    noeud_t* a;
    a = (noeud_t*)malloc(sizeof(noeud_t));
    parcoursLargeur(a);
    printf("%d\n",a->v);
    free(a);
    return 0;
}


