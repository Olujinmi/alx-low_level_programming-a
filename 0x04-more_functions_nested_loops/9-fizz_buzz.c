#include <stdio.h>

/**
*main - programmer acid test
*Return: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % ) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
