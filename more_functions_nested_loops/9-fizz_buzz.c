#include <stdio.h>

/**
* main - prints numbers from 1 to 100 with FizzBuzz rules
*
* Return: Always 0.
*/
int main(void)
{
int i; /* Declare variable at start for C89 */

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}

if (i < 100)
{
printf(" ");  /* Print space after each number or word except the last */
}
}
printf("\n");  /* New line at the end */
return (0);
}
