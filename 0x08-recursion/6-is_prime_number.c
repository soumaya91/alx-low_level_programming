#include "main.h"

int actual_prime(int n, int i);

/**
  * is_prime_number - if the input integer is a prime number
  * @n: input number
  *
  * Return: 1 if n is a prime number, otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - if the input integer is a prime number
  * @n: input number
  * @i: iterator
  *
  * Return: 1 if n is a prime number, otherwise 0
  */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
