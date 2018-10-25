/**
 * @Author: GuillaumeLandre
 * @Date:   2018-10-25T12:54:59+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-10-25T16:01:28+01:00
 */



#include <stdio.h>

int main(void)
{
  int nbr1 = 0;
  int nbr2 = 0;
  int nbr3 = 0;

  printf("premier nombre : ");
  scanf("%i", &nbr1);
  printf("deuxieme nombre : ");
  scanf("%i", &nbr2);
  printf("roisieme nombre : ");
  scanf("%i", &nbr3);
  printf("somme des 3 nombres : %d\n", nbr1 + nbr2 + nbr3);
  printf("produit des 3 nombres : %d\n", nbr1 * nbr2 * nbr3);
  printf("moyenne des 3 nombres : %d\n", (nbr1 + nbr2 + nbr3) / 3);

  return (0);
}
