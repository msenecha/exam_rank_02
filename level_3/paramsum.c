/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:39:20 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/11 14:01:04 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	while (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	ft_putchar(n + '0');
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 1)
		return (write(1, "0", 1));
	while (argv[i])
		i++;
	ft_putnbr(i - 1);
	return (0);
}
