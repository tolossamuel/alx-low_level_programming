#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main- posetive or negative nuber
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(NULL) ^ getpid());
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);
}
