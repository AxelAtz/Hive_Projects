#include <stdio.h>

char* ft_strcpy(char* dest, char* src);

int main(int argc, char const *argv[])
{
	char test1[256] = "asdf";
	printf("%s", ft_strcpy(test1, "qwerty\n"));
	printf("%s", ft_strcpy(test1, ""));
	printf("%s", ft_strcpy(test1, "hell0\n"));
	return 0;
}
