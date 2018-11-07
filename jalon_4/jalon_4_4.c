/**
 * @Author: GuillaumeLandre
 * @Date:   2018-11-07T13:45:50+00:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-11-07T14:21:13+00:00
 */

#include <stdio.h>
#include <stdlib.h>

float fct_harmo(int nbr)
{
  float ress = 1.0;
  float i = 2;

  if (nbr <= 1)
    return (1);
  else
    while (i != nbr)
      ress += (1/i++);
  return (ress);
}

int main(int ac, char **av)
{
  if (ac == 2)
    printf("La  somme  de %i terme(s)  de  la  « série harmonique » est : %.2f\n",
     atoi(av[1]), fct_harmo(atoi(av[1])));
  else
    printf("La valeur de n est donnée par l’utilisateur.");
  return (0);
}
