/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <msenecha@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:00:15 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/24 18:56:06 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		word_len(char *str, int i)
{
	int		len = 0;

	while (str[i] <= 32)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] && str[i] > 32)
	{
		len++;
		i++;
	}
	return (len);
}

int		count_words(char *str)
{
	int		i = 0;
	int		word = 0;

	while (str[i])
	{
		if (str[i] > 32 && str[i + 1] <= 32)
			word++;
		i++;
	}
	return (word);
}

char	**ft_cpy(char *str, char **split)
{
	int		i = 0;
	int		j = 0;
	int		k;

	while (str[i])
	{
		k = 0;
		if (str[i] == '\0')
		{
			split[j][k] = '\0';
			break ;
		}
		while (str[i] <= 32)
			i++;
		while (str[i] > 32)
			split[j][k++] = str[i++];
		split[j][k] = '\0';
		j++;
	}
	return (split);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	j = count_words(str);
	printf("word count : %d\n", j);
	res = malloc((j + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] <= 32)
			i++;
		while (str[i] > 32)
		{
			i++;
			k++;
		}
		printf("word len : %d\n", k);
		if (k == 0)
			break ;
		res[j] = malloc((k + 1) * sizeof(char));
		j++;
	}
	return (ft_cpy(str, res));
}

int		main(void)
{
	char	str[31] = "Please work you son of a bitch";
	char	**res;
	int	i = 0;

	res = ft_split(str);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
