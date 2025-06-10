#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

char *_strdup(const char *str)
{
    if (str == NULL)
        return NULL;

    char *copy;
    size_t len = 0;
    while (str[len] != '\0')
        len++;

    copy = malloc(len + 1);
    if (copy == NULL)
        return NULL;

    for (size_t i = 0; i <= len; i++)
        copy[i] = str[i];

    return copy;
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL)
        return NULL;

    d->name = _strdup(name);
    if (d->name == NULL)
    {
        free(d);
        return NULL;
    }

    d->owner = _strdup(owner);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return NULL;
    }

    d->age = age;
    return d;
}

int main(void)
{
    dog_t *my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (my_dog == NULL)
        return 1;

    printf("My name is %s, I am %.2f, and my owner is %s\n",
           my_dog->name, my_dog->age, my_dog->owner);

    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return 0;
}
