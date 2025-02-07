// Progrmme qui permet d'echanger les valeurs des deux variables a et b 
#include <stdio.h>
int main ()
{
    int a , b , c;
    printf("Veuillez entrer un nombre entier a:");
    scanf("%d",&a);
    printf("Veuillez entrer un nombre entier b:");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a= %d ; b= %d \n",a,b);
    return (0);
}