/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:26:58 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:35:11 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match2(char *s1, char *s2, int res)
{
	if (!*s1 && !*s2)
		return (res + 1);
	if (!*s1)
		return (match2(s1, s2 + 1, res));
	if (*s1 == *s2)
		return (match2(s1 + 1, s2 + 1, res));
	if (*s2 == '*')
		return (res = match2(s1, s2 + 1, res) + match2(s1 + 1, s2, res));
	return (0);
}

int		nmatch(char *s1, char *s2)
{
	int		res;

	res = match2(s1, s2, 0);
	return (res);
}
