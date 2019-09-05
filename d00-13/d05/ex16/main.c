#include <stdio.h>

char* ft_strcat(char* dest, char* src);

int main(int argc, char const *argv[])
{
	char test[256] = "dest";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test, ""));
	printf("%s\n", ft_strcat(test, "zxcv"));
	return 0;
}
