#include <stdio.h>
#include <stdlib.h>

#define MAX // taille maximum du tas
typedef struct s_tas_t
{
int n; // taille du tas
int valeurs[MAX]; // zone de mémoire contenant les valeurs du tas
}tas_t;


    
int estUnTas(int n,int* T){
    int i;
    for(i=0;i<n;i++){
        if(T[i] == 1)
            return 1;
    }
    return 0;
}
void vider(tas_t* t){
    # initialize an empty pile 
    t->n = 0;
    t->valeurs[0] = 0;

    int i;
    for(i=0;i<MAX;i++){

        if(t->valeurs[i] == 0){
            t->valeurs[i] = 1;
            t->n++;

            if(estUnTas(t->n,t->valeurs)) == 0 && estUnTas(t->n-1,t->valeurs) ==  ;
 
                return;
        }
    }
}

int extraireMin(tas_t* t){
    # function that extracts the smallest value of the pile in O(log n) operations, n being the pile size
    int i;
    for(i=0;i<MAX;i++){
        if(t->valeurs[i] == 0)
            return i;


}

int main(){
    int n;
    scanf("%d",&n);


}







