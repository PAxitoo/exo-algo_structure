#include <stdio.h>
#include <stdlib.h>

typedef struct s_noeud_t
{
int v; // étiquette du noeud (v pour valeur)
struct s_noeud_t* g; // pointeur vers la racine du sous-arbre gauche
struct s_noeud_t* d; // pointeur vers la racine du sous-arbre droit
} noeud_t;
// l'arbre vide aura la valeur NULL

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
int main(){
    parcourirPref();
    printf("\n");
    parcourirPost();
    printf("\n");
    parcourirInfix();
    printf("\n");
}
