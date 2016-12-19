#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
 	FILE *fp;
 
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 
 	fp = fopen ( "fichero.txt", "r+" );
 
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
 	
 	fclose ( fp );
    system("PAUSE");
 	return 0;
}


    
