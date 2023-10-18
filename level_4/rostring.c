/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <msenecha@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:57:18 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/25 15:42:02 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

 void	rostring(char *str)
 {
	int		i = 0;
	int		word;
	int		j;
	char	*first;

	while (str[i] && str[i] <= 32)
		i++;
	word = i;
	while (str[i] && str[i] > 32)
		i++;
	first = malloc((i - word) * sizeof(char));
	j = 0;
	while (word < i)
		first[j++] = str[word++];
	first[j] = '\0';
	if (str[i] <= 32)
		i++;
	while (str[i])
	{
		if ((str[i] <= 32) && str[i + 1] <= 32)
			i++;
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	if (str[i - 1] > 32)
		ft_putchar(' ');
	ft_putstr(first);
 }

int		main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
