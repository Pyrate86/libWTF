/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtf_marseillais.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 21:26:47 by ghilbert          #+#    #+#             */
/*   Updated: 2015/05/08 21:40:49 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libwtf.h"

static char	*replace(char *str, char c, char *rpl)
{
	char	*result;
	char	**split;
	int		i;


	split = ft_strsplit(str, c);
	i = 1;
	result = split[0];
	while (split[i])
	{
		result = ft_strjoin(result, rpl);
		result = ft_strjoin(result, split[i]);
		i++;
	}
	return (result);
}

void		wtf_marseillais(char *str)
{
	char	*result;

	result = replace(str, ',', ", putain,");
	result = replace(result, '.', " con !");

	ft_putstr(result);
}