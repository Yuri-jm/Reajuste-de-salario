#include <stdio.h>

int main () {
	
	float salario, reajuste;
	int cod;
	
	printf("Insira seu salario bruto: ");
	scanf("%f", &salario);
	
	printf("Insira o codigo do seu cargo:\n1 - Servente \n2 - Pedreiro \n3 - Mestre de obras \n4 - Tecnico de seguranca\n");
	scanf("%d", &cod);
	
	switch (cod) {
		case 1:
			printf("\nCargo: Servente");
			reajuste = salario * 0.4;
			printf("\nReajuste : R$ %.2f", reajuste);
			printf("\nTotal: R$ %.2f\n", reajuste + salario);
			break;
		case 2:
			printf("\nCargo: Pedreiro");
			reajuste = salario * 0.35;
			printf("\nReajuste : R$ %.2f", reajuste);
			printf("\nTotal: R$ %.2f\n", reajuste + salario);
			break;
		case 3:
			printf("\nCargo: Mestre de obras");
			reajuste = salario * 0.2;
			printf("\nReajuste : R$ %.2f", reajuste);
			printf("\nTotal: R$ %.2f\n", reajuste + salario);
			break;
		case 4:
			printf("\nCargo: Tecnico de seguranca");
			reajuste = salario * 0.1;
			printf("\nReajuste : R$ %.2f", reajuste);
			printf("\nTotal: R$ %.2f\n", reajuste + salario);
			break;
		default:
			printf("\nO codigo inserido nao corresponde a nenhum cargo");
			break;
	}
	
	system("pause");
	return 0;
}
