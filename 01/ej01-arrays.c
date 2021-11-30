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
	int res1 = 0, res2 = 0;
	i = 0;
	j = i + 1;
  	while(i<tam){
		resultado = res[i] + res[j];
		if(resultado == 2020)
		{
			res1 = res[i];
			res2 = res[j];
			printf("%d\n", res1);
			printf("%d\n", res2);
			break;
		}
		else if(j == tam)
		{
			i++;
			j=i+1;
		}
		j++;
	}

	resultado = res1 * res2;
	printf("%d", resultado);
	return 0;
}
