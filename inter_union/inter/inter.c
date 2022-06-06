#include <unistd.h>
#include <stdio.h>

void	ft_inter(char *s1, char *s2)
{
	char check[255];
	int i = 0;
	int j =  0;

	while (i < 255)
	{
		check[i] = '0';
		i++;
	}
	i = 0;

	while (s2[i])
	{
		while (j < 255)
		{
			if (s2[i] == (char) j)
			{
				check[j] = '1';
			}
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	//j = 0;
	while (s1[i])
	{
		while (j < 255)
		{
			if (s1[i] == (char) j)
			{
				if (check[j] == '1')
				{
					write(1, &s1[i], 1);
					check[j] = '2';
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1,"\n", 1);
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	return (0);
}
