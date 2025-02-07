// Programme qui demande à l'utilisateur trois valeures et affiche leur maximum
#include <stdio.h>
int main ()
{
    int a , b , c , max;
    printf("Entrez un nombre entier a : ");
    scanf("%d",&a);
    max = a;
    printf("Entrez un nombre entier b : ");
    scanf("%d",&b);
    if (b>max)
    {
        max = b;
    }
    printf("Entrez un nombre entier c : ");
    scanf("%d",&c);
    if (c>max)
    {
        max = c;
    }
    printf("Maximum entre a , b et c est : %d \n",max);
    return (0);
}