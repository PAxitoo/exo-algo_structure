#include <stdio.h>
#include <stdlib.h>

typedef struct s_cellule_t
{
int val; // valeur
struct s_cellule_t* suiv; // suiv
} cellule_t;

int longueurL(cellule_t* li){
    if (li == NULL) {
        printf("Empty list!\n");
        return;
    }
    int len = 0;
    
    while(li) {
	  len++;
	  li = li->next;
	}
	
	return len;
}
int SommeL(int t[20], int n)
{
    int i, somme = 0;

    for(i = 0; i < n; i++)
    {
        somme += t[i];
    }

    return somme;
}
int main(){
    
}