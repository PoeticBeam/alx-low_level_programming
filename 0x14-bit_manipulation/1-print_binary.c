#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 *
 * @n: takes integer number to convert to binary
 * Return: 0 on fail, binary on success
 */

void print_binary(unsigned long int n)
{
	unsigned int p;

	if(!n)
		return (NULL);
	
	int p = sizeof(unsigned long int) * 8 - 1;
	int lead_zero = 1;

	while (p >= 0)
	{

	p = )
