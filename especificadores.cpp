/*programa para aprender especificadores de formato*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	char VariableChar=64*5; //el tipo char solo admite valores hasta 255, entonces no realiza la multiplicacion
	short int VariableShort=64*5;
	int VariableInt=64*1100;
	
	float VariableFloat=64;
	VariableFloat = VariableFloat/3;	
	double VariableDouble=64;
	VariableDouble=VariableDouble/3;
		
	int numero=85;
	float flotante=1.85;
	
	printf("Introduccion al lenguaje C \n \n \n"); //\n hace un salto de linea en la impresion
	printf("profesora:Martha Cano \n");
	
	printf("%d es un n\xA3mero entero \n\n",numero); //%d especifica que en esa posicion va el valor de la variable numero y se interpreta como un entero
	printf("%c es un numero entero \n\n",numero); //imprime una U, que corresponde en ascii a 85
	printf("%f es un numero entero \n\n",numero); //ctrl+e duplica una linea de codigo //un numero entero no se interpreta correctamente como flotante y viceversa
	printf("%x es un numero entero \n\n",numero); //%x para hexadecimal
	printf("%f es un numero flotante \n\n",flotante); 
	
	printf ("Para poder imprimir \", se debe poner un \\ antes de las \" \n"); //secuencia \"
	printf("para una alerta se usa:\\a \a \n");//\a suena una campana
	
	printf("Para retroceder se usa \\b, por ejemplo: casa\bu \n");
	printf("xxxx\txxxx\n xxx\txxx\n xx\txx\n x\tx\n\n"); //\t hace tabulaciones
	
	printf("VariableChar: %d \n", VariableChar);
	printf("VariableShort: %d \n", VariableShort);
	printf("VariableInt: %d \n", VariableInt);
	printf("VariableFloat: %.8f \n", VariableFloat); //hasta 7 cifras significativas
	printf("VariableDouble: %.8lf \n", VariableDouble); //hasta 15 cifras significativas
	
	system("pause"); //Esto es para poder ejecutar el .exe y que no se cierre la ventaan de consola

	
	
	
	return 0;	
}




