#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  main function of the program
 * Return: returns 0
 */
int main(void)
{
	/**
	 *srand -this functio generayes random numbers 
	 *@time: specifies  its number of occurence
	 *rand - this funtion creates randon variables
	 *@RAND_MAX: this takes the maxium number
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n == 0)
	{
	printf("%d is zero", n);
	}
	else
	{
	printf("%d is negative", n);
	}
	return (0);
}	
