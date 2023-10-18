/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:48:58 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 17:28:04 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	ft_count_words(char *str)
{
	int	i = 0;
	int	j = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && ((str[i + 1] >= 'a' && str[i + 1] <= 'z')
				|| (str[i + 1] >= 'A' && str[i + 1] <= 'Z')))
			j++;
		i++;
	}
	return (j);
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	camel_to_snake(char *str)
{
	int	i = 0;
	int	j;
	char	*res;

	j = ft_count_words(str);
	res = malloc((ft_strlen(str) + 1 + j) * sizeof(char));
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			res[j++] = '_';
			res[j++] = str[i++] + 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
		{
			res[j++] = '_';
			res[j++] = str[i++] + 32;
		}
		else
			res[j++] = str[i++];
	}
	res[j] = '\0';
	ft_putstr(res);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '\0')
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
