/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 23:04:05 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 23:10:59 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	c6 = 'a';

	printf("Resultados printf original\n");
	printf("Formateador porcentaje\n");
	printf("% %% %%% %%%% %%%%% %%%%%%\n");
	printf("Formateador mixto porcentaje\n");
	printf("%c %%c %%%c %%%%c %%%%%c %%%%%%c %%%%%%%c %%%%%%%%c\n\n", c6, c6, c6, c6, c6, c6, c6, c6);
	ft_printf("Resultados ft_printf\n");
	ft_printf("Formateador porcentaje\n");
	ft_printf("% %% %%% %%%% %%%%% %%%%%%\n");
	ft_printf("Formateador mixto porcentaje\n");
	ft_printf("%c %%c %%%c %%%%c %%%%%c %%%%%%c %%%%%%%c %%%%%%%%c\n", c6, c6, c6, c6, c6, c6, c6, c6);
	return (0);
}
