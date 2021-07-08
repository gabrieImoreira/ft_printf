/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:04:46 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/08 00:22:56 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_string(char *str, t_flags flags)
{
	int counter;
	
	counter = 0;
	if (!str)
		str = "(null)";
	if(flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
	{
		flags.dot = ft_strlen(str);
		counter += ft_putstr(str, flags.dot);
	}
	else
		counter += ft_putstr(str, ft_strlen(str));
	return (counter);
}
