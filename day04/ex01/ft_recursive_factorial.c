/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:06:21 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/01 14:28:39 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0 || i >= 13)
		return (0);
	if (i == 0 || i == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
