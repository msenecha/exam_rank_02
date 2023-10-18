/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:20:10 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 19:28:49 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	i--;
	while (str[i] == 32 || str[i] == 9)
		i--;
	while (str[i] != 32 && str[i] != 9)
		i--;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9)
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
