#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print if the number is postive, zero, or negative
 *
 * Description: using the main fuction
 * this program prints "Programming is postive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int 1;

srand(time(0));
n = rand() - RAND_MAX / 2;
n = n % 10;

if (1 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, 1);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
}
return (0);
}

