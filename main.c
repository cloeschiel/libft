#include <stdlib.h>

void *explosive_malloc(size_t size)
{
	static int i = 0;
	if (i++ < 5)
		return malloc(size);
	return (0);
}

#include "libft.h"

int main(void)
{
	char **buffer = ft_split("test et sdds sdfsd sdf sdf sdf sdf sdf sdf sdf", ' ');
	(void) 0;
	return (0);
}