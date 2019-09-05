#include <stdio.h>
char	*ft_join(char **tab, char *sep);

int main(int argc, char const *argv[])
{
	char *result;
	char strings[4][9] = {{"HELLO"},{"MY"},{"FRIEND"},0};

	result = ft_join(strings, " gello ");
	printf("%s\n",result);
	return (0);
}
