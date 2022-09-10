#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero, or negative
*
*Description: Using the main function 
* this program prints "programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
   /* your code gose there */
if (n > 0)
{
	printf("%l ls positive\n", n);
}
else if (n == 0)
{
	printf("%l ls zero\n", n);
}
else if (n < 0)
{
	printf("%l is nagative\n", n)
}
return (0);
