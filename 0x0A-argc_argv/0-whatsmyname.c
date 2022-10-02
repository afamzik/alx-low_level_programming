#include <stdio.h>

/**
* main - prints the name of program
* @argc: this counts the argument
* @argv: points toarray of the arguments
*Return: returns 0 if successful
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
