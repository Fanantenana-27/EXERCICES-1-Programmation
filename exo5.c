// Resolution de l'equation du seconde degree
#include <stdio.h>
#include <math.h>
int main ()
{
  float a, b, c, d, x, x0, x1, x2;
  printf (" Veuillez entrer la valeur de A : ");
  scanf ("%f",&a);
  printf (" Veuillez entrer la valeur de B : ");
  scanf ("%f",&b);
  printf (" Veuillez entrer la valeur de C: ");
  scanf ("%f",&c);
  d = ( (b*b)-(4*a*c) ); // Calcul de determinant
  if (a==0)
  {
    x = -b/c;
    printf (" Cette équation admet une solution x = %f \n ",x);
  }
  else if (d==0)
  {
    x0 = -b/(2*a);
    printf (" Cette équation admet une racine double x = %f \n",x0);
  }
  else if (d>0)
  {
    x1 = ((-b - sqrt(d))/(2*a));
    x2 = ((-b + sqrt(d))/(2*a));
    printf (" Cette équation admet deux racines distinctes x1 = %f et x2 = %f \n",x1 ,x2);
  }
  else 
  {
    x1 = ((-b - sqrt(-d))/(2*a));
    x2 = ((-b + sqrt(-d))/(2*a));
    printf (" Cette équation admet deux racines complexes x1 = %f +i %f et x2 = %f -i %f \n",x1 ,x2,x1,x2);
  }
  return (0);  
 }   

