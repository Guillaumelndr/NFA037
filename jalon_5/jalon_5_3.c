/**
 * @Author: GuillaumeLandre
 * @Date:   2018-11-08T14:46:31+00:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-11-08T14:55:45+00:00
 */

 #include <stdio.h>
 #include <stdlib.h>

 typedef struct point
  {
   char nom;
   int x, y;
 } pnt;

union convv
{
    pnt *p;
    char *arr;
} cov;

pnt *init_struct(void)
{
     pnt *coord = malloc(sizeof(pnt));
     coord->x = 10;
     coord->y = 12;
     coord->nom = 'B';
     return (coord);
 }

 void ft_print_coord(pnt *coord)
 {
     printf("Point %c de coordonnées (%i ; %i)\n",
     coord->nom, coord->x, coord->y);
 }

 int main(int ac, char **av)
 {
   pnt *coord = init_struct();

   free(coord);
   return (0);
 }
