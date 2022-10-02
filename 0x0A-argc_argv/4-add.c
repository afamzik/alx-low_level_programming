#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* is_it_a_num - checks if an arg is a number
*@numCheck: numbers arg to check
* Return: returns 1 (true) if it is a number
* but returns 0 if not.
*/

bool is_it_a_num(char *numCheck)
{
	int x = 0;

	for (x = 0; numCheck[x]; x++)
	{
		if (!(numCheck[x] >= '0' && numCheck[x] <= '9'))
			return (0);
	}
	return (1);
}

/**
* main - this program adds positive numbers
* @num: the number argument
* @y: counts the number
* Return: this returns 0 on success
*/

int main(int y, char *num[])
{
	int i = 1;
	int sum = 0;

	/* validates the input number */
	if (y == 1)
	{
		printf("0\n");
		return (0);
	}

	/* checks the input number and sums them */
	while (i < y)
	{
		if (is_it_a_num(num[i]))
			sum += atoi(num[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
