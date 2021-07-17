/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 22:52:23 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 02:37:50 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, int width)
{
	int	counter;
	
	counter = 1;
	counter += ft_print_width(width, 1);
	ft_putchar(c);
	return (counter);
}

int	ft_print_string(char *str, int width)
{
	int	counter;

	counter = ft_strlen(str);
	if (!str)
		return (write(1, "(null)", 6), 6);
	counter += ft_print_width(width, counter);
	ft_putstr_fd(str, 1);
	return (counter);
}