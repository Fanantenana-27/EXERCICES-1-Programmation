// Calcul et affichage de la somme de 1+2+3+...+n où n est saisie au clavier
int main ()
{
    int n , i , somme;
    printf("Veuillez entrer un nombre entier n:");
    scanf("%d",&n);
    somme = 0;
    for (i=1;i<=n;i++)
    {
        somme = somme + i;
    }
    printf("La somme de 1 jusqu'à %d est : %d \n",n,somme);
    return (0);
}