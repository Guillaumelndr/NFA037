/**
 * @Author: GuillaumeLandre
 * @Date:   2019-01-14T14:33:31+01:00
 * @Last modified by:   GuillaumeLandre
 * @Last modified time: 2019-01-15T12:09:07+01:00
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>

char **read_word() {
  char **str = malloc(sizeof(char *) * 2);
  for (int i = 0; i != 2; i++)
    str[i] = (char*)malloc(sizeof(char) * 200);
  printf("entrer le text a camoufler   : ");
  scanf("%s", str[0]);
  printf("taille du text a camoufler : %lu\n", strlen(str[0]) * 5);
  printf("entrer le text de camouflage : ");
  scanf("%s", str[1]);
  printf("taille du text a camoufler : %lu\n", strlen(str[1]));
  if (strlen(str[1]) != strlen(str[0]) * 5) {
    printf("Merci de metre %lu caractere(s) dans le text de camouflage\n", strlen(str[0]) * 5);
    printf("entrer le text de camouflage : ");
    scanf("%s", str[1]);
  }
  return (str);
}

char **init_code()
{
  char **code = (char**)malloc(sizeof(char *) * 26);
  for (int i = 0; i != 26; i++)
  {
    code[i] = (char*)malloc(sizeof(char) * 6);
    code[i][6] = '\0';
  }
  code[0] = "AAAAA"; // A
  code[1] = "AAAAB"; // B
  code[2] = "AAABA"; // C
  code[3] = "AAABB"; // D
  code[4] = "AABAA"; // E
  code[5] = "AABAB"; // F
  code[6] = "AABBA"; // G
  code[7] = "AABBB"; // H
  code[8] = "ABAAA"; // I
  code[9] = "ABAAA"; // J
  code[10] = "ABAAB"; // K
  code[11] = "ABABA"; // L
  code[12] = "ABABB"; // M
  code[13] = "ABBAA"; // N
  code[14] = "ABBAB"; // O
  code[15] = "ABBBA"; // P
  code[16] = "ABBBB"; // Q
  code[17] = "BAAAA"; // R
  code[18] = "BAAAB"; // S
  code[19] = "BAABA"; // T
  code[20] = "BAABB"; // U
  code[21] = "BAABB"; // V
  code[22] = "BABAA"; // W
  code[23] = "BABAB"; // X
  code[24] = "BABBA"; // Y
  code[25] = "BABBB"; // Z

  return (code);
}

char *create_binar(char *chiff, char **code, char**str)
{
  int count = 0;
  int a = 0;
  for(int i = 0; i != strlen(str[0]); i++)
  {
    while(code[str[0][i] - 'a'][count] != '\0')
    {
      chiff[a] = code[str[0][i] - 'a'][count];
      a++;
      count++;
    }
    count = 0;
  }
  return (chiff);
}

char *resolv(char *chiff, char **str)
{
  for(int i = 0; chiff[i] != '\0'; i++)
  {
    if(chiff[i] == 'A')
      str[1][i] = toupper(str[1][i]);
    else
      str[1][i] = tolower(str[1][i]);
  }
  return (str[1]);
}
 int main()
 {
   char **str = read_word();
   char **code = init_code();
   char *chiffrage;
   chiffrage = malloc(sizeof(char) * strlen(str[0]) * 5);
   printf("%s\n", create_binar(chiffrage, code, str));
   printf("%s\n", resolv(chiffrage, str));
   return (0);
 }
