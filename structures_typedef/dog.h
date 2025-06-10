#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);  /* Prototype for the print_dog function */

#endif /* DOG_H */
