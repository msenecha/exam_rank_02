/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <msenecha@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:58:03 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/24 19:33:58 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_wstr(char *str)
{
	int		i = 0;
	int		start;
	int		end;

	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		while (str[i] <= 32)
			i--;
		end = i;
		while (str[i] > 32)
			i--;
		start = i + 1;
		while (str[start] != str[end + 1])
		{
			ft_putchar(str[start]);
			start++;
		}
		i--;
		if (i > 0)
			ft_putchar(' ');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
