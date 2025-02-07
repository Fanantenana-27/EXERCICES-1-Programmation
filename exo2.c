// Programme qui permet d'afficher si le produit de deux nombres est positif ou negatif
#include <stdio.h>
int main ()
{
    int x , y;
    printf("Veuillez entrer un nombre entier x : ");
    scanf("%d",&x);
    printf("Veuillez entrer un nombre entier y : ");
    scanf("%d",&y);
    if (((x>0) && (y>0)) || ((x<0) && (y<0)))
    {
        printf("x * y est positif \n");
    }
    else
    {
        printf("x * y est negatif \n");
    }
    return (0);
}