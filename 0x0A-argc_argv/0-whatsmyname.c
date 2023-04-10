#include <stdio.h>
#include "main.h"

/**
  * main - prints a program name
  * @argc: number of arguments
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
