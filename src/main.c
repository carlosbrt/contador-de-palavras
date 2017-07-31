/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int i;

  c = 1;
  i = 1;

  while (c != '\n') {
    scanf("%c", &c);
    if (c == ' '){
      i++;
    }	
  }

  printf("%d \n", i);
  return 0;
}
