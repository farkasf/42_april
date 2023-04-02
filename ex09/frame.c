#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int	i = 1;
		int	j = 0;
		int	len = 0;
		int	max = 0;
		char	str[1000] = "";
		char *word;

		while (i < ac)
		{
			strcat(str, av[i]);
			if (i != ac - 1)
				strcat(str, " ");
			i++;
		}

		word = strtok(str, " ");
		while (word)
		{
			len = strlen(word);
			if (len > max)
				max = len;
			word = strtok(0, " ");
		}
	}
}
