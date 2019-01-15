/**
 * @Author: GuillaumeLandre
 * @Date:   2019-01-14T11:02:17+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2019-01-14T13:47:22+01:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int who_is_min(int *arr, char **argv)
{
  int min = 100;
  for (int i = 0; i != atoi(argv[1]); i++)
  {
    if (arr[i] < min)
      min = arr[i];
  }
  return (min);
}

int who_is_max(int *arr, char **argv)
{
  int max = 0;
  for (int i = 0; i != atoi(argv[1]); i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return (max);
}

int rand_a_b(int a, int b)
{
  return (rand() % (b-a) + a);
}
void afficher(int *arr, char **argv)
{
  for (int i = 0; i != atoi(argv[1]); i++)
    printf("%i ", arr[i]);
}
void remplir(int *arr, char **argv)
{
  for (int i = 0; i != atoi(argv[1]); i++)
    arr[i] = rand_a_b(0, 100);
}

int main(int argc, char  *argv[]) {
  argc = 0;
  int *arr = (int*)malloc(sizeof(int) *atoi(argv[1]));
  remplir(arr, argv);
  srand(time(NULL));
  afficher(arr, argv);
  printf("\nla valeur la plus petite est : %i\n", who_is_min(arr, argv));
  printf("la valeur la plus grande est : %i\n", who_is_max(arr, argv));
  return (0);
}
