nclude "main.h"
/**
 *prime - prime number 1 otherwise 0
 *@y: number
 *@x: number
 *Return: 1 if number is prime, 0 otherwise
 **/
int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
/**
 *is_prime_number - if number is prime, return smth
 *@n: number
 *Return: 1 if it is prime, 0 otherwise
 **/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}

