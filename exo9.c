/* Programme qui affiche les nombres paires 
compris entre 1 et n où n est saisi au clavier */
#include <stdio.h>
int main()
{
    int i , n;
    printf("Entrez un nombre entier n: ");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        i = i + 1;
        printf("%d \n",i);
    }
    return (0);
}