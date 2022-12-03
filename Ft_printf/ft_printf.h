/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:25:02 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/03 15:57:11 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char *str, ...);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *str, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_puthex(unsigned int i, int *size);

#endif