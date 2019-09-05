
#include "guess.h"

t_nums *ft_create_list(int num)
{
	t_nums *new;
	new = (t_nums *)malloc(sizeof(t_nums));
	new->num = num;
	new->next = 0;
	return (new);
}

t_nums *ft_create_options()
{
	t_nums *ptr;
	t_nums *tmp;
	t_nums *current;
	ptr = ft_create_list(0);
	current = ptr;
	int i = 1;
	while (i < 10)
	{
		tmp = ft_create_list(i++);
		current->next = tmp;
		current = current->next;
	}
	return(ptr);
}

int	ft_remove_num(t_nums **ptr, int num)
{
	int i;
	t_nums *current;
	current = *ptr;
	t_nums *last;
	int val;
	i = 0;
	/* if (num == 0)
	{
		val = current->num;
		*ptr = current->next;
		free(current);
	} */
	
		while (i++ <= num)
		{
	
			last = current;
			current = current->next;
		}
		last->next = current->next;
		val = current->num;
		free(current);
	
	return (val);
}

void	ft_print_highscores(char *highscores, int difficulty)
{
	int fd;
	int i;
	char buf[1];
	int num;
	char *easy;
	char *intermediate;
	char *hard;
	int numbr[difficulty];
	t_nums *options = ft_create_options();

	i = 0;
	easy = (char *)malloc(1000);
	intermediate = (char *)malloc(1000);
	hard = (char *)malloc(1000);
	easy = ft_strcat(ft_strcpy(easy, highscores), "/EASY");
	intermediate = ft_strcat(ft_strcpy(intermediate, highscores), "/INTERMEDIATE");
	hard = ft_strcat(ft_strcpy(hard, highscores), "/HARD");
	printf("\nHighscores: \n\n");
	
	if ((fd = open(easy, O_CREAT, S_IRWXU, S_IRGRP, S_IRWXO)))
	{
		read(fd, buf, 1);
		printf("EASY: %s", buf);
	}
	else
		write(1, " -\n", 3);

	
	if ((fd = open(intermediate, O_CREAT, S_IRWXU, S_IRGRP, S_IRWXO)))
	{
		read(fd, buf, 1);
		printf("  |  INTERMEDIATE: %s  |  ", buf);
	}
	else
		write(1, " -\n", 3);

	
	if ((fd = open(hard, O_CREAT, S_IRWXU, S_IRGRP, S_IRWXO)))
	{
		
		read(fd, buf, 1);
		printf("HARD: %s\n", buf);
	}
	else
		write(1, " -\n", 3);

	while (i < difficulty)
	{
		num = rand() % 9-i;
		numbr[i] = ft_remove_num(&options, num);
		i++;
	}	
	while(i--)
		printf("%d", numbr[i]);
}

void	ft_start_game(int difficulty, char *player)
{
	int *numbers;
	char *buffer;
	buffer = (char *)malloc(1000);
	char *cwd = getcwd(buffer, 1001);
	char *highscores;
	highscores = (char *)malloc(1000);
	highscores = ft_strcat(cwd, "/highscores/");
	highscores = ft_strcat(highscores, player);
	DIR* dir = opendir(highscores);
	if (dir)
		printf("\nWelcome Back %s!\n", player);
	else
	{
		mkdir((const char*)highscores, 0777);
		printf("\nHello %s!\n", player);
	}
	ft_print_highscores(highscores, difficulty);


	numbers = (int *)malloc(difficulty * sizeof(int));
}


int main(int argc, char **argv)
{
	int difficulty;
	char *player;
   	time_t t;
   
   srand((unsigned) time(&t));

	if (argc < 3)
		printf("Please enter level of difficulty and player name!\n\n1 - EASY\n2 - INTERMEDIATE\n3 - HARD\n");
	else
	{
		player = argv[2];
		if(argv[1][0] == '1')
		{
			printf("\nNow playing on EASY\n");
			difficulty = 3;
		}
			
		else if(argv[1][0] == '2')
		{
			printf("\nNow playing on INTERMEDIATE\n");
			difficulty = 4;
		}
		else
		{
			printf("\nNow playing on HARD\n");
			difficulty = 5;
		}
	}
	ft_start_game(difficulty, player);
	return 0;
}
