#include "includes/libwtf.h"

void	wtf_putcolor(char *str, int color)
{
	ft_putstr("\033[");
	ft_putnbr(color);
	ft_putstr("m");
	ft_putstr(str);
	ft_putstr("\033[0m");
}
void	wtf_putcolorendl(char *str, int color)
{
	wtf_putcolor(str, color);
	ft_putchar('\n');
}
