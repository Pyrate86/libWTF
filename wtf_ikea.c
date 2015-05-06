/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtf_ikea.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/06 16:52:17 by ghilbert          #+#    #+#             */
/*   Updated: 2015/05/06 18:29:04 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libwtf.h"

void	print_ikea(char **ikea)
{
	int i;

	i = 32;
	while (i < 127)
	{
		if (ikea[i][1] > 0)
		{
			wtf_putcolor("[", 32);
			ft_putchar(ikea[i][0]);
			ft_putstr(" x ");
			ft_putnbr(ikea[i][1]);
			wtf_putcolor("]", 32);
			ft_putstr("\t");
		}
		i++;
	}
	ft_putendl("");
}

void	wtf_ikea(char *str)
{
	int		i;
	char	**ikea;

	ikea = (char **)malloc(sizeof(char *) * 128);
	if (!ikea)
		return ;
	i = 32;
	while (i < 127)
	{
		ikea[i] = (char *)malloc(sizeof(char) * 3);
		if (!ikea[i])
			return ;
		ikea[i][0] = i;
		i++;
	}
	i = 0;
	while (str[i])
	{
		ikea[(int)str[i]][1] += 1;
		i++;
	}
	print_ikea(ikea);
}
