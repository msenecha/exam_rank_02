/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenecha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:30:44 by msenecha          #+#    #+#             */
/*   Updated: 2023/05/02 17:47:36 by msenecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(char *str1, char *op, char *str2)
{
	int	res;
	int	nb1;
	int	nb2;

	nb1 = atoi(str1);
	nb2 = atoi(str2);
	if (op[0] == '+')
		res = nb1 + nb2;
	else if (op[0] == '-')
		res = nb1 - nb2;
	else if (op[0] == '*')
		res = nb1 * nb2;
	else if (op[0] == '/')
		res = nb1 / nb2;
	else if (op[0] == '%')
		res = nb1 % nb2;
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d\n", do_op(argv[1], argv[2], argv[3]));
	else
		write(1, "\n", 1);
	return (0);
}
