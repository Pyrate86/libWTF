/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtf_rainbow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 03:57:59 by ghilbert          #+#    #+#             */
/*   Updated: 2014/11/23 16:48:52 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libwtf.h"

int		*calcsize(char *str, int *tab)
{
	int msize;
	int len;

	len = ft_strlen(str);
	tab[0] = len / 6;
	if (len % 6 == 1 || len % 6 == 2 || len % 6 == 5)
		tab[0] += 1;
	msize = len / 3;
	if (msize % 2 == 1)
		msize += 1;
	msize /= 2;
	tab[1] = msize;
	tab[2] = msize;
	tab[3] = msize;
	tab[4] = msize;
	tab[5] = len - tab[0] - (msize * 4);
	if (tab[5] == 0)
	{
		tab[5] = 1;
		tab[4] -= 1;
	}
	return (tab);
}

void	wtf_painttherainbow(char **colors, char *str, int *sizes)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 6)
	{
		ft_putstr(colors[j]);
		ft_putstr(ft_strsub(str, i, sizes[j]));
		i += sizes[j];
		j++;
	}
	ft_putstr(UNCOLOR);
}

void	wtf_rainbow(char *str)
{
	int		*sizes;
	char	*colors[6];
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	colors[0] = RED;
	colors[1] = YELLOW;
	colors[2] = GREEN;
	colors[3] = BLUE;
	colors[4] = CYAN;
	colors[5] = MAGENTA;
	sizes = ft_memalloc(sizeof(int) * 6);
	sizes = calcsize(str, sizes);
	if (len < 7)
	{
		while (i < 6)
			sizes[i++] = 0;
		i = 0;
		while (i < len)
			sizes[i++] = 1;
	}
	wtf_painttherainbow(colors, str, sizes);
}

void	wtf_rainbow_bg(char *str)
{
	int		*sizes;
	char	*colors[6];
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	colors[0] = BG_RED;
	colors[1] = BG_YELLOW;
	colors[2] = BG_GREEN;
	colors[3] = BG_BLUE;
	colors[4] = BG_CYAN;
	colors[5] = BG_MAGENTA;
	sizes = ft_memalloc(sizeof(int) * 6);
	sizes = calcsize(str, sizes);
	if (len < 7)
	{
		while (i < 6)
			sizes[i++] = 0;
		i = 0;
		while (i < len)
			sizes[i++] = 1;
	}
	wtf_painttherainbow(colors, str, sizes);
}

void	wtf_dbl_rainbow(char *str)
{
	int		*sizes;
	char	*colors[6];
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	colors[0] = DBL_RED;
	colors[1] = DBL_YELLOW;
	colors[2] = DBL_GREEN;
	colors[3] = DBL_BLUE;
	colors[4] = DBL_CYAN;
	colors[5] = DBL_MAGENTA;
	sizes = ft_memalloc(sizeof(int) * 6);
	sizes = calcsize(str, sizes);
	if (len < 7)
	{
		while (i < 6)
			sizes[i++] = 0;
		i = 0;
		while (i < len)
			sizes[i++] = 1;
	}
	wtf_painttherainbow(colors, str, sizes);
}
