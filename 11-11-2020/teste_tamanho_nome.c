# include <stdio.h>
# include <stdlib.h>
#include <string.h>

int main()
{
   char frase[50];
   int tamanho;

   printf ("Digite uma frase\n\n");
   gets (frase);

   tamanho = strlen(frase);

   printf("\nTotal de letras da Frase : %d",tamanho);
   printf("\n\n");

   system ("pause");
   return 0;
}
