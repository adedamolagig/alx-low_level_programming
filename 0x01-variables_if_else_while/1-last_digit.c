#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print the value of n status: greater than, is zero and is not less than 6.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Adedamola code goes there */
	digit = n % 10;/*last digit is extracted*/

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
