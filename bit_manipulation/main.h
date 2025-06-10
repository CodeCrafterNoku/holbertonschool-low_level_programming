#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c); /* _putchar function for character output */
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index); /* New function prototype */

#endif /* MAIN_H */
