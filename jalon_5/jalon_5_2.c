/**
 * @Author: GuillaumeLandre
 * @Date:   2018-11-08T09:07:02+00:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-11-08T09:17:07+00:00
 */

 #include <stdio.h>
 #include <stdlib.h>

 typedef struct point
  {
   char nom;
   int x, y;
 } pnt;

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

 pnt *calculerOppose(pnt *p)
 {
   pnt *opp_coord = malloc(sizeof(pnt));
   opp_coord->x = p->x * -1;
   opp_coord->y = p->y * -1;
   opp_coord->nom = 'Y';
   return (opp_coord);
 }

 int main(int argc, char const *argv[])
{
   pnt *coord = init_struct();
   pnt *opp_coord = calculerOppose(coord);
   ft_print_coord(coord);
   ft_print_coord(opp_coord);
   free(coord);
   free(opp_coord);
   return (0);
}
