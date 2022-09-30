#include "main.h"

/**
*check_prime - funtion also helps check if a number is prime
* by  doing so recursively
*@n: this is the integer to be checked
*@x: only interger aside 1 that can divide prime number n
*Return: returns 1 if a prime number is encountered
*/

int check_prime(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	return (check_prime(n, x + 1));
}

/**
* is_prime_number - indicates if a prime number is encounter
* @n: the integer to be checked
*Return: returns 1  for prime numbers
*/

int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, 3));
}
