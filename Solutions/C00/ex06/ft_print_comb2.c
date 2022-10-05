/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:43:31 by hmesrar           #+#    #+#             */
/*   Updated: 2022/07/23 19:58:16 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			put_char(i / 10 + '0');
			put_char(i % 10 + '0');
			put_char(' ');
			put_char(j / 10 + '0');
			put_char(j % 10 + '0');
			if (i < 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
