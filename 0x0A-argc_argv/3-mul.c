#include <stdio.h>
#include <stdlib.h>
/**
* main - the main function
*@x: the number of args
*@mult: the number to multiply
*Return: returns 0 on success and 1 otherwise
*/

int main(int x, char *mult[])
{
	if (x != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(mult[1]) * atoi(mult[2]));
	return (0);
}
