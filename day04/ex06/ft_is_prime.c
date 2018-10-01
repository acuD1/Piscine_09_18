/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:32:00 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:18:00 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime < nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}
