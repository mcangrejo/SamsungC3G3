#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adivinar[3];
int usuario[3];

int calcFijas();
int calcPicas();

int main()
{
	int fijas=0, picas=0, i, aleatorio;
	srand(time(NULL));
	for(i=0; i<3; i++)
	{
		aleatorio=rand()%10;
		adivinar[i]=aleatorio;
		if(i>0)
		{
			while(adivinar[i]==adivinar[i-1])
			{
				aleatorio=rand()%10;
				adivinar[i]=aleatorio;
			}
		}
		
		
	}
	printf("%i%i%i\n",adivinar[0],adivinar[1],adivinar[2]);
	
	while(fijas!=3)
	{
		printf("ingresa 3 digitos separados por un enter\n");
		scanf("%i%i%i",&usuario[0],&usuario[1],&usuario[2]);
		printf("ingreso:%i%i%i\n",usuario[0],usuario[1],usuario[2]);
		fijas=calcFijas();
		picas=calcPicas();
		printf("fijas:%i picas:%i\n",fijas,picas);
				
	}
	
	printf("felicitaciones, has adivinado!");
	return 0;
	
}

int calcFijas(void)
{
	int j, Lfijas=0;
	for(j=0; j<3; j++)
	{
		if(adivinar[j]==usuario[j])
		{
			Lfijas++;
		}
	}
	return Lfijas;
}

int calcPicas(void)
{
	int k,l;
	int Lpicas;
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			if((usuario[k]==adivinar[l]) && (l!=k))
			{
				Lpicas++;
			}
		}
	}
	return Lpicas;

}
