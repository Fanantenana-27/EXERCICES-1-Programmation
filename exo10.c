// Affichage des diviseurs d'un entier n à saisir au clavier
#include <stdio.h>
int main ()
{
    int i , n;
    printf("Entrez un nombre entier n :");
    scanf("%d",&n);
    i = 1;
    while (i<=n)
    {
        if (n%i==0)
        {
            printf("%d \n",i);
        }
        i = i + 1;
    }
    return (0);
}