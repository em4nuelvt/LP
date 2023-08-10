#include <stdio.h>
#include <stdlib.h>
/*
Estude a documentação das funções de manipulações
de strings em C strcmp e strcat.
Implemente estas funções em C com alocação
dinâmica de memória.
*/

/*
The strcmp() compares two strings character by character. If the strings are
equal, the function returns 0.

returns:
0	if strings are equal
1	if the first non-matching character in str1 is greater (in ASCII) than
that of str2. -1	if the first non-matching character in str1 is lower (in
ASCII) than that of str2.
*/

/*
C strcat() function appends the string pointed to by src to the end of the
string pointed to by dest. It will append a copy of the source string in the
destination string. plus a terminating Null character. The initial character of
the string(src) overwrites the Null-character present at the end of the
string(dest).

*/
// retorna o tamanho de uma string

int retornaTamanho(char *texto) {
  int i = 0;
  while (texto[i] != '\0') {
    i++;
  }
  return i;
}

// le a string sem indpendente do tamanho que ela pode ter
void leituraDinamica(char *palavra) {
  char c;
  int i = 0;
  do {
    scanf("%c", &c);
    if (c != '\n') {
      palavra[i] = c;
    }
    palavra = realloc(palavra, sizeof(char) * ((retornaTamanho(palavra)) + 1));
    i++;
  } while (c != '\n');
}

// strcmp
int strcomp(char *string1, char *string2) {
  int tamanho1;
  int tamanho2;

  tamanho1 = retornaTamanho(string1);
  tamanho2 = retornaTamanho(string2);

  int i = 0;

  if(tamanho1>tamanho2){
    return 1;
  }else if(tamanho1<tamanho2){
    return -1;
  }
  
  do {
      if (string1[i] == string2[i]) {
        i++;
      } else {
        if (string1[i] > string2[i]) {
          return 1;
        } else {
          return -1;
        }
      }
  } while (string1[i] != '\0');

  return 0;
}
// strcat
void concat(char *dest, char *src) {
  int tamanho1, tamanho2;
  tamanho1 = retornaTamanho(dest);
  tamanho2 = retornaTamanho(src);
  int aux = tamanho1;

  dest = realloc(dest, sizeof(char) + tamanho2+1);
  for (int i = 0; i < tamanho2; i++) {
    dest[aux] = src[i];
    aux++;
  }
  dest[aux]='\0';
}

int main(void) {

  char *palavra1;
  char *palavra2;

  // alocando memoria inicial para as strings
  palavra1 = (char *)malloc(sizeof(char));
  palavra2 = (char *)malloc(sizeof(char));
  printf("insira a palavra 1: ");
  leituraDinamica(palavra1);

  printf("insira a palavra 2: ");
  leituraDinamica(palavra2);

  int tmp = strcomp(palavra1, palavra2);

  switch (tmp) {
  case 1:
    printf("primeira palavra maior que a segunda\n");
    break;
  case -1:
    printf("primeira palavra menor que a segunda\n");
    break;
  case 0:
    printf("as palavras são iguais\n");
    break;
  }
  concat(palavra1, palavra2);
  printf("concatenação: %s\n", palavra1);

  return 0;
}
