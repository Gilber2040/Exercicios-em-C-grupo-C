#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float n1, n2, n3, soma, media, produto;
	printf("Digite o primeiro valor ");
	scanf("%f",&n1);
	printf("Digite o segundo valor ");
	scanf("%f",&n2);
	printf("Digite o terceiro valor ");
	scanf("%f",&n3);
	soma = (n1+n2+n3);
	printf("\nA soma dos numeros e: %f\n\n", soma);
	media = (n1+n2+n3) / 3;
	printf("\nA media dos numeros e: %f\n\n", media);
	produto = (n1*n2*n3);
	printf("\nO produto dos numeros e: %f\n\n", produto);

system("pause");
return 0;
}
