/**
 * main - Print putchar
 *
 * Return: Always 0
 */
int main(void)
{
    int _putchar(char c);
    char c[] = "_putchar\n";
    int i;

    for (i = 0; c[i] != '\0'; i++)
    {
        _putchar(c[i]);
    }

    return (0);
}
