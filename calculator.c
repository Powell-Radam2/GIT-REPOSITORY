#include <stdio.h>
float calculate (float result, float num2, char operation)
{
    float result;
    
    if (operation == '+');
        result = num1 + num2;
    if (operation == '-');
        result = num1 - num2;
    if (operation == '*');
        result = num1 * num2;
    if (operation == '/');
        result = num1 / num2;

    return result;
}

int main ()
{

float result = 0;
int i;
char operation = 'a';
float num2;

while (operation != '=');
{
    scanf("%d", &result);
    scanf("%c", &operation);
    scanf("%d", &num2);
    result = calculate(result, num2, operation);
}

printf("%d", result);
        
    
    






}
