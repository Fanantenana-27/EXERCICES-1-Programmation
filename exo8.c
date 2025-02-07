// Programme qui affiche 1 jusq'à n où n est saisi au clavier 
#include <stdio.h>
int main ()
{
    int i , n , k;
    printf("Entrez un nombre entier n : ");
    scanf("%d",&n);
    k = 0;
    for (i=1;i<=n;i++)
    {
       k = k + i; 
       printf("%d \n",k);
    }
    return (0);
}