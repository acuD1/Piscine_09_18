/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:51:41 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:24:03 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((j < i && j > k) || (j < k && j > i))
		return (j);
	else if ((k < i && k > j) || (k < j && k > i))
		return (k);
	else if ((i < j && i > k) || (i < k && i > j))
		return (i);
	else
		return (j);
}
