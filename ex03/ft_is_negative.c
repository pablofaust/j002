/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 22:48:17 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/05 23:05:59 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	int i;

	if (n > 0)
		{
			ft_putchar(c);
			c = 'P';
		}

	else
		{
			ft_puchar(c);
			c = 'N';
		}
}

int		main()
{
	ft_is_negative(int n);
	return (0);
}
