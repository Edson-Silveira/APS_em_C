#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int temp[5],maior=0, menor=100, clima, cont,chuvoso,diasMedia=0,maiorQ=0;
	float soma, media;
	
	for(cont = 0;cont < 5;cont++)
	{
		printf("Informe a Temperatura(em Celsius):");
		scanf("%d",&temp[cont]);
		printf("Informe o clima: 1--Ensoralado: 2--Nublado: 3--Chuvoso:");
		scanf("%d",&clima);
		soma = soma + temp[cont];
		if(clima==3)
		{
			chuvoso++;
		}
		if(menor> temp[cont])
		{
			menor = temp[cont];
		}
		if(maior<temp[cont])
		{
			maior = temp[cont];
		}
	}
	media = soma/5;
	for(cont = 0;cont < 5;cont++)
	{	
	if(media <temp[cont])
		{
			diasMedia++;
		}
		if(temp[cont]>30)
		{
			maiorQ++;
		}
	
	}

	printf("\nA Temperatura maior é :%d",maior);
	printf("\nA Temperatura menor é :%d",menor);
	printf("\nA média anual é : %.1f",media);
	printf("\nO número de dias chuvosos foi:%d",chuvoso);
	printf("\nOs dias ácima da média foram: %d\n",diasMedia);
	printf("Dias em que a temperatura está acima de 30 graus: %d",maiorQ);
		
}
