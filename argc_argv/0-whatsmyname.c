#include <stdio.h>

/**
* main - Prints the name of the program
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);  /* Print the program name */
return (0);
}
