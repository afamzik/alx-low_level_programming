#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins for money passed
*@x: counts the arguments
*@arr: the money passed to the program
*Return: returns required number of coin
*/

int main(int x, char *arr[])
{
	int n;
	int coins = 0;

	if (x != 1)
	{
		printf("Error\n");
		return (1);
	}

	if (arr[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	n = atoi(arr[1]);

	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
