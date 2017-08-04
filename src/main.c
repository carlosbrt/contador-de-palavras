/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c=1;
  int i=0, j=0, k=0, v=0;
  char s[150];


  while (c != '\n') 
  {
    scanf("%c", &c);
    s[i] = c;
    i++;
  }
  
  for (j=0; j<=i; j++)
  {
    if ( (s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z') )
    {
      if ( (s[j+1]>=' ' && s[j+1]<='/') || s[j+1]=='\n' || s[j+1]==':')
        k++;
    }
    else if (s[j]>='0' && s[j]<='9')
    {
      if ( (s[j+1]>=' ' && s[j+1]<=')') || s[j+1]=='\n') 
        k++;
      if ( (s[j+1]==',' || s[j+1]=='.') && (s[j+2]==' ' || s[j+2]=='\n' || (s[j+2]>='a' && s[j+2]<='z') || (s[j+2]>='A' && s[j+2]<='Z')))
        k++;
      
    }
    else v=0;
  }
 
   printf("%d \n", k);
  return 0;
}





