#include <stdio.h>
#include <stdlib.h>

typedef struct s_cellule_t
{
    int data;
    int val; // valeur
    struct s_cellule_t* suiv; // suiv
} cellule_t;
// la liste vide sera NULL

void ajouteEnTeteL(struct cellule_t, int val,cellule_t** li){
      struct cellule_t *newNode = malloc(sizeof(struct cellule_t));
      newNode->data = val;

      newNode->suiv = *li;

      *li = newNode;
}

void printList(struct cellule_t *li)
{
    struct cellule_t *temp = li;

    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->suiv;
    }
    printf("NULL\n");
}

int main()
{
     struct node *li = NULL;

     printList(li);

     return 0;
}