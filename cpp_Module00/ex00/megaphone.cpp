#include <iostream>

void	print_upper_str(char *str)
{
	int	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout << str[i];
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i = 0;
		while (av[++i])
			print_upper_str(av[i]);
	}
	std::cout << std::endl;
	return (0);
}
