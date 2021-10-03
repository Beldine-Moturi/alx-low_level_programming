#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: size in bytes of the allocated space for ptr
 *@new_size: new size in bytes if the new memory block
 *
 *Return: pointer to the new allocated memory
 *        or NULL if function fails
 *        NULL if new_size = 0
 *        ptr if nw_size == old_size
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *s, *str;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = ptr;
	p = malloc(sizeof(*str) * new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = p;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = *str++;
	}
	free(ptr);
	return (p);
}
