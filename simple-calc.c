/*
Name: Vedang Dadape
Roll: SEITA122
Subject: Simple Calculator
*/
#include <stdio.h>
int main()
{
    char ch;
    float num1, num2;

    printf("Choose the operator(+,-,*,/): ");
    scanf("%c", &ch);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! Invalid Operator.");
    }

    return 0;
}