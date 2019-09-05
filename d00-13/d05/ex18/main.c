#include <stdio.h>

unsigned int ft_strlcat(char* dest, char* src, unsigned int size);
int main(int argc, char const *argv[])
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);
	printf("t%d-", ft_strlcat(test, "asdf", 10));
	printf("%s\n", test);
	printf("t%d-", ft_strlcat(test, "asdf", 5));
	printf("%s\n", test);
return (0);
}