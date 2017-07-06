/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 15:51:26 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/06 19:17:37 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	char a;
	int exponent;
	int length;

	exponent = 10 * (length - 1);

	while (n != 0)
	{
		length++;
		n = n / 10;
	}

	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

	while (n > 10)
	{
		a = n % 10;
		a = a + '0';
		ft_putchar(a);
		n = n / (10 * exponent);
	}
}
