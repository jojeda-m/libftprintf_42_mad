/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:01:44 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 13:30:43 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>

// Mandatory
int	ft_printf(const char *format, ...);
int	ft_parse(const char *format, va_list args, int *printed);
int	ft_pfputchar(char c);
int	ft_pfputstr(char *str);
int	ft_pfputnbr(int n);
int	ft_itohex(unsigned int n, int low_up);
int	ft_nbrlen(long n);
int	ft_unsignednbr(int n);
int	ft_pfpointer(void *ptr);

#endif
