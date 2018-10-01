/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:39:26 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/07 13:24:30 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "jack"

typedef struct		s_perso
{
	char			*name;
	float			life;
	int				age;
	char			*profession;
}					t_perso;

#endif
