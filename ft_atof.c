/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 15:46:06 by paim              #+#    #+#             */
/*   Updated: 2016/10/08 17:39:12 by paim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

double		ft_atof(char *str)// On envoie la chaine entiere, je fais le tri dans la 1ere boucle
{
	int		i;
	int		i2;
	double	n;
	double	dbl;

	i = 0;
	i2 = 1;
	while ((str[i] < 48 && str[i] > 57) || str [i] != 46)
		i++;
	while (str[i] != 46)
	{
		dbl = ft_atoi(str);
		i++;
	}
	i++;
	while (str[i] > 48 && str[i] < 57)
	{
		n = (str[i] - 48) / pow(10, i2);
		dbl = dbl + n;
		i2++;
		i++;
	}
	return (dbl);
}
