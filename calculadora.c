#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char operacao;
	char linha[100];	// Variável para receber entradas do usuário até o 'ENTER' para cada variável
	float num1, num2;	// Na maioria dos casos o resultado será armazenado na variável num1

	// Entrada de Valores
	printf("Digite o primeiro número: ");
	scanf("%[^\n]", linha);
	num1 = atof(linha);	// Faz a conversão do texto digitado para um númeo, caso seja uma conversão impossível a variável receberá o valor de 0
	printf("Digite a operação: ");
	scanf(" %[^\n]", linha);
	operacao = linha[0];	// Considera o primeiro caractere digitado com o sendo o da operação
	printf("Digite o segundo número: ");
	scanf(" %[^\n]", linha);
	num2 = atof(linha);
	//Calculo e exibição de resultados conforme o dígito da operação
	switch (operacao) {
		case '+':
			num1 = num1 + num2;
			printf("O resultado é : %f\n", num1);
			break;
		case '-':
			num1 = num1 - num2;
			printf("O resultado é: %f\n", num1);
			break;
		case '*':
			num1 = num1 * num2;
			printf("O resultado é: %f\n", num1);
			break;
		case '/':
			if (num2 == 0) {
				printf("Divisor não pode ser igual a zero\n");
				exit(1);	// Status de saída 1 para divisor igual a 0;
		} else {
				num1 = num1 / num2;
				printf("O resultado é: %f\n", num1);
			}
			break;
		case '%':
			if (num2 == 0) {
				printf("Divisor não pode ser igual a zero\n");
				exit(1);
			} else {
				float quoc = (int)(num1 / num2);
				float resto = (int)num1 % (int)num2;
				printf("O resultado é: %f e o resto é: %f\n", quoc, resto);
			}
			break;
		default:
			printf("Operação inválida!!\n");
			exit(2);	// Status de saída 2 para variável inválida
	}
	return 0;
}
