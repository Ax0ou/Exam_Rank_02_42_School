#include <unistd.h>

int	main(int ac, char **av)
{
	int		seen[256];
	int		i;
	unsigned char	c;

	i = 0;
	while (i < 256)
		seen[i++] = 0;
	if (ac == 3)
	{
		while (*av[1])
		{
			c = (unsigned char)*av[1]++;
			if (!seen[c])
			{
				seen[c] = 1;
				write(1, &c, 1);
			}
		}
		while (*av[2])
		{
			c = (unsigned char)*av[2]++;
			if (!seen[c])
			{
				seen[c] = 1;
				write(1, &c, 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
