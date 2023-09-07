#include <stdio.h>
#include <stdlib.h>

float racineCarree(float a,float erreur)
{
    float precision = 0.00001;
    float Un = n;  // on initialise la premiere iteration à n;
 
    while ( ( Un * Un >= n + precision ) || ( Un * Un <= n - precision ) )
    {
        Un = ( Un + n/Un ) /2 ;
    }
    return Un;
}