#include <stdio.h>

float add(int num1, int  num2)
{
    return (num1 + num2) * 1.0;
}

float subtract (int num1, int num2)
{
    return (num1 - num2) * 1.0;
}

float multiply (int num1, int num2)
{
    return num1 * 1.0 * num2;
}

float divide (int num1, int num2)
{
    return num1 * 1.0 / num2;
}

int main ()
{

int operation;
float num1, num2;
float result;

printf("Choose operation: \n");
printf("1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n");
scanf("%d", &operation);

printf("Enter first number: \n");
scanf("%d", &num1);

printf("Enter second number: \n");
scanf("%d", &num2);

if (operation == 1)
{
    result = add(num1, num2);
    printf("Result: %d", result);
}

if (operation == 2)
{
    result = subtract(num1, num2);
    printf("Result: %d", result);
}

if (operation == 3)
{
    result = multiply(num1, num2);
    printf("Result: %d", result);
}

if (operation == 4)
{
    result = divide(num1, num2);
    printf("Result: %d", result);
}









}
