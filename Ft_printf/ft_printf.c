/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:24:50 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/03 15:58:16 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list ap, char type, int *size)
{
	if (type == 's')
		ft_putstr(va_arg(ap, char *), size);
	else if (type == 'd')
		ft_putnbr(va_arg(ap, int), size);
	else if (type == 'x')
		ft_puthex(va_arg(ap, unsigned int), size);
	else
		ft_putchar(type, size);
}

int	ft_printf(char *str, ...)
{
	va_list	ap;
	int		size;

	va_start(ap, str);
	size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(ap, *str, &size);
		}
		else
			ft_putchar(*str, &size);
		str++;
	}
	va_end(ap);
	return (size);
}
