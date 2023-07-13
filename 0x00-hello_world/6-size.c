#include <stdio.h>

int main(void)
{
    int num;
    long int num2;
    float float_num;
    char chars;
    long long int num3;

    printf("Size of a char: %lu byte(s)\n", (unsigned long )sizeof(chars));
    printf("Size of an int: %lu byte(s)\n", (unsigned long )sizeof(num));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long )sizeof(num2));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long )sizeof(num3));
    printf("Size of a float: %lu byte(s)\n", (unsigned long )sizeof(float_num));
    return (0);
}
