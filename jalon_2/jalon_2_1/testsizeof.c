/*
* @Author: GuillaumeLandre
* @Date:   2018-10-25 10:38:45
* @Last Modified by:   GuillaumeLandre
* @Last Modified time: 2018-10-25 10:38:45
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