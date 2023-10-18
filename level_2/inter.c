/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:25:39 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/03 15:44:42 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str, int len, char c)
{
	int	i = 0;

	while (str[i] && i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *word, char *str)
{
	int	i = 0;
	int	j;

	while (word[i])
	{
		j = 0;
		while (str[j])
		{
			if (word[i] == str[j] && ft_check(word, i, word[i]) == 0)
			{
				ft_putchar(word[i]);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
