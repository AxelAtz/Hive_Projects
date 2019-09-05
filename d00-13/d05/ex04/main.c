#include <stdio.h>

char* ft_strncpy(char* dest, char* src, unsigned int n);

int main(int argc, char const *argv[])
{
	char test1[256] = "asdf";
	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test1, "qwerty", 4));
	printf("%s\n", ft_strncpy(test1, "z", 1));
	return 0;
}
