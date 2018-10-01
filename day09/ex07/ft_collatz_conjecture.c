/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:33:31 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/07 11:37:37 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int n;

	n = 0;
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		n = ft_collatz_conjecture(base / 2);
	else
		n = ft_collatz_conjecture(3 * (base + 1));
	return (n + 1);
}
