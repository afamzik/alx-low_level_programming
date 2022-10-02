#include <stdio.h>

/**
* main - prints all arguments received
*@x: counts the argument passed
*@arr: the poiter array
*Return: retrn 0 if true
*/

int main(int x, char *arr[])
{
	int i = 0;

	while (i < x)
		printf("%s\n", arr[i++]);

	return (0);
}
