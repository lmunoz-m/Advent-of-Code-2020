#include <fcntl.h>     
#include <stdlib.h>    
#include <stdio.h>

int main(int argc, char *argv[]){

   FILE *fichero, *fichero2; 
   int n = 0;
   int n2 = 0;
   int resultado = 0;
   char cadena[100];
   char cadena2[100];

   fichero = fopen ("input.txt", "r");
   if (fichero==NULL)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }
   
   fichero2 = fopen ("input.txt", "r");
   if (fichero2==NULL)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

	while (fgets(cadena, 100, fichero) != NULL)
	{
      n = atoi(cadena);
      while (fgets(cadena2, 100, fichero2) != NULL)
	   {
         n2 = atoi(cadena2);
         resultado = n + n2;
         if ( resultado == 2020)
   	   {
            printf("primero %d\n", n);
            printf("segundo %d\n", n2);
            break;
         }
         else if (n2 == 1637)
         {
            fgets(cadena, 100, fichero);
            n = atoi(cadena);
            fseek(fichero2, 0, SEEK_SET);
         }
      }
      break;
	}
   resultado = n * n2;
   printf("%d",resultado);
	return 0;
}
