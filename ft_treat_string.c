/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:04:46 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/06 22:02:04 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_string(char *str, t_flags flags)
{
	int counter;

	counter = 0;
	if (!str)
		str = "(null)";
	counter += ft_putstr(str, ft_strlen(str));
	return (counter);
}
