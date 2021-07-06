#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
# include "./libft/libft.h"

typedef struct	s_flags
{
	int		star;
	int		width;
	int		zero;
	int		minus;
	int		type;
	int		dot;
}				t_flags;

int	ft_printf(const char *str, ...);
int	ft_istype(int c);
int	ft_treat_width(int width, int minus, int zero);
int	ft_treat_char(char c, t_flags flags);
int	ft_treatment_type(int c, t_flags flags, va_list args);

#endif