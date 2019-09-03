#include "bsq_head.h"

char	**array_init(int height, int width, char *buf)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	arr = (char **)malloc(height * sizeof(char*));
	if (!arr)
		return (0);
	while (i < height)
		arr[i++] = (char*)malloc(width * sizeof(char));
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j++] = buf[k++ + i];
		}
		j = 0;
		i++;
	}
	return (arr);
}

char	*ft_memcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (size != 0)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	return (dest);
}

char	*ft_realloc(char *src, unsigned int size)
{
	char			*newptr;
	unsigned int current_size = size/2;
	if (!src)
	{
		if (!(newptr = (char*)malloc(size * sizeof(char)+1)))
			return (0);
		return (newptr);
	}
	else
	{
		if (!(newptr = (char*)malloc(size * sizeof(char)+1)))
			return (0);
		newptr = ft_memcpy(newptr, src, current_size);
		free(src);
		return (newptr);
	}
}

void	ft_set_value_zero(int *n1, int *n2, int *n3, int *n4)
{
	*n1 = 0;
	*n2 = 0;
	*n3 = 0;
	*n4 = 0;
}
