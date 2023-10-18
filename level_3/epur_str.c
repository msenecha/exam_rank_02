/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:12:23 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/10 13:20:02 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int	i = 0;

	while (str[i] && str[i] >= 1 && str[i] <= 32)
		i++;
	while (str[i])
	{
		if (str[i] <= 32 && str[i + 1] <= 32)
			i++;
		else if (str[i] <= 32 && str[i + 1] > 32)
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
