#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(int argc, char const *argv[])
{
	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
    // comparing strings str1 and str2
    result = ft_strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
    // comparing strings str1 and str3
    result = ft_strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strcmp("Hello", "yello");
    printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strcmp("Nice", "Nic");
    printf("strcmp(str1, str3) = %d\n", result);
	result = ft_strcmp("How", "dow");
    printf("strcmp(str1, str3) = %d\n", result);

	return 0;
}
