#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to dog_t structure to free
 *
 * Description: This function safely frees the memory allocated for a dog
 * structure, including the name and owner strings, before freeing the
 * structure itself. It checks for NULL pointer to avoid errors.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
