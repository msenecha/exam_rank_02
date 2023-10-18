/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:25:47 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 16:17:46 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n = 0;

	while (*str)
	{
		n = n * 10;
		n = n + *str - '0';
		str++;
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{	
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	tab_mult(char *str)
{
	int	nb = ft_atoi(str);
	int	i = 1;
	int	res;

	if (nb >= 238609294)
		return ;
	while (i <= 9)
	{
		res = nb * i;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
