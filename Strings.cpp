/*programa para aprender sobre Strings y sprintf*/

#include <stdio.h>
#include <stdlib.h>



int main()
{ 
    char NombresYapellidos[]={0};
	char nombre[100]={0};
	char apellido[100]={0};
	char miFrase[]={"Esta es mi primera frase"};
	char tiempo;
	char cmd[100]={0};
	char busqueda[]={0};
	
	printf("%s \n", miFrase);
	
	miFrase[9]='\0'; //ingreso un caracter null en la posicion 9. 
	printf("%s \n", miFrase); //se imprime hasta el caracter null
	
	printf("ingresa tu primer nombre \n");
	scanf("%s", nombre); 
	printf ("Hola %s \n", nombre);
	
	getchar();  //toma el ultimo caracter del buffer y lo desecha.
	printf("ingresa tu nombre compuesto \n");
	scanf("%[^\n]", nombre);   //se especifica que se de capturar hasta encontrar un enter (\n)
	printf ("Hola %s \n", nombre);

	getchar();  //toma el ultimo caracter del buffer y lo desecha.
	printf("ingresa tus apellidos \n");
	scanf("%[^\n]", apellido);   //se especifica que se de capturar hasta encontrar un enter (\n)
	getchar();
	
	//sprintf crear un string (igual a un printf) pero en lugar de mostrarlo en pantalla, lo guarda en un arreglo
	sprintf(NombresYapellidos,"Hola %s %s", nombre, apellido);
	printf("%s \n", NombresYapellidos);
	
	printf("Ingresa un numero del 1 al 10 \n");
	scanf("%d", &tiempo);
	
	//sprintf(cmd,"start shutdowm -s -t %d", tiempo); //creo una secuencia de sistema para apagar el pc en un tiempo ingresado por el usuario
	printf("tu pc se apagara en %d \n", tiempo);
	//system(cmd);
	
	printf("ingresa el titulo del video que deseas buscar\n");
	scanf("%s", busqueda);
	sprintf(cmd,"start http://www.youtube.com/results\?search_query=%s", busqueda);
	system(cmd);
	
	
	return 0;	
}




