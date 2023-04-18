#include "dog.h"
/**
*free_dog - Frees the dog
*@d: dog to be freed
*
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d);
	free(d->owner);
}
