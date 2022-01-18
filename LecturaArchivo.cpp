#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *f=fopen("PasatiemposGrupo3.txt","r"); //se abre el archivo en modo de solo lectura
	char nombre[100]={0};
	char edad[10]={0};
	char pasatiempo[50]={0};
	int promedioEdad=0;
	int contador=0;
	int edadEntero=0;
	char cmd[100]={0};
	
	while(1) //1 es igual a verdadero, entonces se crea un bucle infinito porque la condicion del whie siempre es verdadera
	{
		fscanf(f,"%s %s %s",nombre,edad,pasatiempo); //se adquiere caracteres desde el archivo al cual apunta f y se guardan en el arreglo nombre
		printf("%s	%s	%s\n",nombre,edad,pasatiempo); //se imprime en consola lo que se guardo en los diferentes areglos
		
		edadEntero=atoi(edad);
		promedioEdad+=edadEntero;
		contador++;
		
		sprintf(cmd,"start https://www.google.com/search?q=%s^&tbm=isch",pasatiempo);
		system(cmd);
		
		if(feof(f))  //FileEndOfFile retorna verdadero si el cursor llegó al final del archivo
		{
			break; //break rompe el bucle que lo contiene. En este caso el while(1)
		}
	}
	promedioEdad/=(contador -1);
	printf("El promedio de edad del grupo 3 es: %d \n",promedioEdad);
	fclose(f); //siempre se cierra el archivo
	
	return 0;
}
