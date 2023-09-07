#include <stdio.h>
#include <stdlib.h>


typedef struct s_cellule_t
{
int val; 
struct s_cellule_t* suiv; 
} cellule_t;



cellule_t* consL (int v, cellule_t* queue){

  while(queue != NULL){
    if(queue->val == v){
      return queue;
    }else{
      queue = queue->val;
    }
  }
  return NULL;
}
void print_liste(cellule_t* queue)
{
    if (queue == NULL) {
        printf("Liste vide!\n");
        return;
    }

    while (queue != NULL) {
        printf("%d ", queue->val);
        queue = queue->suiv;
    }
    printf("\n");
}
void libererL(cellule_t* liste){
   if (liste == NULL) return;
    free_list(liste->suiv);
    free(liste);
}

int  main(void)
{
 
}