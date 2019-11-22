#include<stdio.h>
#include<math.h>

int main()
{
float salario, salarioreajustado;

printf("Digite o valor de seu salario\n");
scanf("%f",&salario);

if (salario <= 300.00){
salarioreajustado = (0.5 * salario) + salario;
printf("Salario com reajuste de 50 porcento = %.2f\n",salarioreajustado);
}

else if (salario > 300.00){
salarioreajustado = (0.3 * salario) + salario;
printf("Salario com reajuste de 30 porcento = %.2f\n",salarioreajustado);
}
return 0;
}
