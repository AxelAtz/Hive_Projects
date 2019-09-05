#include <stdio.h>

char* ft_strcapitalize(char* str);

int main()
{
	
	char str[] = "\nsdf qWeRtY ZXCV 100TIS\n";
	printf("%s", ft_strcapitalize(str));
	char str2[] = "  sbmrdniqtsmrdumfbaxrmysiuqpcwvwqvsfg\n";
	printf("%s", ft_strcapitalize(str2));
	char str3[] = "   salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str3));
	return 0;
}
