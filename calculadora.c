#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mmc(int num1, int num2) {
    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

int mdc(int num1, int num2) {
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main()
{
	char operacao;
    printf("Escolha a opcao de calculo\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potencia\n");
    printf("6 - Mod\n");
    printf("7 - MMC\n");
    printf("8 - MDC\n");
    scanf("%c", &operacao);
    
    float xNum,yNum,resultado;
    printf("Digite os dois numeros\n");
	scanf("%f%f", &xNum, &yNum);
    
    switch(operacao){
        case '1':
            resultado = xNum + yNum;
            break;
        case '2':
            resultado = xNum - yNum;
            break;
        case '3':
            resultado = xNum * yNum;
            break;
        case '4':
            resultado = xNum / yNum;
            break;
        case '5':
            resultado = pow(xNum, yNum);
            break;
        case '6':
            resultado = (int)xNum % (int)yNum;
            break;
        case '7':
            resultado = mmc(xNum, yNum);
            break;
        case '8':
            resultado = mdc(xNum, yNum);
            break;
    }
    
    printf("Resultado: %.1f", resultado);
    return 0;
}