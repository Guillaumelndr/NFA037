/**
 * @Author: GuillaumeLandre
 * @Date:   2018-10-26T14:25:47+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-10-26T14:37:24+01:00
 */

#include <stdio.h>
#include <stdlib.h>


void fct_modulo(int nbr1, int nbr2)
{
  int result = 0;
  int rest = 0;

  result = nbr1 / nbr2;
  rest = nbr1 % nbr2;

  printf("Résultat = %i\n", result);
  printf("Reste = %i\n", rest);
}

int main(int argc, char const *argv[])
{
  fct_modulo(atoi(argv[1]), atoi(argv[2]));
  return (0);
}
