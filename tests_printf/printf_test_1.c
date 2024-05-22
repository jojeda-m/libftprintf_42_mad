/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinf_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:06:25 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/05/21 22:50:19 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	c1 = 00;
	char	c2 = '\0';
	char	c3 = 9;
	char	c4 = 42;
	char	c5 = 42;
	char	c6 = 'a';
	char	*s1 = NULL;
	char	*s2 = "";
	char	*s3 = "Hello World";
	char	*s4 = """";
	int		n1 = 0;
	int		n2 = '0';
	int		n3 = 0x1a13;
	int		n4 = INT_MAX;
	int		n5 = INT_MIN;
	int		n6 = '\0';
	int		un1 = INT_MIN;
	int		un2 = -15487908;
	int		un3 = 15487908;
	int		un4 = INT_MAX;
	int		*ptr1 = &n1;
	int		*ptr2 = &n2;
	int		*ptr3 = &n3;
	char	*ptr4 = s1;
	char	*ptr5 = s2;
	char	*ptr6 = s3;
	char	*ptr7 = s4;

	printf("Resultados printf original\n");
	printf("Formateador c\n");
	printf("c1: %c c2: %c c3: %c c4: %c c5: %c c6: %c\n", c1, c2, c3, c4, c5, c6);
	printf("Formateador s\n");
	printf("s1: %s s2: %s s3: %s s4: %s\n", s1, s2, s3, s4);
	printf("Formateador d\n");
	printf("n1: %d n2: %d n3: %d n4: %d n5: %d n6: %d\n", n1, n2, n3, n4, n5, n6);
	printf("Formateador i\n");
	printf("n1: %i n2: %i n3: %i n4: %i n5: %i n6: %i\n", n1, n2, n3, n4, n5, n6);
	printf("Formateador u\n");
	printf("un1: %u un2: %u un3: %u un4: %u\n", un1, un2, un3, un4);
	printf("Formateador p\n");
	printf("ptr1: %p ptr2: %p ptr3: %p ptr4: %p ptr5: %p ptr6: %p ptr7: %p\n\n", ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7);
	/*printf("Formateador porcentaje");
	printf("% %% %%% %%%% %%%%% %%%%%%\n");
	printf("Formateador mixto porcentaje");
	printf("%c %%c %%%c %%%%c %%%%%c %%%%%%c %%%%%%%c %%%%%%%%c\n", c6, c6, c6, c6, c6, c6, c6, c6);*/
	
	ft_printf("Resultados ft_printf\n");
	ft_printf("Formateador c\n");
	ft_printf("c1: %c c2: %c c3: %c c4: %c c5: %c c6: %c\n", c1, c2, c3, c4, c5, c6);
	ft_printf("Formateador s\n");
	ft_printf("s1: %s s2: %s s3: %s s4: %s\n", s1, s2, s3, s4);
	ft_printf("Formateador d\n");
	ft_printf("n1: %d n2: %d n3: %d n4: %d n5: %d n6: %d\n", n1, n2, n3, n4, n5, n6);
	ft_printf("Formateador i\n");
	ft_printf("n1: %i n2: %i n3: %i n4: %i n5: %i n6: %i\n", n1, n2, n3, n4, n5, n6);
	ft_printf("Formateador u\n");
	ft_printf("un1: %u un2: %u un3: %u un4: %u\n", un1, un2, un3, un4);
	ft_printf("Formateador p\n");
	ft_printf("ptr1: %p ptr2: %p ptr3: %p ptr4: %p ptr5: %p ptr6: %p ptr7: %p\n", ptr1, ptr2, ptr3, ptr4, ptr5, ptr6, ptr7);
	/*ft_printf("Formateador solo %");
	ft_printf("1: % 2: %% 3: %%% 4: %%%% 5: %%%%% 6: %%%%%%\n");
	ft_printf("Formateador mixto %");
	ft_printf("%c %%c %%%c %%%%c %%%%%c %%%%%%c %%%%%%%c %%%%%%%%c\n", c6, c6, c6, c6, c6, c6, c6, c6);*/
	return (0);
}
