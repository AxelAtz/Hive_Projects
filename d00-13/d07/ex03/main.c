#include <stdio.h>

char	*ft_concat_params(int argc, const char **argv);

int main(int argc, char const *argv[])
{
	printf("\nString: \n%s", ft_concat_params(argc, argv));
	return 0;
}
