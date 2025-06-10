#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
(void)argv;  /* To avoid unused parameter warning */
printf("%d\n", argc - 1);  /* Print the number of arguments */
return (0);
}
