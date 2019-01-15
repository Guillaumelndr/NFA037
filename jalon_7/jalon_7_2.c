/**
 * @Author: GuillaumeLandre
 * @Date:   2019-01-14T13:56:27+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2019-01-14T14:31:21+01:00
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

typedef struct point
{
  int x;
  int y;
} pt;

int rand_a_b(int a, int b)
{
  return (rand() % (b-a) + a);
}

int main() {
   int n = 0;
   srand(time(NULL));
   printf("entrer un nombre : ");
   scanf("%d", &n);
   pt *arr;
   arr = (pt*)malloc(sizeof(pt) * n);
   for (int i = 0; i != n; i++)
   {
     arr[i].x = rand_a_b(0, 20);
     arr[i].y = rand_a_b(0, 20);
   }

   for (int i = 0; i != n; i++)
    printf("%i = (%i : %i)\n", i, arr[i].x, arr[i].y);
   return (0);
 }
