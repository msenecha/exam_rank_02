/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:06:19 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:30 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i = 0;
	
	while (str[i])
		i++;
	return (i);
}

int	count_underscores(char *str)
{
	int	i = 0;

	while (*str)
	{
		if (*str == '_')
			i++;
		str++;
	}
	return (i);
}

void	snake_to_camel(char *str)
{
	int	i = 0;
	int	j;
	char	*res;

	j = count_underscores(str);
	res = malloc((ft_strlen(str) - j + 1) * sizeof(char));
	j = 0;
	while (str[i] && str[i] >= 'a' && str[i] <= 'z')
		res[j++] = str[i++];
	while (str[i])
	{
		if (str[i] == '_')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == '_')
			res[j++] = str[i++] - 32;
		else
			res[j++] = str[i++];
	}
	ft_putstr(res);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}
