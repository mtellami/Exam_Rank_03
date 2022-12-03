/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:03:36 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/03 16:04:19 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *size)
{
	write(1, &c, 1);
	(*size)++;
}

void	ft_putstr(char *str, int *size)
{
	if (!str)
	{	
		ft_putstr("(null)", size);
		return ;
	}
	while (*str)
		ft_putchar(*str++, size);
}

void	ft_putnbr(int nbr, int *size)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", size);
	else if (nbr < 0)
	{
		ft_putchar('-', size);
		ft_putnbr(-nbr, size);
	}
	else if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48, size);
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, size);
		ft_putnbr(nbr % 10, size);
	}
}

void	ft_puthex(unsigned int i, int *size)
{
	char	*hex = "0123456789abcdef";
	if (i > 15)
	{
		ft_puthex(i / 16, size);
		ft_putchar(hex[i % 16], size);
	}
	else
		ft_putchar(hex[i % 16], size);
}
