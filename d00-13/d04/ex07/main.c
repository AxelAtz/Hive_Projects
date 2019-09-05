#include <stdio.h>
int find_next_prime(int nb);

int main(int argc, char const *argv[])
{
	int i;
	i = 9;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 1;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 2;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 5;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 7;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 9;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 11;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 13;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 15;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 1787;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 2357;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	i = 2147483647;
	printf("\n %d is %d a prime", i, find_next_prime(i));
	return 0;
}
