#ifndef MAIN_H
#define MAIN_H

char *str_concat(char *s1, char *s2);

#endif

char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
