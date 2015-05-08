/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libwtf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 17:00:59 by ghilbert          #+#    #+#             */
/*   Updated: 2015/05/08 21:27:37 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBWTF_H
# define LIBWTF_H

# include "libft.h"

# define UNCOLOR "\033[0m"

# define BLACK "\033[30m"
# define BG_BLACK "\033[40m"
# define RED "\033[31m"
# define BG_RED "\033[41m"
# define GREEN "\033[32m"
# define BG_GREEN "\033[42m"
# define YELLOW "\033[33m"
# define BG_YELLOW "\033[43m"
# define BLUE "\033[34m"
# define BG_BLUE "\033[44m"
# define MAGENTA "\033[35m"
# define BG_MAGENTA "\033[45m"
# define CYAN "\033[36m"
# define BG_CYAN "\033[46m"
# define WHITE "\033[37m"
# define BG_WHITE "\033[47m"

# define DBL_RED "\033[41;35m"
# define DBL_YELLOW "\033[43;36m"
# define DBL_GREEN "\033[42;34m"
# define DBL_BLUE "\033[44;32m"
# define DBL_CYAN "\033[46;33m"
# define DBL_MAGENTA "\033[45;31m"

void 	wtf_rainbow(char *str);
void	wtf_rainbow_bg(char *str);
void	wtf_dbl_rainbow(char *str);

void	wtf_putcolor(char *str, int color);
void	wtf_putcolorendl(char *str, int color);

void	wtf_ikea(char *str);

void	wtf_marseillais(char *str);

#endif
