/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:40:40 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/04 17:16:00 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_bis(char *s1, char *s2, char c, int len)
{
	int	i = 0;

	while (i < len)
	{
		if (s1[i] == c || s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i])
	{
		if (ft_check_bis(s1, s2, s1[i], i) == 0)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (ft_check_bis(s1, s2, s2[i], i) == 0)
			write(1, &s2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
