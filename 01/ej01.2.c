#include <fcntl.h>      
#include <stdlib.h>     
#include <stdio.h>

int main(int argc, char *argv[]){

   FILE *fichero; 
   int n = 0;
   int res[200];
   int i = 0;
   int n1 = 0;
   int n2 = 0;
   int n3 = 0;
   int j = 0;
   int z = 0;
   int resultado = 0;
   char cadena[100];

   fichero = fopen ("input.txt", "r");
   if (fichero==NULL)
   {
        perror("Error al abrir fichero:");
        exit(1);
   }

	while (fgets(cadena, 100, fichero) != NULL)
	{
      	n = atoi(cadena);
		res[i] = n;
		i++;

	}
	int tam = i;
	int res1 = 0, res2 = 0, res3 = 0;
	i = 0;
	j = i + 1;
	z = i + 2;
  	while(i<tam)
	{
		while(j<tam)
		{  
			resultado = res[i] + res[j] + res[z];
			if(resultado == 2020)
			{
				res1 = res[i];
				res2 = res[j];
				res3 = res[z];
				printf("%d\n", res1);
				printf("%d\n", res2);
				printf("%d\n", res3);
				resultado = res1 * res2 * res3;
				printf("%d",resultado);
				exit(1);
			}
			else if(z == tam-1)
			{
				j++;
				z = i+2;
			}
			z++;
		}
		if(j == tam)
		{
			i++;
			j=i+1;
		}
		j++;
	}

	
	return 0;
}
