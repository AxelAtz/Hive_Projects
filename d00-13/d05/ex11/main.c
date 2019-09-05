#include <stdio.h>

int	ft_str_is_alpha(char* str);

int main(int argc, char const *argv[])
{
	
	char str[] = "2ada";
	printf("%d", ft_str_is_alpha(str));
	char str2[] = "";
	printf("%d", ft_str_is_alpha(str2));
	char str3[] = "adawdsDd";
	printf("%d", ft_str_is_alpha(str3));
	return 0;
}