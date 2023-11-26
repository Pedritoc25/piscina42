//Condiciones teniendo el valor

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
if (nb > 9)
{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
else
	ft_conditions(nb);
}

void ft_conditions(unsigned nb)
{
	if (nb >= 0 && nb <= 19)
		write(1, "search and print number0-19\n", 28);
	else if (nb >= 20 && nb <= 90)
	{	
		//write (1, "search and write (nb - (nb %% 10))\n", 32);
		if ((nb % 10) != 0)
			ft_conditions(nb % 10);
	}
	else if (nb >= 100)
	{
		ft_putnbr(nb);
	}
}

void ft_args_error(int argc, unsigned nb)
{	
	if (argc < 2 || argc > 3 || nb < 0) //If has no arguments or more than two or the number is negative or a double, prints an error 
		write (1, "Error\n", 5);
	else if (argc == 2) //If has one argument, that is the number
		ft_conditions(nb);
	else //If has two arguments, the first one is the dicc and the second one is the number
	{
		//   <--   function for diccionary str[1]
		ft_conditions(nb); //  <--  number str[2] 
	}
}

int main()
{
	unsigned int nb = 10;
	int argc = 1;
	ft_args_error(argc, nb);
}