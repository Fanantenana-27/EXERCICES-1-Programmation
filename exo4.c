/* Programme qui damande à l'utilisateur deux notes 
et affiche leur somme et leur moyenne */
#include <stdio.h>
int main ()
{
    float note1 , note2 , somme , moyenne;
    printf("Veuillez entrer la première note : ");
    scanf("%f",&note1);
    printf("Veuillez entrer la deuxième note : ");
    scanf("%f",&note2);
    somme = note1 + note2;
    moyenne = somme / 2;
    printf("La somme de deux notes est: %f et leur moyenne est: %f \n", somme,moyenne);
    return (0);
}