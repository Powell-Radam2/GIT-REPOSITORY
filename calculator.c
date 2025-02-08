#include <stdio.h>

void add(float num1, float num2)
{
    num1 += num2;
}

void subtract (float num1, float num2)
{
    num1 -= num2;
}

void multiply (float num1, float num2)
{
    num1 *= num2;
}

void divide (float num1, float num2)
{
    num1 /= num2;
}

int main ()
{

char operation;
float num;
float result;
int i;

printf("Once input is done enter =. \n");
printf("+: Addition\n -: Subtraction\n *: Multiplication\n /: Division\n");

for(i = 0; operation != '='; i++)
    {
        if (i > 0)
        {
            scanf("%c", operation);
        }
        if (operation != '=')
        {
            printf("Enter number: \n");
            scanf("%d", &num);
            getchar();
        }
        if (i == 0);
        {
            result = num * 1.0;
        }
        

    if (operation == '+')
    {
        add(result, num);
        printf("%.2f\n", result);
    }
    
    else if (operation == '-')
    {
        subtract(result, num);
        printf("%.2f\n", result);
    }
    
    else if (operation == '*')
    {
        multiply(result, num);
        printf("%.2f\n", result);
    }
    
    else if (operation == '/')
    {
        divide(result, num);
        printf("%.2f\n", result);
    }

    else
    {
        printf("Input Error!!!");
        operation = '=';
    }
    
}

return 0;
}
