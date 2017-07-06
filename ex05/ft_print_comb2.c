/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:21:41 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/06 15:27:12 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n);

void	ft_print_comb2(void)
{
		char a;
		char b;
		char c;
		char d;

		a = '0';
		b = '0';
		c = '0';
		d = '0';
		while (a <= '9')
		{
			b = a + 1;
			while (b <= '9')
			{
				c = b + 1;
				while (c <= '9')
				{	
					d = c + 1;
					while (d <= '9')
					{	
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
						ft_putchar(',');
						ft_putchar(' ');
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
}
