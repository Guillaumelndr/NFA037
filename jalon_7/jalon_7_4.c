/**
 * @Author: GuillaumeLandre
 * @Date:   2019-01-15T12:12:48+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2019-01-15T15:17:00+01:00
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>

double add(char *opp)
{
  char *x = malloc(sizeof(char) * strlen(opp));
  char *y = malloc(sizeof(char) * strlen(opp));
  for(int i = 0; opp[i] != '+'; i++)
    x[i] = opp[i];
  for(int i = strlen(x) + 1; opp[i] != '\0'; i++)
    y[i - (strlen(x) + 1)] = opp[i];

  return (atof(x) + atof(y));
}

double mul(char *opp)
{
  char *x = malloc(sizeof(char) * strlen(opp));
  char *y = malloc(sizeof(char) * strlen(opp));
  for(int i = 0; opp[i] != '*'; i++)
    x[i] = opp[i];
  for(int i = strlen(x) + 1; opp[i] != '\0'; i++)
    y[i - (strlen(x) + 1)] = opp[i];

  return (atof(x) * atof(y));
}

double divv(char *opp)
{
  char *x = malloc(sizeof(char) * strlen(opp));
  char *y = malloc(sizeof(char) * strlen(opp));
  for(int i = 0; opp[i] != '/'; i++)
    x[i] = opp[i];
  for(int i = strlen(x) + 1; opp[i] != '\0'; i++)
    y[i - (strlen(x) + 1)] = opp[i];

  return (atof(x) / atof(y));
}

double sous(char *opp)
{
  char *x = malloc(sizeof(char) * strlen(opp));
  char *y = malloc(sizeof(char) * strlen(opp));
  for(int i = 0; opp[i] != '-'; i++)
    x[i] = opp[i];
  for(int i = strlen(x) + 1; opp[i] != '\0'; i++)
    y[i - (strlen(x) + 1)] = opp[i];

  return (atof(x) - atof(y));
}
double my_switch(char *opp)
{
  for(int i = 0; opp[i] != '\0'; i++)
    switch (opp[i]) {
      case '+':
        return (add(opp));
        break;
      case '-':
          return (sous(opp));
        break;
      case '/':
        return (divv(opp));
        break;
      case '*':
        return (mul(opp));
        break;
      }
      return (0);
}
void eror(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
      if((str[i] < '0' || str[i] > '9')  && str[i] != '+'
      && str[i] != '-' && str[i] != '*' && str[i] != '/' && str[i] != '.')
      {
        printf("syntax error (ex : 4*2, 3+3...)\n");
        exit(-1);
      }
    }
}

int main(int ac, char **av)
{
  if (ac != 2) {
      printf("Bad argument !");
      exit(-1);
  }
  eror(av[1]);
  printf("%s = %f\n",av[1], my_switch(av[1]));
  return (0);
}
