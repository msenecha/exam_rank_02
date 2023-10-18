/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:22:26 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 15:37:36 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	*search_and_replace(char *str, int a, int b)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (str);
}	

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[1][0] != '\0')
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
			ft_putstr(search_and_replace(argv[1], *argv[2], *argv[3]));
	}
	write(1, "\n", 1);
	return (0);
}
