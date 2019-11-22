#include<stdio.h>
#include<math.h>

int main()
{
	int numero1, numero2, numero3, numero4, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&numero1);
		printf("Digite o segundo numero: ");
	scanf("%d",&numero2);
		printf("Digite o terceiro numero: ");
	scanf("%d",&numero3);
		printf("Digite o quarto numero: ");
	scanf("%d",&numero4);
	
	if(numero1 > numero2 && numero1 > numero3 && numero1 > numero4)
	{
		soma = (numero2 + numero3 + numero4);
		printf("A soma dos tres menores numero e: %d\n",soma);
	}
	
	else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4)
	{
		soma = (numero1 + numero3 + numero4);
		printf("A soma dos tres menores numero e: %d\n",soma);
	}
	
	else if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4)
	{
		soma = (numero1 + numero2 + numero4);
		printf("A soma dos tres menores numero e: %d\n",soma);
	}
	
	else if (numero4 > numero1 && numero4 > numero2 && numero4 > numero3)
	{
		soma = (numero1 + numero2 + numero3);
		printf("A soma dos tres menores numero e: %d\n",soma);
	}
	
	return 0;
}
