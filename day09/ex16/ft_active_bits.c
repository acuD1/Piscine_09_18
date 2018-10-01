/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:17:00 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/07 13:17:17 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int	count;

	count = 0;
	if (value >= 0)
	{
		while (value > 0)
		{
			if ((value & 1) == 1)
				count++;
			value >>= 1;
		}
		return (count);
	}
	else
	{
		value = 4294967296 - value;
		while (value > 0)
		{
			if ((value & 1) == 1)
				count++;
			value >>= 1;
		}
		return (count);
	}
}
