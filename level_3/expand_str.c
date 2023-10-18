/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:21:38 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/10 13:44:24 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= 1 && str[i] <= 32)
		i++;
	while (str[i])
	{
		if (str[i] <= 32 && str[i + 1] > 32)
		{
			write(1, "   ", 3);
			i++;
		}
		else if (str[i] <= 32 && str[i + 1] <= 32)
			i++;
		else if (str[i] >= 1 && str[i] <= 32 && str[i + 1] == '\0')
			break ;
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
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
