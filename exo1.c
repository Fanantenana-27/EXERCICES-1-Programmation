// Programme qui permet d'afficher si n est positif ou négatif où n est saisi au clavier
#include <stdio.h>
int main ()
{
    int n;
    printf("Veuillez entrer un nombre entier :");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("Nombre positif \n");
    }
    else
    {
        printf("Nombre négatif \n");
    }
    return (0);
}