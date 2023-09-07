#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int n; //nombre d'élément actuel de la pile
    int* tab; // tableau de taille tMax destiné à contenir des int
    int tMax; // capacité actuelle maximum de la pile (taille de tab)
} pileI_t;

typedef struct s_noeud_t
{
    int v; // étiquette du noeud (v pour valeur)
    struct s_noeud_t* g; // pointeur vers la racine du sous-arbre gauche
    struct s_noeud_t* d; // pointeur vers la racine du sous-arbre droit
} noeud_t;

typedef struct
{
    int queue; // place de la queue de la file (la dernière valeur enfilée)
    int tete; // place de la tête de file (la plus ancienne valeur contenue)
    noeud_t** tab; // tableau d'adresse d'arbre de taille tMax (il y a bien 2 étoiles)
    int tMax; // capacité maximum de la file
} fileA_t;




pileI_t* initialiserPI(void){
    pileI_t* p = (pileI_t*)malloc(sizeof(pileI_t));
    p->tab = NULL;
    p->tMax = 0;
}

void emPilerI(pileI_t* p, int a){
    p->tab = (int*)malloc(sizeof(int)*p->tMax);
    for(int i=0;i<p->tMax;i++){
        p->tab[i] = a;
        p->tab[a] = i;
        
    }
    p->tMax = p->tMax*2;
}


int dePilerI(pileI_t* p){
    int a = 0;
    for(int i=0; i<p->n; i++){
        a += p->tab[i];
        p->tab[i] = 0;
        p->tMax = p->tMax - 1;
        p->tab[i] = p->tMax;
    
    }
    return a;
}

int estVidePI(pileI_t* p){
    int a = 0;
    for(int i=0; i<p->n; i++){
        a += p->tab[i];
        p->tab[i] = 0;
        p->tMax = p->tMax - 1;
    }
    return a;
}

void detruirePI(pileI_t* pile){
    free(pile->tab);
    free(pile);
    pile = NULL;
    return;

}

void parcoursLargeur(noeud_t* a){
    for(int i=0; i<a->tMax; i++){
        for(int j=0; j<a->tMax; j++){
            printf("%d ", a->tab[i]);
        }
        printf("\n");
    }
    return;

}
void parcoursPrefixe(noeud_t* a){
     if(a==NULL)
   {
      printf("NULL ");
      return;
   }
   printf("%d ",a->v);
   parcoursPrefixe(a->g);
   parcoursPrefixe(a->d);
}
 

noeud_t* construireSuffixe(int* tab){
}

int main(void){
    int T[]={-1,-1,2,-1,-1,3,4,-1,-1,5,-1,6,7,-2,-1,412,44};
    cellule_t a=construireSuffixe(T);
    pileI_t* p = initialiserPI();
    return 0;

}


