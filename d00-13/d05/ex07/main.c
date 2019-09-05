#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char const *argv[])
{
	char str1[20] = "helLO WorlD";
   char str2[20] = 	"hello WORLD";
   int result;

   //This will compare the first 3 characters
   result = ft_strncmp(str1, str2, 2);

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

	return 0;
}
