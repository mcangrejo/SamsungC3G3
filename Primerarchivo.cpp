#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *miArchivo=fopen("paginaweb.html","a");  //crea la variable tipo FILE en la cual se almacena la direcion del archivo que se abre o crea
	
	fprintf(miArchivo,"<html>"); //se escribe en el archivo 
	fprintf(miArchivo,"<marquee direction=up>");
	fprintf(miArchivo,"Samsung");
	fprintf(miArchivo,"</marquee>");
	fprintf(miArchivo,"</html>");
	
	fclose(miArchivo); //siempre se debe cerrar el archivo
	
	system("paginaweb.html");  //despues de haber cerrado el archivo dentro de este codigo, se puede dar la instruccion para abrirlo en el explorador web
	
	return 0;
		
}
