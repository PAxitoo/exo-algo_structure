#include <stdio.h>
#include <stdlib.h>

typedef struct s_noeud_t
{
    int v; // étiquette du noeud (v pour valeur)
    struct s_noeud_t* g; // pointeur vers la racine du sous-arbre gauche
    struct s_noeud_t* d; // pointeur vers la racine du sous-arbre droit
} noeud_t;
// l'arbre vide aura la valeur NULL

noeud_t* consA(noeud_t* gau,noeud_t* droit, int etiquette){
   noeud_t* tree = malloc(sizeof* tree);
    if(tree == NULL)
        return NULL ;
    tree->v = etiquette ;
    tree->d = droit;
    tree->g = gau;
    return tree;
}
void liberer(noeud_t* a){
    if(a ==NULL)
        return;
    liberer(a->g);
    liberer(a->d);
    free(a);
    a=NULL;
}
void parcourirPref(noeud_t* a){
    if(a==NULL)
        return;
    printf("%d", a->v);
    parcourirPref(a->g);
    parcourirPref(a->d);
}
void parcourirPost(noeud_t* a){
    if(a==NULL)
        return;
    parcourirPost(a->g);
    parcourirPost(a->d);
    printf("%d", a->v);
}
void parcourirInfix(noeud_t* a){
        if(a==NULL)
        return;
    parcourirInfix(a->g);
    printf("%d", a->v);
    parcourirInfix(a->d);
}
int max(int a, int b){
    return(a>b)? a:b;
}
int taille(noeud_t* arbre){
    if(arbre == NULL)
        return 0;
    return 1+max(taille(arbre->g), taille(arbre->d));
}
int nbFeuilles(noeud_t* arbre){
    if(arbre == NULL)
        return 0;
    if(arbre->g==NULL && arbre->d==NULL)
        return 1;
    return nbFeuilles(arbre->g)+(nbFeuilles(arbre->g));
}
int estDans(noeud_t* a,int v){

    if (v == a->v)
        return 1;
    else
        return 0;
 
}
void construirePref(noeud_t** a){
    
}
int main (void){
    noeud_t* a = consA(consA(consA(NULL,NULL,4),consA(NULL,NULL,5),3),consA(NULL,NULL,2),1);
    liberer(a);

    parcourirPref(a);
    printf("\n");
    parcourirPost(a);
    printf("\n");
    parcourirInfix(a);
    printf("\n");

    printf("hauteur : %d\n", taille(a));
    printf("nb de leaves : %d\n", nbFeuilles(a));
    return 0;
}