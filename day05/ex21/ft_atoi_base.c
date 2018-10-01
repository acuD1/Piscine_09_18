/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:28:42 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:21:10 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_n_lenght(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (str[j] == str[i])
				return (0);
			j--;
		}
		i++;
	}
	return (i);
}

int		ft_check_in_b(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int	nb;
	int neg;
	int base_l;

	i = 0;
	nb = 0;
	neg = 1;
	base_l = ft_check_n_lenght(base);
	if (base_l <= 1)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		neg *= (str[i++] == '-' ? -1 : 1);
	while ((ft_check_in_b(base, str[i]) != -1))
	{
		nb *= base_l;
		nb += ft_check_in_b(base, str[i]);
		i++;
	}
	if (!str[i] || str[i] == '-' || str[i] == '+')
		return (neg * nb);
	else
		return (0);
}
