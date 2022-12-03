/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:12:59 by mtellami          #+#    #+#             */
/*   Updated: 2022/12/04 00:53:17 by mtellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

char	*get_next_line(int fd);
int		ft_strchr(char *str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2); 

#endif