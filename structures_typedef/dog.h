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

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Return: Nothing
 */
void print_dog(struct dog *d);

#endif /* DOG_H */
