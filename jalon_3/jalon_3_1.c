/**
 * @Author: GuillaumeLandre
 * @Date:   2018-10-25T16:00:36+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-10-26T14:14:51+01:00
 */

 #include <stdio.h>
 #include <stdlib.h>


void trie(int n1, int n2, int n3)
{
  int small = n1;
  int med = n2;
  int big = n3;
  int arr[3];
  arr[0] = n1;
  arr[1] = n2;
  arr[2] = n3;

  for (int i = 0; i < 3; i++) {
    if (small >= arr[i])
      small = arr[i];
  }

  for (int i = 0; i < 3; i++) {
    if (big <= arr[i])
      big = arr[i];
  }

  for (int i = 0; i < 3; i++) {
    if (arr[i] >= small && arr[i] <= big)
      med = arr[i];
  }

  printf("%i < %i < %i\n", small, med , big);
}

void input_err(int err)
{
  if (err != 1)
  {
    printf("Merci d'entrer uniquement des nombres\n");
    exit(84);
  }
}

int main(void)
{
  int nbr1 = 0;
  int nbr2 = 0;
  int nbr3 = 0;

  int error_exit = -1;

  printf("premier nombre : ");
  error_exit = scanf("%i", &nbr1);
  input_err(error_exit);
  printf("deuxieme nombre : ");
  error_exit = scanf("%i", &nbr2);
  input_err(error_exit);
  printf("roisieme nombre : ");
  error_exit = scanf("%i", &nbr3);
  input_err(error_exit);

  trie(nbr1, nbr2, nbr3);

  return (0);
}
