/*
* @Author: GuillaumeLandre
* @Date:   2018-10-25 10:38:45
* @Last Modified by:   GuillaumeLandre
* @Last Modified time: 2018-10-25 10:38:45
*/
#include <stdio.h>

 int main(void)
 {
 	int var = 10;
 	char str[29];

 	printf("taille de var %lu\n", sizeof(var));
 	scanf("%s", str);
 	printf("%s\n", str);

 	return 0;
 }