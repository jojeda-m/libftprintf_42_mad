/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:06:25 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 06:45:29 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	c;
	char	*str;
	int		n;
	int		hex;
	int		unsneg;
	int		unspos;

	c = '\0';
	str = NULL;
	n = 0;
	hex = 0x1a3;
	unsneg = -025;
	unspos = 7;

	ft_printf("Resultados ft_printf\n");
	ft_printf("Char: %c\nString: %s\nNumber: %d\nHex_Up: %X\nHex_low: %x\nHextoi: %i\nUnsigned_neg: %u\nUnsigned_pos: %u\n\n", c, str, n, hex, hex, hex, unsneg, unspos);
	printf("Resultados printf Original\n");
	printf("Char: %c\nString: %s\nNumber: %d\nHex_Up: %X\nHex_low: %x\nHextoi: %i\nUnsigned_neg: %u\nUnsigned_pos: %u\n", c, str, n, hex, hex, hex, unsneg, unspos);
	return (0);
}
