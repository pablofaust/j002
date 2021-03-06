/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:48:17 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/06 11:51:52 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_condition(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
		if (!(x == '7' && y == '8' && z == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
				{
					c = b + 1;
					while (c <= '9')
						{
							ft_condition(a, b, c);
							c++;
						}
					b++;
				}
			a++;
		}
}

int		main()
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}
