#include <stdio.h>
float calculate (float result, float num2, char operation)
{
    float result2 = 0;
    
    if (operation == '+')
        result2 = num2 + result;
    if (operation == '-')
        result2 = result - num2;
    if (operation == '*')
        result2 = result * num2;
    if (operation == '/')
        result2 = result / num2;

    return result2;
}

int main ()
{

float result = 0;
char operation = 'a';
float num2;

for (int i = 0; operation != '='; i++)
{
    if (i == 0)
    {
        scanf("%f", &result);
    }
        
    if (i > 0)
    {
        getchar();
        scanf("%c", &operation);
       
        if(operation == '=')
            break;
        
        getchar();
        scanf("%f", &num2);

        result = calculate(result, num2, operation);
        //printf("= %f\n", result);
    }
    
}

printf("%f", result);
}

