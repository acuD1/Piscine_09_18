/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:42:57 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:22:45 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

void	ft_putnbr_base(int nbr, char *base_to, char **res_con, int i)
{
	int 	base_l;
	long	long_nbr;

	long_nbr = nbr;
	base_l = ft_check_n_lenght(base_to);
	if (base_l > 1)
	{
		if (long_nbr >= base_l)
		{
			ft_putnbr_base(long_nbr / base_l, base_to, res_con, i + 1);
			ft_putnbr_base(long_nbr % base_l, base_to, res_con, i);
		}
		else if (long_nbr < 0)
		{
			res_con[0][0] = ('-');
			ft_putnbr_base(-long_nbr, base_to, res_con, 1);
		}
		else
			res_con[0][i] = base_to[long_nbr];
	}
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nbr_b10;
	char *tab;
	int tab_l;
	char *res_con;
	int i;

	tab_l = 0;
	nbr_b10 = ft_atoi_base(nbr, base_from);
	if (!(tab = malloc(sizeof(char) * (32 + 1))))
		return (0);
	ft_putnbr_base(nbr_b10, base_to, &tab, 0);
	while(tab[tab_l] != '\0')
		tab_l++;
	if (!(res_con = malloc(sizeof(char) * (tab_l + 1))))
		return (0);
	i = 0;
	while (tab_l > 0)
	{
		res_con[i] = tab[tab_l - 1];
		tab_l--;
		i++;
	}
	free(tab);
	return (res_con);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
