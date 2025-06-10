#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog_t struct, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog = malloc(sizeof(dog_t));
    if (dog == NULL)
    {
        return NULL;  /* Memory allocation failed */
    }

    dog->name = strdup(name);
    if (dog->name == NULL)
    {
        free(dog);  /* Free previously allocated memory */
        return NULL;  /* Memory allocation failed */
    }

    dog->age = age;

    dog->owner = strdup(owner);
    if (dog->owner == NULL)
    {
        free(dog->name);  /* Free name if owner allocation fails */
        free(dog);  /* Free the dog struct */
        return NULL;  /* Memory allocation failed */
    }

    return dog;
}
