/*programa para aprender especificadores de formato*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	int numero=85;
	float flotante=1.85;
	
	printf("Introduccion al lenguaje C \n \n \n"); //\n hace un salto de linea en la impresion
	printf("profesora:Martha Cano \n");
	
	printf("%d es un numero entero \n\n",numero); //%d especifica que en esa posicion va el valor de la variable numero y se interpreta como un entero
	printf("%c es un numero entero \n\n",numero); //imprime una U, que corresponde en ascii a 85
	printf("%f es un numero entero \n\n",numero); //ctrl+e duplica una linea de codigo
	printf("%x es un numero entero \n\n",numero); //%x para hexadecimal
	printf("%f es un numero entero \n\n",flotante); 
	
	printf ("Para poder imprimir \", se debe poner un \\ antes de las \" \n"); //secuencia \"
	printf("para una alerta se usa:\\a \a \n");//\a suena una campana
	
	printf("Para retroceder se usa \\b, por ejemplo: casa\bu \n");
	printf("xxxx\txxxx\n xxx\txxx\n xx\txx\n x\tx\n"); //\t hace tabulaciones
	
	return 0;	
}




