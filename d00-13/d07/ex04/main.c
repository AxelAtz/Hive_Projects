char** ft_split_whitespaces(char* str);

int main(int argc, char const *argv[])
{
	char** res;
	for (res = ft_split_whitespaces("Kukka"); *res != 0; res++)
	printf("'%s',", *res);
	printf("\n");
	for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
	printf("'%s',", *res);
	printf("\n");
	for (res = ft_split_whitespaces("   \t\nlol hi    \t\n"); *res != 0; res++)
	printf("'%s',", *res);
	return (0);
}