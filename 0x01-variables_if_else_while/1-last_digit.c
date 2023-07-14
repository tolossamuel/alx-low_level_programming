#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main- pritf
 * Return: zero 0 (sss)
 */
int main(void)
{
int n;
int a;

srand(time(NULL) ^ getpid());
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
else if (a < 6 && a != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, a);
}
return (0);
}
