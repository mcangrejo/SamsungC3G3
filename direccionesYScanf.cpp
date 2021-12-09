/*programa para aprender especificadores de formato*/

#include <stdio.h>
#include <stdlib.h>

#define pi1 3.14  //se define un valor contstante y se le asigna una etiqueta

int main()
{ 
	char VariableChar=64; 
	short int VariableShort=64*5;
	int VariableInt=64*1100;
	
	float VariableFloat=64;
	VariableFloat = VariableFloat/3;	
	double VariableDouble=64;
	VariableDouble=VariableDouble/3;
	
	float pi=3.14;  //se guarda en una variabe un valor fijo. No se debe hacer para evitar que se cambie
	
	char peso=0;
	char miCaracter='M';
	char radio;
	float perimetro;
	float altura;
	float IMC;
	
	printf("la variable VariableChar contiene %d y esta en la direccion %d \n", VariableChar, &VariableChar);
	printf("la variable VariableShort contiene %d y esta en la direccion %d \n", VariableShort, &VariableShort);
	printf("la variable VariableInt contiene %d y esta en la direccion %d \n", VariableInt, &VariableInt);
	printf("la variable VariableFloat contiene %f y esta en la direccion %d \n", VariableFloat, &VariableFloat);
	printf("la variable VariableDouble contiene %f y esta en la direccion %d \n", VariableDouble, &VariableDouble);
	printf("la variable miCaracter %c y esta en la direccion %d \n", miCaracter, &miCaracter);

	
	printf("ingrese su estatura (m) y su peso (kg): \n");
	scanf("%f", &altura);
	scanf("%d", &peso);
	
	printf("La estatura ingresada es %f m, el peso ingresado es %d kg \n", altura, peso);
	IMC=peso/(altura*altura);
	printf("Su IMC es de: %f", IMC);
	
	//captura desde el teclado el radio de un circulo y calcula su perimetro
	printf("ingrese el valor del radio del circulo: \n");
	scanf("%d", &radio);
	printf("El radio ingresado es: %d \n", radio);
	
	perimetro=2*pi1*radio;
	printf("El perimetro es: %f", perimetro);
	
	return 0;	
}




