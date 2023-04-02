#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_calc_max(char *str)
{
	int	max = 0;
	int	word = 0;
	int	i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (word > max)
				max = word;
			word = 0;
		}
		else
			word++;
		i++;
	}
	if (word > max)
		max = word;
	return (max);
}

int	main(int ac, char **av)
{
	int	max;
	int	wdlen;
	int	i = 0;
	char		*str;
	char		*word;

	if (ac == 2)
	{
		str = strdup(av[1]);
		max = ft_calc_max(str);
		while (i < (max + 4))
		{
			printf("*");
			i++;
		}
		printf("\n");
		word = strtok(str, " ");
		while (word)
		{
			wdlen = strlen(word);
			printf("* %s", word);
			i = 0;
			while (i < (max - wdlen))
			{
				printf(" ");
				i++;
			}
			printf(" *\n");
			word = strtok(NULL, " ");
		}
		i = 0;
		while (i < (max + 4))
		{
			printf("*");
			i++;
		}
		printf("\n");
		free(str);
	}
	return (0);
}
