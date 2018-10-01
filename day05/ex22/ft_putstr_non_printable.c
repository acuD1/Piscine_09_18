/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:29:01 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:21:22 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_hex(int nbr)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[nbr / 16]);
	ft_putchar(base[nbr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
