#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_istype(int c);
int		ft_print_width(int width, int minus);
int		ft_print_char(char c, int width);
int		ft_print_integer(int integer, int width);
int		ft_treatment_type(int c, va_list args, int width);
int		ft_print_string(char *str, int width);

#endif