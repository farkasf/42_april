#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	int	sum;
	int	ace;
	char	card;

	i = 0;
	sum = 0;
	ace = 0;
	while (av[1][i])
	{
		card = av[1][i];
		if (card >= '2' && card <= '9')
			sum += card - '0';
		else if (card == 'T' || card == 'J' || card == 'D' || card == 'K')
			sum += 10;
		else if (card == 'A')
			ace += 1;
		i++;
	}
	while (ace > 0)
	{
		if (sum <= 10)
			sum += 11;
		else
			sum += 1;
		ace--;
	}
	if (sum == 21 && av[1][0] == 'A')
		printf("Blackjack!\n");
	else
		printf("%d\n", sum);
	return (0);
}
