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

#endif