/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:26:25 by hmesrar           #+#    #+#             */
/*   Updated: 2022/07/27 18:57:10 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*_hex;

	i = 0;
	_hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (is_printable(str[i]) == 0)
		{
			ft_putchar('\\');
			ft_putchar(_hex[str[i] / 16]);
			ft_putchar(_hex[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
