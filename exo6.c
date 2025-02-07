/* Programme qui demande à l'utilisateur deux notes avec 
leurs coefficient et affiche leur moyenne */
#include <stdio.h>
int main ()
{
    int coef1 , coef2;
    float n1 , n2 , moyenne;
    printf(" Veuillez entrer la première note: ");
    scanf("%f",&n1);
    printf(" Veuillez entrer la deuxième note: ");
    scanf("%f",&n2);
    printf(" Veuillez entrer le coefficient de la première note: ");
    scanf("%d",&coef1);
    printf(" Veuillez entrer le coefficient de la deuxième note: ");
    scanf("%d",&coef2);
    moyenne = ((n1*coef1)+(n2*coef2))/(coef1+coef2);
    printf("Moyenne est : %f \n",moyenne);
}