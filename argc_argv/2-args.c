#include <stdio.h>

/**
* main - Prints all arguments received
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int i;  /* Declare the loop variable */
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);  /* Print each argument on a new line */
}
return (0);
}
