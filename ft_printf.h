#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"
# include <stdio.h>

char	*ft_convert_base(unsigned int number, int base);
char	*ft_hex_tolower(char *str);
int		ft_printf(const char *str, ...);
int		ft_istype(int c);
int		ft_print_width(int width, int minus);
int		ft_print_char(char c, int width);
int		ft_print_hex(unsigned int integer, int width, int case_type);
int		ft_print_integer(int integer, int width);
int		ft_print_unsigned_integer(int unsigned integer, int width);
int		ft_treatment_type(int c, va_list args, int width);
int		ft_print_string(char *str, int width);

#endif