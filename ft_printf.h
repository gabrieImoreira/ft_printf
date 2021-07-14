#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_flags
{
	int		star;
	int		width;
	int		zero;
	int		minus;
	int		type;
	int		dot;
}				t_flags;

char	*ft_convert_base(unsigned int number, int base);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_putstr(char *str, int precision);
int		ft_istype(int c);
int		ft_print_width(int width, int minus, int zero);
int		ft_print_string(char *str, t_flags flags);
int		ft_dot_flag(char *str, int i, t_flags *flags, va_list args);
int		ft_print_char(char c, t_flags flags);
int		ft_print_integer(int i, t_flags flags);
int		ft_print_hex(unsigned int integer, t_flags flags, int case_type);
int		ft_print_unsigned_integer(unsigned int integer, t_flags flags);
int		ft_treatment_type(int c, t_flags flags, va_list args);
t_flags	ft_digit_flag(char c, t_flags flags);
t_flags	ft_star_flag(va_list args, t_flags flags);
t_flags	ft_minus_flag(va_list args, t_flags flags);

#endif