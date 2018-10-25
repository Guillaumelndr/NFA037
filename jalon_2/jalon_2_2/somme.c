/**
 * @Author: GuillaumeLandre
 * @Date:   2018-10-25T12:54:59+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2018-10-25T13:31:47+01:00
 */



#include <stdio.h>
#include <string.h>

 int main(void)
 {
 	int var = 10;
 	char str[30];

 	printf("taille d'un int %lu\n", sizeof(var));
 	scanf("%[^\n]", str);
 	str[29] = '\0';
 	printf("%d %d\n", str[0], str[strlen(str) - 1]);

 	return 0;
 }
