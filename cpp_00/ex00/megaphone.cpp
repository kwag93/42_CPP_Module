#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				std::cout<<ft_toupper(argv[i][j]);
		}
		std::cout<<std::endl;
	}
	return 0;
}
