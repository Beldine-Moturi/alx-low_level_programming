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
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	s = p;
	str = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			s[i] = str[i];
		}
	}
	else if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			s[i] = str[i];
		}
	}
	return (p);
}
