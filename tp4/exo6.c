typedef struct s_cellule_t
{
int val; // valeur
struct s_cellule_t* suiv; // suiv
} cellule_t;



void miroir(struct cellule_t** li)
{
    struct cellule_t* first;
    struct cellule_t* rest;
       
    if (*li == NULL)
       return;   
  
    first = *li;  
    rest  = first->suiv;
  
    if (rest == NULL)
       return;   
  
    miroir(&rest);
    first->suiv->suiv  = first;  
      
    first->suiv  = NULL;          
  
    *li = rest;              
}