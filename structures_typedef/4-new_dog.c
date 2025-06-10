#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;

    while (*s++)
        len++;

    return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while ((*dest++ = *src++))
        ;

    return (original_dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    unsigned int name_len, owner_len;

    if (name == NULL || owner == NULL)
        return (NULL);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    new_dog->name = malloc(sizeof(char) * (name_len + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    _strcpy(new_dog->name, name);
    _strcpy(new_dog->owner, owner);
    new_dog->age = age;

    return (new_dog);
}
