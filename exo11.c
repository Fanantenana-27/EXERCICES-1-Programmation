// Calcul et affichage de factoriel n à saisir au clavier
#include <stdio.h>
int main ()
{
    int n , i , f;
    printf(" Veuillez entrer un nombre entier n : ");
    scanf("%d",&n);
    f  = 1;
    for (i=1;i<=n;i++)
    {
        f = i * f;
    }
    printf("n!=%d \n",f);
}